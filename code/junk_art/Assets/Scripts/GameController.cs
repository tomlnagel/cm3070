using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

/// <summary>
/// Properties and methods for intialising the game state and managing the game while running
/// </summary>
public class GameController : MonoBehaviour
{

    [SerializeField]
    private int activePlayer;

    private int playerCount; //number of players
    private float radius; //radius of the game space
    private Player[] playerArray; //declare the player array
    private GamePieceDeck deck; //deck of game pieces

    //temprorary arrays until menu system built
    string[] tempNames = {"Tom", "Lucy", "Tim" };
    Color[] tempCols = { new Color(0.8f, 0.4f, 0.1f, 1), new Color(0.3f, 0.1f, 0.7f, 1), new Color(0.5f, 0.1f, 0.1f, 1) };

    private void OnEnable()
    {
        //event subscriptions
        //PieceStacked.onStackChanged += calcMaxHeight;
    }

    private void OnDisable()
    {
        //event subscriptions
        //PieceStacked.onStackChanged -= calcMaxHeight;
    }

    void Start()
    {
        playerCount = 3;
        radius = 13f;

        deck = ScriptableObject.CreateInstance<GamePieceDeck>(); //instantiate a deck of pieces
        deck.InitDeck(); //populate and shuffle the deck

        CreatePlayers();
        
        //start the game
        activePlayer = -1;
        NextPlayer();
        
    }

    /// <summary>
    /// Create player objects and add to playerArray
    /// </summary>
    private void CreatePlayers()
    {
        //intiialise the array
        playerArray = new Player[playerCount];

        //populate the array
        for (int i = 0; i < playerCount; i++)
        {
            Player newPlayer = ScriptableObject.CreateInstance<Player>(); //instantiate player
            newPlayer.PlayerNum = i; //set the pleyer number
            newPlayer.PlayerHome = PlayerHomePos(playerCount, i); //set base position
            newPlayer.PlayerRotation = PlayerHomeRotation(playerCount, i); //set base rotation

            //access temprorary arrays
            try
            {
                newPlayer.PlayerName = tempNames[i];
            } catch
            {
                newPlayer.PlayerName = "anotherOne";
            }

            try
            {
                newPlayer.PlayerColor = tempCols[i];
            } catch
            {
                newPlayer.PlayerColor = new Color(0.4f, 0.4f, 0.4f, 1f);
            }

            newPlayer.CreateBase(); //create stack base GameObject
            playerArray[i] = newPlayer; //insert into array
        }
    }

    /// <summary>
    /// Calculate player base position by dividing circular table evenly by player count
    /// </summary>
    /// <param name="pCount">Total number of player in this game</param>
    /// <param name="pNum">This player's number</param>
    /// <returns>The position of the player base</returns>
    private Vector3 PlayerHomePos(int pCount, int pNum)
    {
        float angle = (2f * Mathf.PI / pCount) * pNum; //radians around circle

        float y = 0f;
        float x = Mathf.Cos(angle) * radius;
        float z = Mathf.Sin(angle) * radius;

        return new Vector3(x, y, z);
    }

    /// <summary>
    /// Calculate player base rotation to face toward the table centre (origin)
    /// </summary>
    /// <param name="pCount">Total number of player in this game</param>
    /// <param name="pNum">This player's number</param>
    /// <returns>The rotationof the player base</returns>
    private Quaternion PlayerHomeRotation(int pCount, int pNum)
    {
        float angle = 270 - ((360 / pCount) * pNum); //rotate to point to table centre

        //convert to quaternion rotation
        return Quaternion.Euler(0, angle, 0);
    }

    /// <summary>
    /// Switch active player to the next in sequence
    /// </summary>
    public void NextPlayer()
    {
        activePlayer = (activePlayer + 1) % playerCount; //advance player
        AlignCameraForPlayer(activePlayer); //realign camera
        SpawnGamePiece(); //give the new player a piece to add
    }

    /// <summary>
    /// Set the camera's position and orientation to the default for a player
    /// </summary>
    /// <param name="playerNum">The player number to set the camera for</param>
    private void AlignCameraForPlayer(int playerNum)
    {
        //need to disable camera control script to allow this script to move camera
        transform.GetComponent<CameraController>().enabled = false;

        Vector3 cameraPos = playerArray[playerNum].PlayerHome * 2.5f; //behind player home
        cameraPos.y = 25f; //above plane

        transform.position = cameraPos; //move the camera
        transform.LookAt(Vector3.zero); //rotate to face origin

        transform.GetComponent<CameraController>().enabled = true; //re-enable normal controls
    }

    /// <summary>
    /// Spawn a game piece from the shuffled deck
    /// </summary>
    public void SpawnGamePiece()
    {
        if (deck.PiecesLeft < 1)
        {
            //must figure out what to do if we run out of pieces
            return;
        }

        string[] newPieceDef = deck.NextPiece();
        
        //create the new peice at given position and rotation
        GameObject newPiece = Instantiate(Resources.Load("Prefabs/" + newPieceDef[0]), new Vector3(0, 7, 0), Quaternion.identity) as GameObject;
        //set the material
        Material newMat = Resources.Load("Materials/" + newPieceDef[1]) as Material;
        newPiece.GetComponent<GamePiece>().BaseMat = newMat;
    }

    /*    private void calcMaxHeight()
    {
        float maxHeight = 0f;

        GameObject[] pieceList = GameObject.FindGameObjectsWithTag("GamePiece");

        //loop through each object in the stack
        foreach(GameObject piece in pieceList)
        {
            //update max height with top of bounding box
            if (piece.GetComponent<ObjectTags>().stacked)
            {
                maxHeight = Mathf.Max(maxHeight, piece.GetComponent<Collider>().bounds.max.y); //this needs adjusting to allow for multiple colliders
            }
        }

        Debug.Log("Stack height: " + maxHeight.ToString("0.0"));
    }
*/
}
