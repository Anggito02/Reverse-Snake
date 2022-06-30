using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * NodeType ==> Store Type Information of nodes
 * 
 */

public class NodeType : MonoBehaviour
{
    [SerializeField] private string nodeType;

    public string Type
    {
        get
        {
            return this.nodeType;
        }
        set
        {
            nodeType = value;
        }
    }
}
