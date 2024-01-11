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
    [SerializeField] private int stackOwner;

    //Materials
    private Material baseMat; //default material for this piece
    private Material heldMat; //material for a held peice
    private MeshRenderer thisRenderer; //the object's renderer

    //object destruction
    private bool destroy;
    private float detroyLen; //total seconds to flash before detruction
    private float flashLen; //seconds per flash
    private float destroyTimer; //seconds since flashing started
    private float flashTimer; //seconds since last flash

    //initialise piece
    void Start()
    {
        heldMat = Resources.Load<Material>("Materials/Held_Piece_Mat");

        held = false;
        thisRenderer = GetComponent<MeshRenderer>(); //get the renderer for this object

        thisRenderer.material = baseMat;

        destroy = false;
        detroyLen = 2.6f;
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

    public int StackOwner
    {
        get { return stackOwner; }
        //no need for setter
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
    /// Update material to indicate status
    /// </summary>
    public void Pickup()
    {
        held = true;
        thisRenderer.material = heldMat;
    }

    /// <summary>
    /// Set this object to not 'held'
    /// Update material to indicate status
    /// </summary>
    public void Drop()
    {
        held = false;
        thisRenderer.material = baseMat;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (held)
        {
            //no collision triggers while piece held
            return;
        }

        string otherTag = collision.gameObject.tag;
        //GamePiece otherPiece = collision.gameObject.GetComponent<GamePiece>();

        //collision with 'ground'
        if (otherTag == "Ground")
        {
            GroundPiece();
            return;
        }

        //collsion with 'base'
        if (otherTag == "Base")
        {
            int owner = collision.gameObject.GetComponent<PlayerBase>().OwnerIndex;
            AddToStack(owner);
            return;
        }

        if (otherTag == "GamePiece")
        {
            int owner = collision.gameObject.GetComponent<GamePiece>().StackOwner;
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
        //flag this piece as stacked
        stackOwner = owner;
    }

    /// <summary>
    /// Set this object to be destroyed
    /// </summary>
    private void GroundPiece()
    {
        //set this piece for destruction
        destroy = true;
    }
}
