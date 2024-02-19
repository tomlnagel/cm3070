﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.SceneManagement;

/// <summary>
/// Properties and methods for intialising the game state and managing the game while running
/// </summary>
public class GameController : MonoBehaviour
{

    [SerializeField] private int activePlayer;
    [SerializeField] private Canvas gameUI;
    [SerializeField] private Canvas pauseMenu;

    private int playerCount; //number of players
    private float radius = 13f; //radius of the game space
    private Player[] playerArray; //declare the player array
    private GamePieceDeck deck; //deck of game pieces

    string[] playerNames; //array to contain player names
    Color[] playerColors; //array to contain player colors

    private bool gamePaused; //is the game paused?
    private bool gameOver; //is the game finished?
    private GameObject gameOverText; //UI text

    //events
    public delegate void GameEnded();
    public static event GameEnded onGameEnded;

    private void OnEnable()
    {
        //event subscriptions
        GamePiece.onDestruction += LifeLost;
        Player.onLivesOut += GameEnd;
    }

    private void OnDisable()
    {
        //event subscriptions
        GamePiece.onDestruction -= LifeLost;
        Player.onLivesOut -= GameEnd;
    }

    private void Start()
    {
        SetupPlayers(); //get player count and fill arrays

        deck = ScriptableObject.CreateInstance<GamePieceDeck>(); //instantiate a deck of pieces
        deck.InitDeck(playerCount); //populate and shuffle the deck

        CreatePlayers();

        //ensure game over tet is hidden
        gameOverText = GameObject.Find("gameUI/gameOverText");
        gameOverText.SetActive(false);

        //start the game
        gameOver = false;
        activePlayer = -1;
        NextPlayer();        
    }

    private void Update()
    {
        //open/close menu on Esc
        if (Input.GetKey(KeyCode.Escape))
        {
            if (gamePaused) ClosePauseMenu();
            if (!gamePaused) OpenPauseMenu();
        }
    }

    /// <summary>
    /// Populate the playerCount variable and fill the player details arrays
    /// </summary>
    private void SetupPlayers()
    {
        playerCount = GameSettings.PlayerCount(); //get the number of players

        playerNames = new string[playerCount]; //set up the name array
        playerColors = new Color[playerCount]; //set up the color array

        //populate name array
        playerNames[0] = GameSettings.Player1_name;
        playerNames[1] = GameSettings.Player2_name;
        if (playerCount >= 3) playerNames[2] = GameSettings.Player3_name;
        if (playerCount >= 4) playerNames[3] = GameSettings.Player4_name;

        //populate color array
        playerColors[0] = GameSettings.Player1_color;
        playerColors[1] = GameSettings.Player2_color;
        if (playerCount >= 3) playerColors[2] = GameSettings.Player3_color;
        if (playerCount >= 4) playerColors[3] = GameSettings.Player4_color;

        //fill defaults for any blanks
        for (int i = 0; i < playerNames.Length; i++)
        {
            if (playerNames[i] == "") playerNames[i] = "Player " + (i + 1);
        }

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
            newPlayer.CardPosition = PlayerCardPosition(playerCount, i, -130f); //set the scorecard position
            newPlayer.Lives = GameSettings.StartingLives; //set number of lives

            //access name array, with fallback in case of out-of-bounds
            try
            {
                newPlayer.PlayerName = playerNames[i];
            } catch
            {
                newPlayer.PlayerName = "Player " + i+1;
            }

            //access colour array, with fallback in case of out-of-bounds
            try
            {
                newPlayer.PlayerColor = playerColors[i];
            } catch
            {
                newPlayer.PlayerColor = new Color(0.4f, 0.4f, 0.4f, 1f);
            }

            newPlayer.CreateBase(); //create stack base GameObject
            newPlayer.CreateCard(); //create scorecard

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
    /// Calculate player scorecard position by dividing the screen width evenly
    /// </summary>
    /// <param name="pCount">Total number of player in this game</param>
    /// <param name="pNum">This player's number</param>
    /// <param name="y">TThe y position of the card</param>
    /// <returns>The rotationof the player base</returns>
    private Vector2 PlayerCardPosition(int pCount, int pNum, float y)
    {
        //canvas width
        float canvW = GameObject.Find("gameUI").GetComponent<RectTransform>().rect.width;

        //scorecard width
        float cardW = 300f;

        //zone size
        float size = (canvW / pCount);

        //zone start
        float start = (size * pNum) - (canvW / 2);

        //padding
        float padding = (size - cardW) / 2;

        float x = start + padding + (cardW/2);

        return new Vector2(x, y);
    }

    /// <summary>
    /// Switch active player to the next in sequence
    /// </summary>
    public void NextPlayer()
    {
        StackHeights(); //recalculate stack heights
        if (activePlayer >= 0) playerArray[activePlayer].SetInactive(); //update scorecard for old player
        activePlayer = (activePlayer + 1) % playerCount; //advance player
        AlignCameraForPlayer(activePlayer); //realign camera
        playerArray[activePlayer].SetActive(); //update scorecard for new player
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

        //calculate new posistion
        Vector3 cameraPos = playerArray[playerNum].PlayerHome * 2.5f; //behind player home
        cameraPos.y = 25f; //above plane

        transform.position = cameraPos; //move the camera
        transform.LookAt(Vector3.zero); //rotate to face origin

        //re-enable normal controls
        transform.GetComponent<CameraController>().enabled = true; 
    }

    /// <summary>
    /// Spawn a game piece from the shuffled deck
    /// </summary>
    public void SpawnGamePiece()
    {
        //do nothing after game ends
        if (gameOver) return;

        //end the game if no pieces left
        if (deck.PiecesLeft <= 0)
        {
            GameEnd();
            return;
        }

        //name ond color of next peie in deck
        string[] newPieceDef = deck.NextPiece();

        //spawn a new piece at the hold point
        GameObject holdPoint = GameObject.Find("Hold Point");
        GameObject newPiece = Instantiate(Resources.Load<GameObject>("Prefabs/" + newPieceDef[0]), holdPoint.transform.position, UnityEngine.Random.rotation);
        
        //set the material
        Material newMat = Resources.Load<Material>("Materials/" + newPieceDef[1]);
        newPiece.GetComponent<GamePiece>().BaseMat = newMat;

        //set the owner
        newPiece.GetComponent<GamePiece>().OwnerIndex = activePlayer;

        //set it to held state
        GetComponent<GrabObject>().GrabTarget(newPiece);
    }

    /// <summary>
    /// Calculate maximum height for each player's stack
    /// Update the player objects with that value
    /// </summary>
    private void StackHeights()
    {
        //do nothing after game ends
        if (gameOver) return;

        //make a hash table for the stacks
        //values default to 0f
        float[] stackHeights = new float[playerCount];

        GameObject[] pieceList = GameObject.FindGameObjectsWithTag("GamePiece");

        //loop through each peice in play
        foreach(GameObject piece in pieceList)
        {
            //piece still held, don't count it, move on
            if (piece.GetComponent<GamePiece>().Held)
            {
                continue;
            }

            //piece moving (falling), don't count it, move on
            if (piece.GetComponent<Rigidbody>().velocity.magnitude > 0.6)
            {
                continue;
            }

            //owner of stack
            int pieceOwner = piece.GetComponent<GamePiece>().OwnerIndex;

            //piece not owned, don't count it, move on
            if (pieceOwner < 0)
            {
                continue;
            }

            //top of axis-aligned bounding box
            float pieceHeight = piece.GetComponent<Collider>().bounds.max.y;

            //update stack heights if greater
            if (pieceHeight > stackHeights[pieceOwner])
            {
                stackHeights[pieceOwner] = pieceHeight;
            }
        }

        //write the heights to the player objects
        for(int i = 0; i < stackHeights.Length; i++)
        {
            playerArray[i].UpdateScore(stackHeights[i]);
        }
    }

    /// <summary>
    /// Decrease a player's lofe count, triggered when a piece is destroyed
    /// </summary>
    /// <param name="playerIndex">The owner of the destroyed piece, to lose a life</param>
    private void LifeLost(int playerIndex)
    {
        //do nothing if game already ended
        if (gameOver) return;

        //recalculate stack heights
        StackHeights();

        //update player object
        playerArray[playerIndex].LoseLife(); 
    }

    /// <summary>
    /// End the game and display winner details
    /// </summary>
    private void GameEnd()
    {
        //final check of stack heights
        StackHeights();

        //set the gameover flag
        gameOver = true;

        //broadcast event to disable game controls
        onGameEnded?.Invoke();

        //display 'Game Over'
        gameOverText.SetActive(true);

        //disable 'next player' button
        GameObject.Find("gameUI/nextPlayerButton").SetActive(false);

        //sort the players in descending score
        Array.Sort(playerArray, new PlayerComparer());
        
        //rearrange scorecards
        for (int i = 0; i < playerCount; i++)
        {
            Vector2 scorecardPos = PlayerCardPosition(playerCount, i, 0f); //position for the scorecard
            int placing = i + 1;
            playerArray[i].GameEndScorecard(scorecardPos, placing); //update the scorecard
        }

        
    }

    /// <summary>
    /// Disable the game controls (pause game) and open pause menu
    /// </summary>
    public void OpenPauseMenu()
    {
        //disable all camera controls while in menu
        transform.GetComponent<CameraController>().enabled = false;

        //switch UI canvases
        pauseMenu.enabled = true;
        gameUI.enabled = false;

        //set flag
        gamePaused = true;
    }

    /// <summary>
    /// Close pause menu and re-enable game controls
    /// </summary>
    public void ClosePauseMenu()
    {
        //re-enable camera controls
        transform.GetComponent<CameraController>().enabled = true;

        //switch UI canvases
        pauseMenu.enabled = false;
        gameUI.enabled = true;

        //set flag
        gamePaused = false;
    }

    /// <summary>
    /// Return from an active game to the main menu
    /// </summary>
    public void MainMenu()
    {
        GameSettings.Reset(); //reset game settings to default
        SceneManager.LoadScene(0); //load the main menu
    }

    /// <summary>
    /// Close the game application
    /// </summary>
    public void QuitGame()
    {
        Debug.Log("Quitting");
        Application.Quit();
    }
}
