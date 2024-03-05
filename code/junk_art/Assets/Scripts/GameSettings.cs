using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Game settings, for passing between menu and game scenes
/// Static class - only one instace allowed
/// </summary>
public static class GameSettings
{
    //players 1 & 2 always enabled, 3 & 4 start enabled
    public static bool Player1_enabled { get; } = true;
    public static bool Player2_enabled { get; } = true;
    public static bool Player3_enabled { get; set; } = true;
    public static bool Player4_enabled { get; set; } = true;

    public static string Player1_name { get; set; }
    public static string Player2_name { get; set; }
    public static string Player3_name { get; set; }
    public static string Player4_name { get; set; }

    public static Color Player1_color { get; set; } = new Color(0.6f, 0.02f, 0.02f);
    public static Color Player2_color { get; set; } = new Color(0.2f, 0.02f, 0.6f);
    public static Color Player3_color { get; set; } = new Color(0.02f, 0.35f, 0.02f);
    public static Color Player4_color { get; set; } = new Color(0.6f, 0.02f, 0.6f);

    //starting life count for each player
    public static int StartingLives { get; set; } = 3;
    //score penalty for losing a life
    public static int LifePenalty { get; set; } = 10;


    /// <summary>
    /// Get number of active players this game, 
    /// based on which players are enabled in the main menu
    /// </summary>
    /// <returns>The player count</returns>
    public static int PlayerCount()
    {
        int playerCount = 2; //p1 and p2 always active

        if (Player3_enabled) playerCount += 1;
        if (Player4_enabled) playerCount += 1;

        return playerCount;
    }

    /// <summary>
    /// Reset all settings to default values
    /// </summary>
    public static void Reset()
    {
        Player3_enabled = true;
        Player4_enabled = true;
        Player1_name = null;
        Player2_name = null;
        Player3_name = null;
        Player4_name = null;
        Player1_color = new Color(0.6f, 0.02f, 0.02f);
        Player2_color = new Color(0.2f, 0.02f, 0.6f);
        Player3_color = new Color(0.02f, 0.35f, 0.02f);
        Player4_color = new Color(0.6f, 0.02f, 0.6f);
    }
}
