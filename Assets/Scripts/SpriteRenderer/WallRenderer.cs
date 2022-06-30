using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * WallRenderer ==> Used to render walls when main scene started
 * 
 */

public class WallRenderer : MonoBehaviour
{
    private GameObject GameMap;

    private GameObject WallsContainer;

    private float X_COOR = 0.5f;
    private float Y_COOR = 0.5f;
    private int MAX_GRID = 20;

    private static Sprite wall;

    void Start()
    {
        // Wall Sprites
        wall = GameAssets.instance.GameWalls;

        // Get Map
        GameMap = GameObject.Find("/Map");

        PrepareContainer();
        PrepareWalls();        
    }

    /**
     * PrepareContainer() -> Make Parent Container for all walls gameobjects
     * 
     */
    private void PrepareContainer()
    {
        string GAMEOBJECT_NAME = "WallsContainer";
        Vector3 GAMEOBJECT_POS = Vector3.zero;

        WallsContainer = new GameObject();
        WallsContainer.name = GAMEOBJECT_NAME;
        WallsContainer.transform.position = GAMEOBJECT_POS;
    }

    /**
     * PrepareWalls() -> Automatically renders walls with loops
     * 
     */
    private void PrepareWalls()
    {
        // Wall Indexes
        int xIndex;
        int yIndex;


        for (xIndex = 0; xIndex < MAX_GRID; xIndex++)
        {
            // Leftmost and Rightmost part
            if (xIndex == 0 || xIndex == 19)
            {
                for (yIndex = 0; yIndex < MAX_GRID; yIndex++)
                {
                    DrawWalls(xIndex, yIndex);
                }
            }
            else
            {
                // Top
                yIndex = 19;
                DrawWalls(xIndex, yIndex);

                // Bottom
                yIndex = 0;
                DrawWalls(xIndex, yIndex);
            }
        }
    }

    /**
     * DrawWalls(int xIndex, int yIndex) -> draw walls in given coordinate
     * 
     * in : xIndex = X Index for walls
     * in : yIndex = Y Index for walls
     * 
     */
    private void DrawWalls(int xIndex, int yIndex)
    {
        // Draw walls
        GameObject wallGameObject = new GameObject();
        SpriteRenderer wallRenderer = wallGameObject.AddComponent<SpriteRenderer>();
        wallRenderer.sortingLayerName = "Game";
        wallRenderer.sprite = wall;

        // Gameobject details
        string GAMEOBJECT_NAME = "Wall-" + xIndex + "." + yIndex;
        string GAMEOBJECT_TAG = "Obstacle";
        float GAMEOBJECT_X_POS = xIndex + X_COOR;
        float GAMEOBJECT_Y_POS = yIndex + Y_COOR;
        float GAMEOBJECT_Z_POS = 0f;

        wallGameObject.transform.parent = WallsContainer.transform;
        wallGameObject.name = GAMEOBJECT_NAME;
        wallGameObject.tag = GAMEOBJECT_TAG;
        wallGameObject.transform.Translate(GAMEOBJECT_X_POS, GAMEOBJECT_Y_POS, GAMEOBJECT_Z_POS);

        // Set in Map
        SetObjectInMap(xIndex, yIndex, "Wall");
    }

    /**
     * SetObjectInMap(int, int, string) -> Set Object inside grid map
     * 
     * in : 2 ints of x and y Vector
     * in : string of content
     */
    private void SetObjectInMap(int xIndex, int yIndex, string content)
    {
        GameMap.transform.GetChild(xIndex).GetChild(yIndex).gameObject.GetComponent<NodeType>().Type = content;
    }
}
