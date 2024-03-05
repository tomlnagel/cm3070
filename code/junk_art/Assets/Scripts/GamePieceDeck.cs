﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

/// <summary>
/// Make a 'deck; of game pieces, with one of each shape in each colour
/// Shuffle the deck, and 'deal' top piece
/// </summary>
public class GamePieceDeck : ScriptableObject
{
    private int piecesLeft;
    private string[] pieceNames;
    private string[] matNames;
    private string[][] deck;

    public int PiecesLeft
    {
        get { return piecesLeft; }
        //no  setter required
    }

    /// <summary>
    /// Initialise piece deck with one of each combination of piece and material
    /// </summary>
    /// <param name="playerCount">The number of players to create a deck for</param>
    public void InitDeck(int playerCount)
    {
        pieceNames = new string[] { "arch", "ball", "cup", "ess", "fatCylinder", "jump", "plate", "pyramid", "ring", "rocker", "spindle", "stand", "thinCylinder" };
        matNames = new string[] { "Green_Piece_Mat", "Orange_Piece_Mat", "Teal_Piece_Mat", "Purple_Piece_Mat" };
        piecesLeft = pieceNames.Length * matNames.Length; //total number of pieces in deck
        deck = new string[piecesLeft][]; //initialise a jagged array

        //make array of pieces
        for (int i = 0; i < pieceNames.Length; i++)
        {
            for (int j = 0; j < matNames.Length; j++)
            {
                string[] pieceDef = { pieceNames[i], matNames[j] }; //create a combined piece/mat
                int deckIndex = i * matNames.Length + j; //calculate index in the deck array
                deck[deckIndex] = pieceDef; //add it to the deck
            }
        }

        //shuffle it
        ShuffleDeck();

        //set deck size for player count
        //ensure equal number of pieces per player
        piecesLeft = (int)(Mathf.Floor(piecesLeft / playerCount) * playerCount);
    }

    /// <summary>
    /// Shuffle the array of game pieces using a pseudo-RNG
    /// </summary>
    private void ShuffleDeck()
    {
        System.Random rng = new System.Random(); //make a random number generator

        //iterate backwards through deck
        for (int i = deck.Length; i > 0; i--)
        {
            int rand = rng.Next(i);         //get an int up to current index
            string[] temp = deck[i - 1];    //store the val at current index
            deck[i - 1] = deck[rand];       //set current index to randomised val
            deck[rand] = temp;              //set randomised index to stored val
        }
    }

    /// <summary>
    /// Get the next game piece in the shuffled deck
    /// </summary>
    /// <returns>Array of strings: game piece name, material name</returns>
    public string[] NextPiece()
    {
        piecesLeft--; //reduce counter
        return deck[piecesLeft]; //return value just skipped over
    }
}
