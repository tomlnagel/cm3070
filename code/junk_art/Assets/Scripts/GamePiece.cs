using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

/// <summary>
/// Properties, statuses, and methods for a game piece
/// </summary>
public class GamePiece : MonoBehaviour
{
    //statuses
    public bool Held { get; set; }
    public int OwnerIndex { get; set; } = -1; //default no owner
    public bool Stacked { get; set; } = false; //default unstacked

    //Materials
    public Material BaseMat { get; set; } //default material for this piece
    private MeshRenderer thisRenderer; //the object's renderer

    //object destruction
    private bool destroy;
    private float detroyLen; //total seconds to flash before detruction
    private float flashLen; //seconds per flash
    private float destroyTimer; //seconds since flashing started
    private float flashTimer; //seconds since last flash

    //audio
    private AudioSource source;

    //events
    public delegate void Destruction(int owner);
    public static event Destruction onDestruction;

    //initialise piece
    void Start()
    {
        thisRenderer = GetComponent<MeshRenderer>(); //get the renderer component
        source = GetComponent<AudioSource>(); //get the audioSource component

        thisRenderer.material = BaseMat;

        //game piece destruction settings
        destroy = false;
        detroyLen = 1.6f;
        flashLen = 0.2f;
        destroyTimer = 0f;
        flashTimer = 0f;
    }

    void Update()
    {
        if (destroy)
        {
            FlashAndDestroy();
        }
    }

    /// <summary>
    /// Called once per update loop
    /// Flash this object while awating destruction by dis/enabling renderer
    /// At end of destruction time destroy this object
    /// </summary>
    private void FlashAndDestroy()
    {
        //event triggers at start of destruction timer
        if (destroyTimer == 0f)
        {
            onDestruction?.Invoke(OwnerIndex);
        }

        //increment counters
        destroyTimer += Time.deltaTime;
        flashTimer += Time.deltaTime;

        //destroy at end of total timer
        if (destroyTimer >= detroyLen)
        {
            Destroy(gameObject);
        }

        //alternate renderer and reset flash timer
        if (flashTimer >= flashLen)
        {
            thisRenderer.enabled = !thisRenderer.enabled;
            flashTimer = 0f;
        }
    }

    /// <summary>
    /// Set this object to 'held'
    /// Update layer to indicate status
    /// </summary>
    public void Pickup()
    {
        Held = true;
        gameObject.layer = LayerMask.NameToLayer("Outline");
    }

    /// <summary>
    /// Set this object to not 'held'
    /// Update layer to indicate status
    /// </summary>
    public void Drop()
    {
        Held = false;
        gameObject.layer = LayerMask.NameToLayer("Default");
    }

    private void OnCollisionEnter(Collision collision)
    {
        //limited checks while piece is held
        if (Held)
        {
            return;
        }

        string otherTag = collision.gameObject.tag;

        //collision with 'ground'
        if (otherTag == "Ground")
        {
            GroundPiece();
            return;
        }

        //collision with 'base'
        if (otherTag == "Base")
        {
            int owner = collision.gameObject.GetComponent<PlayerBase>().OwnerIndex;
            AddToStack(owner);
            return;
        }

        //collision with another piece
        if (otherTag == "GamePiece")
        {
            //don't do anything if other piece isn't part of a stack
            if (!collision.gameObject.GetComponent<GamePiece>().Stacked) return;

            int owner = collision.gameObject.GetComponent<GamePiece>().OwnerIndex;
            AddToStack(owner);
            return;
        }

    }

    /// <summary>
    /// Set this object to be part of a player's stack
    /// </summary>
    /// <param name="owner">The player's index</param>
    private void AddToStack(int owner)
    {
        //don't make a piece unowned
        if (owner < 1)
        {
            return;
        }

        OwnerIndex = owner;

        //play a sound
        TouchSound();

        //flag this piece as stacked
        Stacked = true;
    }

    /// <summary>
    /// Set this object to be destroyed
    /// </summary>
    private void GroundPiece()
    {
        destroy = true;
        FallSound();
    }

    /// <summary>
    /// Play an audio clip of the piece hittng the table
    /// </summary>
    private void FallSound()
    {  
        //get a random falling clip
        source.clip = AudioController.GetFallClip();

        //play it
        source.Play();
    }

    /// <summary>
    /// Play an audio clip of the piece hitting another piece
    /// </summary>
    private void TouchSound()
    {
        //get a random touching clip
        source.clip = AudioController.GetTouchClip();

        //play it
        source.Play();
    }
}
