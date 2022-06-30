using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BFS
{
    private readonly int WIDTH = 20;
    private readonly int HEIGHT = 20;

    private int moveCount = 0;
    private int nodesLeftInLayer = 1;
    private int nodesInNextLayer = 0;

    private List<List<int>> visited = new List<List<int>>();

    private readonly int[] rowDirection = { -1, 1, 0, 0 };
    private readonly int[] colDirection = { 0, 0, 1, -1 };

    private Queue<int> rowQueue = new Queue<int>();
    private Queue<int> colQueue = new Queue<int>();


    public int FindPath(List<List<int>> gameMap, int startR, int startC, int endR, int endC)
    {
        SetupVariables();

        rowQueue.Enqueue(startR);
        colQueue.Enqueue(startC);
        visited[startR][startC] = 1;

        while (rowQueue.Count > 0 || colQueue.Count > 0)
        {
            int currR = rowQueue.Dequeue();
            int currC = colQueue.Dequeue();
            //Debug.Log(currR + " " + currC);

            if (currR == endR && currC == endC)
            {
                return moveCount;
                // return FindHeadDirection();
            }

            Expand(gameMap, currR, currC);
            nodesLeftInLayer--;

            if (nodesLeftInLayer == 0)
            {
                nodesLeftInLayer = nodesInNextLayer;
                nodesInNextLayer = 0;
                moveCount++;
            }
        }

        // if food is not found
        return -1;
    }

    private void Expand(List<List<int>> gameMap, int parR, int parC)
    {
        for (int i = 0; i < 4; i++)
        {
            int adjR = parR + rowDirection[i];
            int adjC = parC + colDirection[i];

            // Check adjacent valid
            if (adjR < 0 || adjC < 0) continue;
            if (adjR >= WIDTH || adjC >= HEIGHT) continue;

            if (visited[adjR][adjC] == 1) continue;
            if (gameMap[adjR][adjC] == -1) continue;

            rowQueue.Enqueue(adjR);
            colQueue.Enqueue(adjC);
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
        rowQueue.Clear();
        colQueue.Clear();
    }

    private int FindHeadDirection()
    {
        int direction = 0;

        // Code Here

        return direction;
    }
}
