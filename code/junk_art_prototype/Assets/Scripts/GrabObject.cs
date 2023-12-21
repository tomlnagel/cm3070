#if ENABLE_INPUT_SYSTEM && ENABLE_INPUT_SYSTEM_PACKAGE
#define USE_INPUT_SYSTEM
    using UnityEngine.InputSystem;
    using UnityEngine.InputSystem.Controls;
#endif

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GrabObject : MonoBehaviour
{

    [Header("Grab settings")]
    [SerializeField] private LayerMask grabLayer; //layer available for grabbing
    [SerializeField] private Camera playerCamera; //current player's camera
    [SerializeField] private Transform grabFocus; //grab focus point
    [SerializeField] private Transform holdFocus; //hold focus point
    [SerializeField] private float grabRange = 10f; //max range to grab object
    [SerializeField] private float grabForce = 2f; //force to pull object to grab focus
    [SerializeField] private float scrollSpeed = 0.5f; //speed to move while srolling
    [SerializeField] private float maxScroll = 3f; //maximum Z offset from grab point
    
    private float scrollDistance = 0f; //current Z offset from grab point
    private GameObject heldObject; //currently held object
    private Rigidbody heldObjectRB; //RB of grabbed object
    private bool rotating = false; //is the held object being rotated

    [Header("Object tags")]
    [SerializeField] private string heldTag = "Held"; //tag to set the held piece
    [SerializeField] private string unheldTag = "Unstacked"; //tag to set the dropped piece

    //events
    public delegate void StartRotating();
    public static event StartRotating onRotateStart;

    public delegate void StopRotating();
    public static event StopRotating onRotateStop;

    //once per frame
    void Update()
    {
        //LMB pressed
        if (Input.GetMouseButtonDown(0))
        {
            //check if already grabbing
            if (heldObject)
            {
                dropObject();
                return;
            }

            //cast ray through mouse location
            Ray MouseRay = playerCamera.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(MouseRay, out RaycastHit HitInfo, grabRange, grabLayer))
            {
                grabObject(HitInfo.transform.gameObject);
            }
        }

        if (heldObject)
        {
            //rotating mode
            if (Input.GetKey(KeyCode.Space))
            {
                onRotateStart?.Invoke();
                rotating = true;
            }
            else
            {
                onRotateStop?.Invoke();
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
            moveObject();

            if (rotating)
            {
                rotateObject();
            }
        }
    }

    private void grabObject(GameObject target)
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

            //set the object's tag
            heldObject.tag = heldTag;
        }    
    }

    private void dropObject()
    {
        //set physics parameters
        heldObjectRB.useGravity = true;
        heldObjectRB.drag = 1;
        heldObjectRB.constraints = RigidbodyConstraints.None;

        //reset tag
        heldObject.tag = unheldTag;

        //unparent object
        heldObjectRB.transform.parent = null;

        //unassign grabbed object
        heldObject = null;
        heldObjectRB = null;

        //reset hold focus to grab point
        holdFocus.position = grabFocus.position;
        scrollDistance = 0f;        
    }

    private void moveObject()
    {
        if (Vector3.Distance(heldObject.transform.position, holdFocus.position) > 0.1f)
        {
            //vector from object to hold point
            Vector3 moveDirection = holdFocus.position - heldObject.transform.position;

            //move using velocity
            heldObjectRB.velocity = moveDirection * moveDirection.magnitude * grabForce;
        }
    }

    private void rotateObject()
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
