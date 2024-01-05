using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectTags : MonoBehaviour
{
	//Allow an object ot have multiple tags

	[SerializeField] private List<string> tags = new List<string>(); //list of tags
	[SerializeField] private Dictionary<string, bool> pieceStatus = new Dictionary<string, bool>(); //status(es) of game piece

	[SerializeField] public bool unstacked;
	[SerializeField] public bool stacked;
	[SerializeField] public bool grounded;
	[SerializeField] public bool held;

	public bool hasTag(string tag)
	{
		return tags.Contains(tag);
	}

	public IEnumerable<string> getTags()
	{
		return tags;
	}

	public void changeTag(int index, string tagName)
	{
		tags[index] = tagName;
	}

	public string tagAtIndex(int index)
	{
		return tags[index];
	}

	public void addTag(string tagName)
    {
		if (!tags.Contains(tagName))
        {
			tags.Add(tagName);
        }
    }

	public bool isStatus(string status)
    {
		return pieceStatus[status];
    }

	public void setStatus(string status, bool val)
    {
        try
        {
			pieceStatus[status] = val;
        }
        catch(Exception e)
        {
			Debug.Log("Can't set piece status: " + e);
        }
    }

    private void Start()
    {
		pieceStatus.Add("grounded", false);
		pieceStatus.Add("held", false);
		pieceStatus.Add("stacked", false);
		pieceStatus.Add("unstacked", false);
	}

	public string printStatuses()
    {
		string ret = "unstacked: ";
		ret += unstacked;
		ret += " stacked: ";
		ret += stacked;
		ret += " grounded: ";
		ret += grounded;
		ret += " held: ";
		ret += held;
		return ret;
	}

}
