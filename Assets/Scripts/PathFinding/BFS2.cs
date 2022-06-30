using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BFS2
{
    private readonly int WIDTH = 20;
    private readonly int HEIGHT = 20;

    private int moveCount = 0;
    private int nodesLeftInLayer = 1;
    private int nodesInNextLayer = 0;

    private List<List<int>> visited = new List<List<int>>();

    private readonly int[] rowDirection = { -1, 1, 0, 0 };
    private readonly int[] colDirection = { 0, 0, 1, -1 };

    private Queue<NodeObject> queue = new Queue<NodeObject>();


    public int FindPath(List<List<int>> gameMap, int startR, int startC, int endR, int endC)
    {
        SetupVariables();

        NodeObject start = new NodeObject(2, startR, startC, null);
        queue.Enqueue(start);

        visited[startR][startC] = 1;

        while (queue.Count > 0)
        {
            NodeObject curr = queue.Dequeue();

            // if food ketemu
            if(curr.GetNodeObjectRow() == endR && curr.GetNodeObjectCol() == endC) 
            {
                // return moveCount;                
                return FindHeadDirection(curr);
            }

            // Expand(gameMap, currR, currC);
            Expand(gameMap, curr);
            nodesLeftInLayer--;

            if (nodesLeftInLayer == 0)
            {
                nodesLeftInLayer = nodesInNextLayer;
                nodesInNextLayer = 0;
                moveCount++;
            }
        }

        return -1;
    }

    private void Expand(List<List<int>> gameMap, NodeObject curr)
    {
        for (int i = 0; i < 4; i++)
        {
            int adjR = curr.GetNodeObjectRow() + rowDirection[i];
            int adjC = curr.GetNodeObjectCol() + colDirection[i];

            // Check adjacent valid
            if (adjR < 0 || adjC < 0) continue;
            if (adjR >= WIDTH || adjC >= HEIGHT) continue;

            if (visited[adjR][adjC] == 1) continue;
            if (gameMap[adjR][adjC] == -1) continue;

            NodeObject adj = new NodeObject(gameMap[adjR][adjC], adjR, adjC, curr);
            queue.Enqueue(adj);

            visited[adjR][adjC] = 1;
            nodesInNextLayer++;
        }
    }

    private void SetupVariables()
    {
        // visited
        for (int i = 0; i < WIDTH; i++)
        {
            List<int> data = new List<int>();
            for (int j = 0; j < HEIGHT; j++)
            {
                data.Add(0);
            }
            visited.Add(data);
        }

        // queues
        queue.Clear();
    }

    private int FindHeadDirection(NodeObject food)
    {
        int direction = 0;

        NodeObject temp, temp2;
        temp = food;
        temp2 = temp;

        while(temp.GetNodeObjectParent() != null)
        {
            temp2 = temp;
            temp = temp.GetNodeObjectParent();
        }

        // cari difference dari temp sama temp2
        int temp2Row;
        int temp2Col;
        int tempRow;
        int tempCol;

        temp2Row = temp2.GetNodeObjectRow();
        temp2Col = temp2.GetNodeObjectCol();
        tempRow = temp.GetNodeObjectRow();
        tempCol = temp.GetNodeObjectCol();

        Debug.Log("TEMP 2 : " + temp2Row + " " + temp2Col);
        Debug.Log("TEMP : " + tempRow + " " + tempCol);

        if (temp2Row == tempRow && temp2Col == tempCol + 1) direction = 0;
        if (temp2Row == tempRow && temp2Col == tempCol - 1) direction = 2;
        if (temp2Row == tempRow + 1 && temp2Col == tempCol) direction = 1;
        if (temp2Row == tempRow - 1 && temp2Col == tempCol) direction = 3;

        return direction;
    }
}
