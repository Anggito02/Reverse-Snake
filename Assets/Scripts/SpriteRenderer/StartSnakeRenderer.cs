using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * StartSnakeRenderer ==> Used to spawn snake at random start position
 * 
 */

public class StartSnakeRenderer : MonoBehaviour
{
    private float[] RAND_COOR =
    {
        4.5f, 5.5f, 6.5f, 7.5f, 8.5f, 9.5f,
        10.5f, 11.5f, 12.5f, 13.5f, 14.5f, 15.5f
    };

    private int[] RAND_SNAKE_DIR =
    {
        0, 1, 2, 3
    };

    private GameObject GameMap;

    private GameObject SnakeContainer;
    private GameObject SnakeBodyContainer;

    private List<Sprite> SnakeHeadDirection = new List<Sprite>();
    private List<Sprite> SnakeBodyDirection = new List<Sprite>();
    private List<Sprite> SnakeTailDirection = new List<Sprite>();

    private int startDirection;
    private Vector2 startPosition;

    void Start()
    {
        GameMap = GameObject.Find("/Map");

        FetchSnakeHead();
        FetchSnakeBody();
        FetchSnakeTail();

        PickRandStartDir();
        PickRandPos();

        PrepareContainer();
        PrepareSnake();
    }

    /**
     * FetchSnakeHead() -> Fetch Snake Head Sprites from Game Assets
     * 
     */
    private void FetchSnakeHead()
    {
        SnakeHeadDirection = GameAssets.instance.SnakeHead;
    }

    /**
     * FetchSnakeBody() -> Fetch Snake Head Sprites from Game Assets
     * 
     */
    private void FetchSnakeBody()
    {
        SnakeBodyDirection = GameAssets.instance.SnakeBody;
    }

    /**
     * FetchSnakeTail() -> Fetch Snake Tail Sprites from Game Assets
     * 
     */
    private void FetchSnakeTail()
    {
        SnakeTailDirection = GameAssets.instance.SnakeTail;
    }

    /**
     * PickRandStartDir() -> Set Start Direction for Snake
     * 
     */
    private void PickRandStartDir()
    {
        startDirection = Random.Range(0, RAND_SNAKE_DIR.Length - 1);
    }

    /**
     * PickRandPos() -> Set Start Position for Snake
     * 
     */
    private void PickRandPos()
    {
        int randXIndex = Random.Range(0, RAND_COOR.Length - 1);
        int randYIndex = Random.Range(0, RAND_COOR.Length - 1);

        startPosition.x = RAND_COOR[randXIndex];
        startPosition.y = RAND_COOR[randYIndex];
    }

    /**
     * PrepareContainer() -> Make Parent Container for all snake gameobjects
     * 
     */
    private void PrepareContainer()
    {
        Vector3 GAMEOBJECT_POS = Vector3.zero;

        string MAIN_GAMEOBJECT_NAME = "SnakeContainer";
        string BODY_GAMEOBJECT_NAME = "SnakeBodyContainer";

        SnakeContainer = new GameObject();
        SnakeContainer.name = MAIN_GAMEOBJECT_NAME;
        SnakeContainer.transform.position = GAMEOBJECT_POS;

        SnakeBodyContainer = new GameObject();
        SnakeBodyContainer.name = BODY_GAMEOBJECT_NAME;
        SnakeBodyContainer.transform.position = GAMEOBJECT_POS;
        SnakeBodyContainer.transform.parent = SnakeContainer.transform;
    }

    /**
     * PrepareSnake() -> Spawn Snake
     * 
     */
    private void PrepareSnake()
    {
        DrawSnakeHead();
        DrawSnakeBody();
        DrawSnakeTail();
    }

    /**
     * DrawSnakeHead() -> Draw snake head in given position and given direction
     * 
     */
    private void DrawSnakeHead()
    {
        GameObject snakeHeadObject = new GameObject();
        SpriteRenderer snakeHeadRenderer = snakeHeadObject.AddComponent<SpriteRenderer>();
        BoxCollider2D snakeHeadCollider = snakeHeadObject.AddComponent<BoxCollider2D>();
        snakeHeadObject.AddComponent<SnakeHeadDirection>().direction = startDirection;
        snakeHeadRenderer.sortingLayerName = "Game";

        // Collider
        Vector2 colliderSize = new Vector2(0.9f, 0.9f);
        snakeHeadCollider.size = colliderSize;

        // Snake Direction
        snakeHeadRenderer.sprite = SnakeHeadDirection[startDirection];

        // Gameobject details
        string GAMEOBJECT_NAME = "SnakeHead";
        float GAMEOBJECT_X_POS = startPosition.x;
        float GAMEOBJECT_Y_POS = startPosition.y;
        float GAMEOBJECT_Z_POS = 0f;

        snakeHeadObject.transform.parent = SnakeContainer.transform;
        snakeHeadObject.name = GAMEOBJECT_NAME;
        snakeHeadObject.transform.Translate(GAMEOBJECT_X_POS, GAMEOBJECT_Y_POS, GAMEOBJECT_Z_POS);

        SetObjectInMap(Mathf.FloorToInt(startPosition.x), Mathf.FloorToInt(startPosition.y), "SnakeHead");
    }

    /**
     * DrawSnakeBody() -> Draw snake body in given position and given direction
     * 
     */
    private void DrawSnakeBody()
    {
        GameObject snakeBodyObject = new GameObject();
        SpriteRenderer snakeBodyRenderer = snakeBodyObject.AddComponent<SpriteRenderer>();
        BoxCollider2D snakeBodyCollider = snakeBodyObject.AddComponent<BoxCollider2D>();
        SnakeBodyDirection snakeBodyDirection = snakeBodyObject.AddComponent<SnakeBodyDirection>();
        snakeBodyRenderer.sortingLayerName = "Game";

        // Collider
        Vector2 colliderSize = new Vector2(0.9f, 0.9f);
        snakeBodyCollider.size = colliderSize;

        // Tail position
        float body_X = 0;
        float body_Y = 0;
        if (startDirection == 0)
        {
            snakeBodyDirection.direction = 0;
            snakeBodyRenderer.sprite = SnakeBodyDirection[0];
            body_X = startPosition.x;
            body_Y = startPosition.y - 1f;
        }
        else if (startDirection == 1)
        {
            snakeBodyDirection.direction = 5;
            snakeBodyRenderer.sprite = SnakeBodyDirection[5];
            body_X = startPosition.x - 1f;
            body_Y = startPosition.y;
        }
        else if (startDirection == 2)
        {
            snakeBodyDirection.direction = 0;
            snakeBodyRenderer.sprite = SnakeBodyDirection[0];
            body_X = startPosition.x;
            body_Y = startPosition.y + 1f;
        }
        else if (startDirection == 3)
        {
            snakeBodyDirection.direction = 5;
            snakeBodyRenderer.sprite = SnakeBodyDirection[5];
            body_X = startPosition.x + 1f;
            body_Y = startPosition.y;
        }

        // Gameobject details
        string GAMEOBJECT_NAME = "SnakeBody-0";
        string GAMEOBJECT_TAG = "Obstacle";
        float GAMEOBJECT_X_POS = body_X;
        float GAMEOBJECT_Y_POS = body_Y;
        float GAMEOBJECT_Z_POS = 0f;

        snakeBodyObject.transform.parent = SnakeBodyContainer.transform;
        snakeBodyObject.name = GAMEOBJECT_NAME;
        snakeBodyObject.tag = GAMEOBJECT_TAG;
        snakeBodyObject.transform.Translate(GAMEOBJECT_X_POS, GAMEOBJECT_Y_POS, GAMEOBJECT_Z_POS);

        SetObjectInMap(Mathf.FloorToInt(body_X), Mathf.FloorToInt(body_Y), "SnakeBody");
    }

    /**
     * DrawSnakeTail() -> Draw snake tail in given position and given direction
     * 
     */
    private void DrawSnakeTail()
    {
        GameObject snakeTailObject = new GameObject();
        SpriteRenderer snakeTailRenderer = snakeTailObject.AddComponent<SpriteRenderer>();
        BoxCollider2D snakeTailCollider = snakeTailObject.AddComponent<BoxCollider2D>();
        snakeTailObject.AddComponent<SnakeTailDirection>().direction = startDirection;
        snakeTailRenderer.sortingLayerName = "Game";

        // Collider
        Vector2 colliderSize = new Vector2(0.9f, 0.9f);
        snakeTailCollider.size = colliderSize;

        // Snake Tail Direction
        snakeTailRenderer.sprite = SnakeTailDirection[startDirection];

        // Tail position
        float tail_X = 0;
        float tail_Y = 0;
        if(startDirection == 0)
        {
            tail_X = startPosition.x;
            tail_Y = startPosition.y - 2f;
        }
        else if(startDirection == 1)
        {
            tail_X = startPosition.x - 2f;
            tail_Y = startPosition.y;
        }
        else if(startDirection == 2)
        {
            tail_X = startPosition.x;
            tail_Y = startPosition.y + 2f;
        }
        else if(startDirection == 3)
        {
            tail_X = startPosition.x + 2f;
            tail_Y = startPosition.y;
        }

        // Gameobject details
        string GAMEOBJECT_NAME = "SnakeTail";
        string GAMEOBJECT_TAG = "Obstacle";
        float GAMEOBJECT_X_POS = tail_X;
        float GAMEOBJECT_Y_POS = tail_Y;
        float GAMEOBJECT_Z_POS = 0f;

        snakeTailObject.transform.parent = SnakeContainer.transform;
        snakeTailObject.name = GAMEOBJECT_NAME;
        snakeTailObject.tag = GAMEOBJECT_TAG;
        snakeTailObject.transform.Translate(GAMEOBJECT_X_POS, GAMEOBJECT_Y_POS, GAMEOBJECT_Z_POS);

        SetObjectInMap(Mathf.FloorToInt(tail_X), Mathf.FloorToInt(tail_Y), "SnakeTail");
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
