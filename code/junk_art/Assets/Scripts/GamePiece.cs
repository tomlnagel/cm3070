using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * Properties, satuses and methods for game pieces
*/
public class GamePiece : MonoBehaviour
{
    [Header("Statuses")]
    [SerializeField] public bool stacked;
    [SerializeField] public bool grounded;
    [SerializeField] public bool held;

    //Materials
    private Material baseMat; //default material for this piece
    //private Material stackedMat; //material for a stacked piece
    //private Material groundedMat; //material for a fallen peice
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
        baseMat = Resources.Load<Material>("Materials/New_Piece_Mat");
        //stackedMat = Resources.Load<Material>("Materials/Stacked_Piece_Mat");
        //groundedMat = Resources.Load<Material>("Materials/Grounded_Piece_Mat");
        heldMat = Resources.Load<Material>("Materials/Held_Piece_Mat");

        stacked = false;
        grounded = false;
        held = false;
        thisRenderer = GetComponent<MeshRenderer>(); //get the renderer for this object

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

    //get piece statuses
    public string PrintStatuses()
    {
        string ret = "statuses for ";
        ret += gameObject.name;
        ret += "; stacked: ";
        ret += stacked;
        ret += " grounded: ";
        ret += grounded;
        ret += " held: ";
        ret += held;
        return ret;
    }

    //set piece status to 'held'
    public void Pickup()
    {
        held = true;
        thisRenderer.material = heldMat;
    }

    //unset held status
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
        GamePiece otherPiece = collision.gameObject.GetComponent<GamePiece>();

        //collision with 'ground'
        if (otherTag == "Ground")
        {
            GroundPiece();
            return;
        }

        //collsion with 'base'
        if (otherTag == "Base")
        {
            AddToStack();
            return;
        }

        //colided with something other than a game peice
        if (!otherPiece)
        {
            return;
        }

        if (otherPiece.stacked && !otherPiece.grounded)
        {
            AddToStack();
            return;
        }
    }

    private void AddToStack()
    {
        //flag this piece as stacked
        stacked = true;
        //thisRenderer.material = stackedMat;
    }

    private void GroundPiece()
    {
        //flag this piece as grounded
        grounded = true;
        //thisRenderer.material = groundedMat;
        destroy = true;
    }
}
