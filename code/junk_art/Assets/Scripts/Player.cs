using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// Properties and methods for managing players
/// </summary>
public class Player : ScriptableObject
{
    public int PlayerNum { get; set; }
    public string PlayerName { get; set; }
    public Vector3 PlayerHome { get; set; }
    public Quaternion PlayerRotation { get; set; }
    public Color PlayerColor { get; set; }
    public float StackHeight { get; set; }
    public Vector2 CardPosition { get; set; }
    public int Lives { get; set; }

    private GameObject playerArea;
    private GameObject playerCard;

    //events
    public delegate void LivesOut();
    public static event LivesOut onLivesOut;

    /// <summary>
    /// Create GameObject from Prefab for this player's base
    /// Set apropriate position, rotation, colour, name text
    /// </summary>
    public void CreateBase()
    {
        //create the base at given position and rotation
        playerArea = Instantiate(Resources.Load("Prefabs/playerArea"), PlayerHome, PlayerRotation) as GameObject; 

        //set the owner
        playerArea.transform.Find("base").GetComponent<PlayerBase>().OwnerIndex = PlayerNum;

        //set player name
        playerArea.transform.Find("playerName").GetComponent<TextMesh>().text = PlayerName;

        //set the color
        //playerArea.transform.GetChild(0).GetComponent<Renderer>().material.color = playerColor;
        playerArea.transform.Find("playerName").GetComponent<TextMesh>().color = PlayerColor;
    }

    /// <summary>
    /// Create UI GameObject from Prefab for this player's Scorecard
    /// Set name, score
    /// </summary>
    public void CreateCard()
    {
        //instantiate the prefab
        playerCard = Instantiate(Resources.Load("Prefabs/playerCard"), GameObject.Find("gameUI").transform) as GameObject;

        //set the position
        playerCard.GetComponent<RectTransform>().anchoredPosition = CardPosition;

        //set the colour
        playerCard.GetComponent<Image>().color = PlayerColor;

        //set player name
        playerCard.transform.Find("playerName").GetComponent<TMP_Text>().text = PlayerName;

        UpdateScore(0f);
        UpdateLives(0);
    }

    /// <summary>
    /// Update stored score and set text on scorecard
    /// </summary>
    /// <param name="score">The player's current score</param>
    public void UpdateScore(float score)
    {
        StackHeight = score;

        //display as x10 bigger to 0dp
        //playerCard.transform.GetChild(2).GetComponent<Text>().text = (stackHeight * 10).ToString("0");
        playerCard.transform.Find("playerScoreValue").GetComponent<TMP_Text>().text = (StackHeight * 10).ToString("0");
    }

    /// <summary>
    /// Update stored life count and set text on scorecard
    /// </summary>
    /// <param name="delta">The amount to add to the current life count (can be negative)</param>
    private void UpdateLives(int delta)
    {
        Lives += delta; //update life count
        
        //contruct heart string
        string lifeString = "";
        for (int i = 0; i < Lives; i++) lifeString += " ♥ ";

        //update scorecard
        playerCard.transform.Find("playerLifeValue").GetComponent<TMP_Text>().text = lifeString;

        //check for all lives lost
        if (Lives <= 0) onLivesOut?.Invoke();
    }

    /// <summary>
    /// Decrement the player's life count
    /// </summary>
    public void LoseLife()
    {
        UpdateLives(-1);
    }

    /// <summary>
    /// Increase scorecard's scale to indicate this is the active player
    /// </summary>
    public void SetActive()
    {
        playerCard.transform.localScale = new Vector3(1.2f, 1.2f, 1.2f);
    }

    /// <summary>
    /// Reset the scorecard to default scale
    /// </summary>
    public void SetInactive()
    {
        playerCard.transform.localScale = Vector3.one;
    }

    /// <summary>
    /// Rearrange scorecards at game end
    /// </summary>
    /// <param name="newCardPosition">The new position for the card</param>
    /// <param name="winner">Is this player the winner?</param>
    public void GameEndScorecard(Vector2 newCardPosition, int placing)
    {
        //set new anchor and position
        playerCard.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 0.5f);
        playerCard.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 0.5f);
        playerCard.GetComponent<RectTransform>().anchoredPosition = newCardPosition;

        //emphasise winner
        if (placing == 1)
        {
            playerCard.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
            playerCard.transform.Find("first").GetComponent<Image>().enabled = true;
        } else if (placing == 2)
        {
            playerCard.transform.localScale = new Vector3(1.2f, 1.2f, 1.2f);
            playerCard.transform.Find("second").GetComponent<Image>().enabled = true;
        } else if (placing == 3)
        {
            playerCard.transform.localScale = new Vector3(1.1f, 1.1f, 1.1f);
            playerCard.transform.Find("third").GetComponent<Image>().enabled = true;
        } else
        {
            playerCard.transform.localScale = Vector3.one;
        }
    }

    //end class
}

/// <summary>
/// Allow Player objects to be sorted by their stackHeight score
/// </summary>
public class PlayerComparer: IComparer
{
    public int Compare(object x, object y)
    {
        return (new CaseInsensitiveComparer()).Compare(((Player)y).StackHeight, ((Player)x).StackHeight);
    }
}
