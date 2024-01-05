using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceStacked : MonoBehaviour
{

    [SerializeField] private string baseTag = "Base"; //tag for the staking base
    [SerializeField] private string floorTag = "Floor"; //tag for the floor/environment
    [SerializeField] private Material stackedMat; //material for a stacked piece
    [SerializeField] private Material unstackedMat; //material for a fallen peice
    [SerializeField] private Material heldMat; //material for a held peice
    private MeshRenderer thisRenderer; //the object's mesh renderer
    private ObjectTags statusList; //the object's status dictionary

    //events
    public delegate void StackChanged();
    public static event StackChanged onStackChanged;

    // Start is called before the first frame update
    void Start()
    {
        thisRenderer = GetComponent<MeshRenderer>();
        statusList = GetComponent<ObjectTags>();
    }

    // Update is called once per frame
    void Update()
    {
        //this should prbably not run every frame, maybe a function called when picked up?
        //if (transform.gameObject.tag == heldTag)
        if (statusList.held)
        {
            thisRenderer.material = heldMat;
        }
    }

    //called whenever a collision is detected
    private void OnCollisionEnter(Collision collision)
    {
       
        //do nothing while piece still held by player
        if (statusList.held)
        {
            //Debug.Log("collision ignored while held");
            return;
        }
        
        string otherTag = collision.gameObject.tag;
        ObjectTags otherStatuses = collision.gameObject.GetComponent<ObjectTags>();

        //flag as grounded
        if (otherTag == floorTag)
        {
            statusList.grounded = true;
            statusList.stacked = false;
            thisRenderer.material = unstackedMat;
            onStackChanged?.Invoke();
            return;
        }

        //return if still grounded
        if (statusList.isStatus("grounded"))
        {
            return;
        }

        //flag as stacked if connected to base or existing stack
        if (
            (otherTag == baseTag ||
            (otherStatuses.stacked && !otherStatuses.grounded)
            )
           )
        {
            Debug.Log("collision with stack");
            statusList.stacked = true;
            thisRenderer.material = stackedMat;

            //broadcast event
            onStackChanged?.Invoke();
        }    
    }

    private void OnCollisionExit(Collision collision)
    {
        string otherTag = collision.gameObject.tag;
        //ObjectTags otherStatuses = collision.gameObject.GetComponent<ObjectTags>();

        //cease flagging as grounded
        if (otherTag == floorTag)
        {
            statusList.grounded = false;
            onStackChanged?.Invoke();
        }
    }
}
