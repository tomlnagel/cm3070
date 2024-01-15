using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Properties, statuses, and methods for a game piece
/// </summary>
public class GamePiece : MonoBehaviour
{
    //statuses
    [SerializeField] private bool held;
    [SerializeField] private int ownerIndex = -1; //default no owner

    //Materials
    private Material baseMat; //default material for this piece
    private MeshRenderer thisRenderer; //the object's renderer

    //object destruction
    private bool destroy;
    private float detroyLen; //total seconds to flash before detruction
    private float flashLen; //seconds per flash
    private float destroyTimer; //seconds since flashing started
    private float flashTimer; //seconds since last flash

    //events
    public delegate void Destruction(int owner);
    public static event Destruction onDestruction;

    //initialise piece
    void Start()
    {
        thisRenderer = GetComponent<MeshRenderer>(); //get the renderer for this object

        thisRenderer.material = baseMat;

        destroy = false;
        detroyLen = 2.0f;
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

    public bool Held
    { 
        get { return held; } 
        set { held = value; } 
    } 

    public int OwnerIndex
    {
        get { return ownerIndex; }
        set { ownerIndex = value; }
    }

    public Material BaseMat
    {
        set { baseMat = value; }
        //no need for getter
    }

    /// <summary>
    /// Called once per update loop
    /// Flash this object while awating destruction by dis/enabling renderer
    /// At end of destruction time destroy this object
    /// </summary>
    private void FlashAndDestroy()
    {
        destroyTimer += Time.deltaTime;
        flashTimer += Time.deltaTime;

        if (destroyTimer >= detroyLen)
        {
            onDestruction?.Invoke(ownerIndex);
            Destroy(gameObject);
        }
        
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
        held = true;
        gameObject.layer = LayerMask.NameToLayer("Outline");
    }

    /// <summary>
    /// Set this object to not 'held'
    /// Update layer to indicate status
    /// </summary>
    public void Drop()
    {
        held = false;
        gameObject.layer = LayerMask.NameToLayer("Default");
    }

    private void OnCollisionEnter(Collision collision)
    {
        
        //limited checks while piece is held
        if (held)
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

        ownerIndex = owner;
    }

    /// <summary>
    /// Set this object to be destroyed
    /// </summary>
    private void GroundPiece()
    {
        destroy = true;
    }

}
