using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Properties of a player's stack base
/// </summary>
public class PlayerBase : MonoBehaviour
{

    [SerializeField]
    private int ownerIndex;

    public int OwnerIndex
    {
        get { return ownerIndex; }
        set { ownerIndex = value; }
    }

}
