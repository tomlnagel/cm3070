using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{

    [SerializeField] private string stackedTag = "Stacked"; //tag of stacked objects

    private void OnEnable()
    {
        //event subscriptions
        PieceStacked.onStackChanged += CalcMaxHeight;
    }

    private void OnDisable()
    {
        //event subscriptions
        PieceStacked.onStackChanged -= CalcMaxHeight;
    }

    private void CalcMaxHeight()
    {
        float maxHeight = 0f;

        GameObject[] stackedList = GameObject.FindGameObjectsWithTag(stackedTag);

        Debug.Log("Checking " + stackedList.Length + " pieces");

        //loop through each object in the stack
        foreach(GameObject piece in stackedList)
        {
            //update max height with top of bounding box
            maxHeight = Mathf.Max(maxHeight, piece.GetComponent<Collider>().bounds.max.y);

        }

        Debug.Log("Stack height: " + maxHeight.ToString("0.0"));

    }

}
