using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Properties and methods for managing players
/// </summary>
public class Player : ScriptableObject
{
    private int playerNum;
    private string playerName;
    private Quaternion playerRotation;
    private Vector3 playerHome;
    private GameObject playerArea;
    private Color playerColor;
    private float stackHeight;
    private GameObject playerCard;
    private Vector2 cardPosition;
    private int lives;

    //events
    public delegate void LivesOut();
    public static event LivesOut onLivesOut;

    public int PlayerNum
    {
        get { return playerNum; }
        set { playerNum = value; }
    }

    public string PlayerName
    {
        get { return playerName; }
        set { playerName = value; }
    }

    public Vector3 PlayerHome
    {
        get { return playerHome; }
        set { playerHome = value; }
    }

    public Quaternion PlayerRotation
    {
        set { playerRotation = value; }
        //no getter required
    }

    public Color PlayerColor
    {
        get { return playerColor; }
        set { playerColor = value; }
    }

    public float StackHeight
    {
        get { return stackHeight; }
        set { stackHeight = value; }
    }

    public Vector2 CardPosition
    {
        set { cardPosition = value; }
        //no gettter required
    }

    public int Lives
    {
        get { return lives; }
        set { lives = value; }
    }

    /// <summary>
    /// Create GameObject from Prefab for this player's base
    /// Set apropriate position, rotation, colour, name text
    /// </summary>
    public void CreateBase()
    {
        //create the base at given position and rotation
        playerArea = Instantiate(Resources.Load("Prefabs/playerArea"), playerHome, playerRotation) as GameObject; 

        //set the owner
        playerArea.transform.Find("base").GetComponent<PlayerBase>().OwnerIndex = playerNum;

        //set player name
        playerArea.transform.Find("playerName").GetComponent<TextMesh>().text = playerName;

        //set the color
        //playerArea.transform.GetChild(0).GetComponent<Renderer>().material.color = playerColor;
        playerArea.transform.Find("playerName").GetComponent<TextMesh>().color = playerColor;
    }

    /// <summary>
    /// Create UI GameObject from Prefab for this player's Scorecard
    /// Set name, score
    /// </summary>
    public void CreateCard()
    {
        //instantiate the prefab
        playerCard = Instantiate(Resources.Load("Prefabs/playerCard"), GameObject.Find("Canvas").transform) as GameObject;

        //set the position
        playerCard.GetComponent<RectTransform>().anchoredPosition = cardPosition;

        //set the colour
        playerCard.GetComponent<Image>().color = playerColor;

        //set player name
        playerCard.transform.Find("playerName").GetComponent<Text>().text = playerName;

        UpdateScore(0f);
        UpdateLives(0);
    }

    /// <summary>
    /// Update stored score and set text on scorecard
    /// </summary>
    /// <param name="score">The player's current score</param>
    public void UpdateScore(float score)
    {
        stackHeight = score;

        //display as x10 bigger to 0dp
        //playerCard.transform.GetChild(2).GetComponent<Text>().text = (stackHeight * 10).ToString("0");
        playerCard.transform.Find("playerScoreValue").GetComponent<Text>().text = (stackHeight * 10).ToString("0");
    }

    /// <summary>
    /// Update stored life count and set text on scorecard
    /// </summary>
    /// <param name="delta">The amount to add to the current life count (can be negative)</param>
    private void UpdateLives(int delta)
    {
        lives += delta; //update life count
        
        //contruct heart string
        string lifeString = "";
        for (int i = 0; i < lives; i++) lifeString += " ♥ ";

        //update scorecard
        playerCard.transform.Find("playerLifeValue").GetComponent<Text>().text = lifeString;

        //check for all lives lost
        if (lives <= 0) onLivesOut?.Invoke();
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
