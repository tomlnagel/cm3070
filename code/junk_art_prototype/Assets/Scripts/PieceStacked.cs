using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceStacked : MonoBehaviour
{

    [SerializeField] private string baseTag = "Base"; //tag for the staking base
    [SerializeField] private string stackedTag = "Stacked"; //tag for a stacked piece
    [SerializeField] private string unstackedTag = "Unstacked"; //tag for a fallen peice
    [SerializeField] private string groundedTag = "Grounded"; //tag for a peice touchingt the floor
    [SerializeField] private string floorTag = "Floor"; //tag for the floor/environment
    [SerializeField] private string heldTag = "Held"; //tag for a peice held by the player
    [SerializeField] private Material stackedMat; //material for a stacked piece
    [SerializeField] private Material unstackedMat; //material for a fallen peice
    [SerializeField] private Material heldMat; //material for a held peice
    private MeshRenderer thisRenderer; //the object's mesh renderer

    //events
    public delegate void StackChanged();
    public static event StackChanged onStackChanged;

    // Start is called before the first frame update
    void Start()
    {
        thisRenderer = GetComponent<MeshRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        //this should prbably not run every frame, maybe a function called when picked up?
        if (transform.gameObject.tag == heldTag)
        {
            thisRenderer.material = heldMat;
        }
    }

    //called whenever a collision is detected
    private void OnCollisionEnter(Collision collision)
    {
        //do nothing while piece still held by player
        if (transform.gameObject.tag == heldTag)
        {
            return;
        }
        
        string otherTag = collision.gameObject.tag;

        //flag as grounded
        if (otherTag == floorTag)
        {
            transform.gameObject.tag = groundedTag;
            thisRenderer.material = unstackedMat;
            onStackChanged?.Invoke();
            return;
        }

        //flag as stacked if not grounded, and connected to base or existing stack
        if (
            (otherTag == baseTag || otherTag == stackedTag) 
            && transform.gameObject.tag != groundedTag
            )
        {
            transform.gameObject.tag = stackedTag;
            thisRenderer.material = stackedMat;

            //broadcast event
            onStackChanged?.Invoke();
        }         
    }

    private void OnCollisionExit(Collision collision)
    {
        //do nothing while piece still held by player
        if (transform.gameObject.tag == heldTag)
        {
            return;
        }

        string otherTag = collision.gameObject.tag;

        //cease flagging as grounded
        if (otherTag == floorTag)
        {
            transform.gameObject.tag = unstackedTag;
            onStackChanged?.Invoke();
        }
    }
}
