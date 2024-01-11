using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
        get { return playerRotation; }
        set { playerRotation = value; }
    }

    public Color PlayerColor
    {
        get { return playerColor; }
        set { playerColor = value; }
    }

    /// <summary>
    /// Create GameObject from Prefab for this player's base
    /// Set appropraite position, rotation, colour, name text
    /// </summary>
    public void CreateBase()
    {
        //create the base at given position and rotation
        playerArea = Instantiate(Resources.Load("Prefabs/playerArea"), playerHome, playerRotation) as GameObject; 

        //set the owner
        playerArea.transform.GetChild(0).GetComponent<PlayerBase>().OwnerIndex = playerNum;

        //set player name
        playerArea.transform.GetChild(1).GetComponent<TextMesh>().text = playerName;

        //set the color
        //playerArea.transform.GetChild(0).GetComponent<Renderer>().material.color = playerColor;
        playerArea.transform.GetChild(1).GetComponent<TextMesh>().color = playerColor;
    }
}
