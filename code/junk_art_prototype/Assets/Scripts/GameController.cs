using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{

    private void OnEnable()
    {
        //event subscriptions
        PieceStacked.onStackChanged += calcMaxHeight;
    }

    private void OnDisable()
    {
        //event subscriptions
        PieceStacked.onStackChanged -= calcMaxHeight;
    }

    private void calcMaxHeight()
    {
        float maxHeight = 0f;

        GameObject[] pieceList = GameObject.FindGameObjectsWithTag("GamePiece");

        //loop through each object in the stack
        foreach(GameObject piece in pieceList)
        {
            //update max height with top of bounding box
            if (piece.GetComponent<ObjectTags>().stacked)
            {
                maxHeight = Mathf.Max(maxHeight, piece.GetComponent<Collider>().bounds.max.y); //this needs adjusting to allow for multiple colliders
            }
        }

        Debug.Log("Stack height: " + maxHeight.ToString("0.0"));
    }

}
