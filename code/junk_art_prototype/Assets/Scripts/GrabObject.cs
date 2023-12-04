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
    [SerializeField] private float maxScroll = 3f;
    [SerializeField] private float scrollDistance = 0f;

    private GameObject heldObject; //currently held object
    private Rigidbody heldObjectRB; //RB of grabbed object

    //once per frame
    void Update()
    {
        //LMB pressed
        if (Input.GetMouseButtonDown(0))
        {
            //check if already grabing
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
            //restrict max scrolling
            scrollDistance = Mathf.Clamp(scrollDistance + Input.mouseScrollDelta.y * scrollSpeed, -maxScroll, maxScroll);

            //move hold position when scrolling
            holdFocus.position = grabFocus.position + (holdFocus.TransformDirection(Vector3.forward) * scrollDistance);
            
        }                
    }

    //once per physics timestamp
    private void FixedUpdate()
    {
        if (heldObject)
        {
            moveObject();
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
        }    
    }

    private void dropObject()
    {
        //set physics parameters
        heldObjectRB.useGravity = true;
        heldObjectRB.drag = 1;
        heldObjectRB.constraints = RigidbodyConstraints.None;

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

    


}
