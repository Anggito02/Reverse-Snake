using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NodeObject
{
    private float value;
    private int row;
    private int col;
    private NodeObject parent;

    public NodeObject(float value, int row, int col, NodeObject parent)
    {
        this.value = value;
        this.row = row;
        this.col = col;
        this.parent = parent;
    }

    public void SetNodeObjectVal(int value)
    {
        this.value = value;
    }

    public float GetNodeObjectVal()
    {
        return value;
    }

    public void SetNodeObjectRow(int row)
    {
        this.row = row;
    }

    public int GetNodeObjectRow()
    {
        return row;
    }

    public void SetNodeObjectCol(int col)
    {
        this.col = col;
    }

    public int GetNodeObjectCol()
    {
        return col;
    }  

    public void SetNodeObjectParent(NodeObject parent)
    {
        this.parent = parent;
    }

    public NodeObject GetNodeObjectParent()
    {
        return this.parent;
    }
}
