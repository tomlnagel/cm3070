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
    public float Score { get; set; }
    public Vector2 CardPosition { get; set; }
    public int Lives { get; set; }

    private GameObject playerArea;
    private GameObject playerCard;

    //events
    public delegate void LivesOut();
    public static event LivesOut onLivesOut;

    /// <summary>
    /// Create GameObject from Prefab for this player's base
    /// Set position, rotation, colour, name text
    /// </summary>
    public void CreateBase()
    {
        //create the base at given position and rotation
        playerArea = Instantiate(Resources.Load<GameObject>("Prefabs/playerArea"), PlayerHome, PlayerRotation); 

        //set the owner
        playerArea.transform.Find("base").GetComponent<PlayerBase>().OwnerIndex = PlayerNum;

        //set player name
        playerArea.transform.Find("playerName").GetComponent<TMP_Text>().text = PlayerName;

        //set the color
        playerArea.transform.Find("playerName").GetComponent<TMP_Text>().color = PlayerColor;
    }

    /// <summary>
    /// Create UI GameObject from Prefab for this player's Scorecard
    /// Set name, score
    /// </summary>
    public void CreateCard()
    {
        //instantiate the prefab
        playerCard = Instantiate(Resources.Load<GameObject>("Prefabs/playerCard"), GameObject.Find("gameUI").transform);

        //set the position
        playerCard.GetComponent<RectTransform>().anchoredPosition = CardPosition;

        //set the colour
        playerCard.GetComponent<Image>().color = PlayerColor;

        //set player name
        playerCard.transform.Find("playerName").GetComponent<TMP_Text>().text = PlayerName;

        UpdateScore(0f); //set score to 0
        UpdateLives();   //display starting lives
    }

    /// <summary>
    /// Update stored score and set text on scorecard
    /// </summary>
    /// <param name="score">The player's current score</param>
    public void UpdateScore(float stackHeight)
    {
        //10 times stack height
        Score = stackHeight * 10;

        //penalty for each life lost
        Score -= (GameSettings.StartingLives - Lives) * GameSettings.LifePenalty;

        //display to 0dp
        playerCard.transform.Find("playerScoreValue").GetComponent<TMP_Text>().text = Score.ToString("0");
    }

    /// <summary>
    /// Update displayed life count on scorecard
    /// </summary>
    private void UpdateLives()
    {        
        //contruct heart string
        string lifeString = "";
        for (int i = 0; i < Lives; i++) lifeString += " ♥ ";

        //update scorecard
        playerCard.transform.Find("playerLifeValue").GetComponent<TMP_Text>().text = lifeString;

        //check for all lives lost
        if (Lives <= 0) onLivesOut?.Invoke();
    }

    /// <summary>
    /// Decrement the player's life count and update display
    /// </summary>
    public void LoseLife()
    {
        Lives--;
        UpdateLives();
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
    /// <param name="placing">This player's final position</param>
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
        return (new CaseInsensitiveComparer()).Compare(((Player)y).Score, ((Player)x).Score);
    }
}
