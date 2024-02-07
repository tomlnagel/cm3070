using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// Main menu functions: 
/// setting up players
/// starting the game
/// exiting the application
/// </summary>
public class MainMenu : MonoBehaviour
{
    [SerializeField] private TMP_InputField p1Name;
    [SerializeField] private TMP_InputField p2Name;
    [SerializeField] private TMP_InputField p3Name;
    [SerializeField] private TMP_InputField p4Name;
    [SerializeField] private Image p1swatch;
    [SerializeField] private Image p2swatch;
    [SerializeField] private Image p3swatch;
    [SerializeField] private Image p4swatch;

    private int colorPickPlayer; //player currently being assigned a color

    /// <summary>
    /// Save the player names and start the game
    /// </summary>
    public void StartGame()
    {
        GameSettings.Player1_name = p1Name.text;
        GameSettings.Player2_name = p2Name.text;

        if (GameSettings.Player3_enabled) GameSettings.Player3_name = p3Name.text;
        if (GameSettings.Player4_enabled) GameSettings.Player4_name = p4Name.text;

        SceneManager.LoadScene(1); //start scene 1 (main game)
    }

    /// <summary>
    /// Quit the game to Windows
    /// </summary>
    public void QuitGame()
    {
        Debug.Log("Quitting");
        Application.Quit();
    }

    /// <summary>
    /// Toggle player 3 on or off
    /// Also toggles player 4
    /// </summary>
    public void Player3Toggle()
    {
        GameSettings.Player3_enabled = !GameSettings.Player3_enabled; //switch state
        GameSettings.Player4_enabled = GameSettings.Player3_enabled; //set p4 state to match

        Transform p3Button = transform.Find("player3_enable");
        Transform p4Button = transform.Find("player4_enable");
        Transform p3Picker = transform.Find("player3_color");
        Transform p4Picker = transform.Find("player4_color");

        if (GameSettings.Player3_enabled)
        {
            //change the button images
            PlayerEnableImage(p3Button, true);
            PlayerEnableImage(p4Button, true);

            //enable p4 button interaction
            p4Button.GetComponent<Button>().enabled = true;
            p4Button.Find("cross").GetComponent<Image>().color = new Color(.78f, .13f, 0f);

            //enable name inputs
            ToggleInputField(p3Name, true);
            ToggleInputField(p4Name, true);

            //enable color pickers
            ToggleColorPicker(p3Picker, true);
            ToggleColorPicker(p4Picker, true);
        }
        else
        {
            //change the button images
            PlayerEnableImage(p3Button, false);
            PlayerEnableImage(p4Button, false);

            //disable p4 button interaction
            p4Button.GetComponent<Button>().enabled = false;
            p4Button.Find("cross").GetComponent<Image>().color = new Color(.3f, .1f, .1f);

            //disable name inputs
            ToggleInputField(p3Name, false);
            ToggleInputField(p4Name, false);

            //disable color pickers
            ToggleColorPicker(p3Picker, false);
            ToggleColorPicker(p4Picker, false);
        }
    }

    /// <summary>
    /// Toggle player 4 on or off
    /// </summary>
    public void Player4Toggle()
    {
        GameSettings.Player4_enabled = !GameSettings.Player4_enabled; //switch state

        Transform p4Button = transform.Find("player4_enable");
        Transform p4Picker = transform.Find("player4_color");

        if (GameSettings.Player4_enabled)
        {
            PlayerEnableImage(p4Button, true);
            ToggleInputField(p4Name, true);
            ToggleColorPicker(p4Picker, true);
        }
        else
        {
            PlayerEnableImage(p4Button, false);
            ToggleInputField(p4Name, false);
            ToggleColorPicker(p4Picker, false);
        }
    }

    /// <summary>
    /// Change the image for the player-enable buttons
    /// </summary>
    /// <param name="button">The button to change</param>
    /// <param name="enabled">The enabled state of the player</param>
    private void PlayerEnableImage(Transform button, bool enabled)
    {
        //get the button's images
        Image tick = button.Find("tick").GetComponent<Image>();
        Image cross = button.Find("cross").GetComponent<Image>();

        //set tick if player enabled, cross if not
        tick.enabled = enabled;
        cross.enabled = !enabled;
    }

    /// <summary>
    /// Set interction state and background color of a text input field
    /// </summary>
    /// <param name="field">The TMP Input field to change</param>
    /// <param name="isEnabled">The enabled state of the field</param>
    private void ToggleInputField(TMP_InputField field, bool isEnabled)
    {
        //change interaction
        field.enabled = isEnabled;

        //change background color
        field.image.color = (isEnabled) ? new Color(1f, 1f, 1f) : new Color(0.5f, 0.5f, 0.5f);
    }

    /// <summary>
    /// Set interction state and color alpha of a color picker button
    /// </summary>
    /// <param name="picker">The transform of the color picker button</param>
    /// <param name="isEnabled">The enabled state of the button</param>
    private void ToggleColorPicker(Transform picker, bool isEnabled)
    {
        //get the color swatch
        Transform swatch = picker.Find("swatch");

        //change the alpha of button and swatch
        Color buttonCol = picker.GetComponent<Image>().color;
        Color swatchCol = swatch.GetComponent<Image>().color;
        buttonCol.a = (isEnabled) ? 1f : 0.7f;
        swatchCol.a = (isEnabled) ? 1f : 0.7f;
        picker.GetComponent<Image>().color = buttonCol;
        swatch.GetComponent<Image>().color = swatchCol;

        //change interaction of button
        picker.GetComponent<Button>().enabled = isEnabled;
    }

    /// <summary>
    /// Activate the color picker for the chosen player
    /// </summary>
    /// <param name="player">The player geing assinged a new color</param>
    public void PickColor(int player)
    {
        //record which player we're picking for
        colorPickPlayer = player; 

        //enable the picker
        transform.parent.Find("ColorPicker").gameObject.SetActive(true); 
    }

    /// <summary>
    /// Update a player's chosen color, from a swatch image
    /// </summary>
    /// <param name="swatch">The image containing the chosen color</param>
    public void AssignColor(Image swatch)
    {
        //get color
        Color chosenColor = swatch.GetComponent<Image>().color;

        //save to settings
        if (colorPickPlayer == 1) GameSettings.Player1_color = chosenColor;
        if (colorPickPlayer == 2) GameSettings.Player2_color = chosenColor;
        if (colorPickPlayer == 3) GameSettings.Player3_color = chosenColor;
        if (colorPickPlayer == 4) GameSettings.Player4_color = chosenColor;

        //disable picker
        transform.parent.Find("ColorPicker").gameObject.SetActive(false);

        //update displayed colour for all players
        UpdatePlayerColors();
    }

    /// <summary>
    /// Update the color swatches shown in the main menu
    /// </summary>
    private void UpdatePlayerColors()
    {
        p1swatch.color = GameSettings.Player1_color;
        p2swatch.color = GameSettings.Player2_color;
        
        //don't update disabled players
        if (GameSettings.Player3_enabled) p3swatch.color = GameSettings.Player3_color;
        if (GameSettings.Player4_enabled) p4swatch.color = GameSettings.Player4_color;
    }
}
