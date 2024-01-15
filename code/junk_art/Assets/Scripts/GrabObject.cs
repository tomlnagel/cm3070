#if ENABLE_INPUT_SYSTEM && ENABLE_INPUT_SYSTEM_PACKAGE
#define USE_INPUT_SYSTEM
    using UnityEngine.InputSystem;
    using UnityEngine.InputSystem.Controls;
#endif

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Properties and methods to manage picking up and dropping game pieces
/// </summary>
public class GrabObject : MonoBehaviour
{
    [Header("Grab settings")]    
    [SerializeField] private Camera playerCamera; //current player's camera
    [SerializeField] private Transform grabFocus; //grab focus point
    [SerializeField] private Transform holdFocus; //hold focus point
    [SerializeField] private float grabForce = 2f; //force to pull object to grab focus
    [SerializeField] private float scrollSpeed = 0.5f; //speed to move while srolling
    [SerializeField] private float maxScroll = 10f; //maximum Z offset from grab point

    //[SerializeField] private float grabRange = 40f; //max range to grab object
    //[SerializeField] private string grabTag = "GamePiece"; //tag of grabable object

    private float scrollDistance = 0f; //current Z offset from grab point
    private GameObject heldObject; //currently held object
    private Rigidbody heldObjectRB; //RB of held object
    private bool rotating = false; //is the held object being rotated?

    //events
    public delegate void StartRotating();
    public static event StartRotating onRotateStart;

    public delegate void StopRotating();
    public static event StopRotating onRotateStop;

    public delegate void StopHolding();
    public static event StopHolding onDrop;

    //once per frame
    void Update()
    {
        //LMB pressed
        if (Input.GetMouseButtonDown(0))
        {
            //check if already grabbing
            if (heldObject)
            {
                DropObject();
                return;
            }

            /* don't need this now peices spawn in held state
            //cast ray through mouse location
            Ray MouseRay = playerCamera.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(MouseRay, out RaycastHit HitInfo, grabRange))
            {
                if (HitInfo.transform.gameObject.tag == grabTag)
                {
                    GrabTarget(HitInfo.transform.gameObject);
                }                
            }
            */
        }

        if (heldObject)
        {
            //rotating mode
            if (Input.GetKey(KeyCode.Space))
            {
                if (!rotating) onRotateStart?.Invoke();
                rotating = true;
            }
            else
            {
                if (rotating) onRotateStop?.Invoke();
                rotating = false;

                //restrict max scrolling
                scrollDistance = Mathf.Clamp(scrollDistance + Input.mouseScrollDelta.y * scrollSpeed, -maxScroll, maxScroll);
                //move hold position when scrolling
                holdFocus.position = grabFocus.position + (holdFocus.TransformDirection(Vector3.forward) * scrollDistance);
            }            
        }
    }

    //once per physics timestamp
    private void FixedUpdate()
    {
        if (heldObject)
        {
            MoveObject();

            if (rotating)
            {
                RotateObject();
            }
        }
    }

    /// <summary>
    /// Pick up target object by parenting it to a descendant of the main camera
    /// Disable target's gravity interaction
    /// Set the object's state as 'held'
    /// </summary>
    /// <param name="target">The object to pick up</param>
    public void GrabTarget(GameObject target)
    {
        //check target has an RB
        if (target.GetComponent<Rigidbody>())
        {
            //assign grabbed object
            heldObject = target;
            heldObjectRB = target.GetComponent<Rigidbody>();

            //set physics parameters
            heldObjectRB.useGravity = false;
            heldObjectRB.drag = 10;
            heldObjectRB.constraints = RigidbodyConstraints.FreezeRotation;

            //parent held object to grab area
            heldObjectRB.transform.parent = holdFocus;

            //set the object's status
            heldObject.GetComponent<GamePiece>().Pickup();
        }    
    }

    /// <summary>
    /// Drop the currently held object by removing it from the camera's descendents
    /// Reset object's physics parameters
    /// Set object's status to not 'held'
    /// </summary>
    private void DropObject()
    {        
        //set physics parameters
        heldObjectRB.useGravity = true;
        heldObjectRB.drag = 1;
        heldObjectRB.constraints = RigidbodyConstraints.None;

        //reset status
        heldObject.GetComponent<GamePiece>().Drop();

        //unparent object
        heldObjectRB.transform.parent = null;

        //unassign grabbed object
        heldObject = null;
        heldObjectRB = null;

        //reset hold focus to grab point
        holdFocus.position = grabFocus.position;
        scrollDistance = 0f;

        //broadcast an event
        onDrop?.Invoke();
    }

    /// <summary>
    /// Move held object towards main camera descendent
    /// </summary>
    private void MoveObject()
    {
        if (Vector3.Distance(heldObject.transform.position, holdFocus.position) > 0.1f)
        {
            //vector from object to hold point
            Vector3 moveDirection = holdFocus.position - heldObject.transform.position;

            //move using velocity
            heldObjectRB.velocity = moveDirection * moveDirection.magnitude * grabForce;
        }
    }

    /// <summary>
    /// Rotate held object on 3 axes according to mouse movement and scrolling
    /// </summary>
    private void RotateObject()
    {
        //get mouse movement
        Vector3 mouseMovement = new Vector3(
            Input.GetAxis("Mouse Y") * -1, 
            Input.GetAxis("Mouse X") * -1, 
            Input.mouseScrollDelta.y * 5
            );

        heldObjectRB.transform.eulerAngles += mouseMovement;
    }

}
