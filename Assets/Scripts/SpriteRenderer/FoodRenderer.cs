using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * FoodRenderer ==> Used to spawn food at given position
 * 
 */

public class FoodRenderer : MonoBehaviour
{
    [SerializeField] private Camera mainCamera;
    [SerializeField] private GameHandler gameHandler;

    private GameObject GameMap;

    private Vector2 touchPosition;
    private Vector2 fixedPosition;

    private List<Sprite> FoodList = new List<Sprite>();
    

    void Start()
    {
        FoodList = GameAssets.instance.Foods;

        // Initialize Game UIs
        GameHandler.InitializeUserInfo("Tap Food Position");
    }

    void Update()
    {
        // Get Map
        GameMap = GameObject.Find("/Map");

        // Get Touch Position
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);
            touchPosition = touch.position;

            Vector3 objectPosition = mainCamera.ScreenToWorldPoint(touchPosition);
            objectPosition.z = 0f;

            if (CheckValidPosition(objectPosition))
            {
                SpawnFood();
                gameHandler.enabled = true;
            }
        }

        // Get Mouse Click
        if(Input.GetMouseButtonDown(0))
        {
            Vector2 mousePosition = Input.mousePosition;

            Vector3 objectPosition = mainCamera.ScreenToWorldPoint(mousePosition);
            objectPosition.z = 0f;

            if(CheckValidPosition(objectPosition))
            {
                SpawnFood();
                gameHandler.enabled = true;
            }
        }
    }

    /**
     * bool CheckValidPosition(Vector2) -> Check if food position is valid
     * 
     * in : Raw Vector2 touch position
     * ret : bool valid || invalid
     */
    private bool CheckValidPosition(Vector2 rawPosition)
    {
        if( rawPosition.x > 1 &&
            rawPosition.y > 1 &&
            rawPosition.x < 19 &&
            rawPosition.y < 19 )
        {
            fixedPosition.x = Mathf.Floor(rawPosition.x) + 0.5f;
            fixedPosition.y = Mathf.Floor(rawPosition.y) + 0.5f;

            // return true;
            NodeType nodeType = GameMap.transform.GetChild(Mathf.FloorToInt(fixedPosition.x)).GetChild(Mathf.FloorToInt(fixedPosition.y)).gameObject.GetComponent<NodeType>();
            
            if(nodeType.Type != "")
            {
                return false;
            }

            return true;
        }

        return false;
    }

    /**
     * SpawnFood() -> spawn food at given position
     * 
     */
    private void SpawnFood()
    {
        Sprite chosenFood = ChooseFood();
        DrawFood(chosenFood);
    }

    /**
     * ChooseFood() -> choose food to spawn
     * 
     * ret : Sprite of Chosen Food
     */
    private Sprite ChooseFood()
    {
        int randomFoodIndex = Random.Range(0, FoodList.Count - 1);
        Sprite chosenFood = FoodList[randomFoodIndex];

        return chosenFood;
    }

    /**
     * drawFood()
     * 
     * in : Sprite of Chosen Food
     */
    private void DrawFood(Sprite food) {

        // Gameobject
        GameObject foodGameObject = new GameObject();
        SpriteRenderer foodRenderer = foodGameObject.AddComponent<SpriteRenderer>();
        BoxCollider2D foodCollider = foodGameObject.AddComponent<BoxCollider2D>();

        foodRenderer.sortingLayerName = "Game";
        foodRenderer.sprite = food;

        // Colliders
        Vector2 colliderSize = new Vector2(0.9f, 0.9f);
        foodCollider.size = colliderSize;

        // Gameobject details
        string GAMEOBJECT_NAME = "SnakeFood";
        string GAMEOBJECT_TAG = "Food";
        Vector3 GAMEOBJECT_POS = new Vector3();
        GAMEOBJECT_POS.x = fixedPosition.x;
        GAMEOBJECT_POS.y = fixedPosition.y;
        GAMEOBJECT_POS.z = 0f;
        
        foodGameObject.name = GAMEOBJECT_NAME;
        foodGameObject.tag = GAMEOBJECT_TAG;

        foodGameObject.transform.Translate(GAMEOBJECT_POS);

        SetObjectInMap(Mathf.FloorToInt(fixedPosition.x), Mathf.FloorToInt(fixedPosition.y), "Food");
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
