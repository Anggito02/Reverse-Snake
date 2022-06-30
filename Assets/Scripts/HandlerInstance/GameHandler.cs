using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System.Diagnostics;
using System.Web;
using UnityEngine.UI;

/**
 * GameHandler ==> Handle Gameplay especially Snake Auto Movements
 * 
 */
public class GameHandler : MonoBehaviour
{
    [SerializeField] private Text mapDebug;

    private const int MAX_GRID = 20;

    private static GameHandler instance;

    // Pathfinding
    // private BFS bfs;
    private BFS2 bfs2;
    private GBFS gbfs;
    private int rSnakeHead;
    private int cSnakeHead;
    private int rFoodPos;
    private int cFoodPos;

    // UIs
    private static int remainingFood = 2;
    private static string userInfo = "Tap Food Position";

    // End Scenes Camera
    private GameObject loseUI;
    private GameObject winUI;

    // Map
    private GameObject GameMap;
    private List<List<int>> mapToPass = new List<List<int>>();

    // Snake
    private GameObject snakeHead;
    private GameObject snakeBodyContainer;
    private List<GameObject> snakeBody = new List<GameObject>();
    private GameObject snakeTail;

    private int oldSnakeHeadDirection;
    private int newSnakeHeadDirection;

    private string destType = "";

    // Food
    private GameObject food;
    private GameObject foodRenderer;

    // Sprites
    private List<Sprite> snakeHeadSprites = new List<Sprite>();
    private List<Sprite> snakeBodySprites = new List<Sprite>();
    private List<Sprite> snakeTailSprites = new List<Sprite>();

    private void Awake()
    {
        instance = this;
    }

    private void OnEnable()
    {
        // Disable Food Renderer
        foodRenderer = GameObject.Find("/MainSceneRenderer/FoodRenderer");
        foodRenderer.GetComponent<FoodRenderer>().enabled = false;

        food = GameObject.Find("/SnakeFood");
    }

    void Start()
    {
        loseUI = GameObject.Find("/LoseUI");
        winUI = GameObject.Find("/WinUI");

        loseUI.transform.GetChild(0).gameObject.SetActive(false);
        winUI.transform.GetChild(0).gameObject.SetActive(false);

        snakeHeadSprites = GameAssets.instance.SnakeHead;
        snakeBodySprites = GameAssets.instance.SnakeBody;
        snakeTailSprites = GameAssets.instance.SnakeTail;

        Time.timeScale = 0.085f;
    }

    void FixedUpdate()
    {
        userInfo = "Snake Finding Food ...";

        FetchGameObjects();
        FetchSnakeBodies();

        FetchHeadDirections();

        SetMapToPass();

        //FindBFSDirection();
        FindGBFSDirection();
        //FindGBFSDirectionPython();

        GetDestType();
        if (destType != "Food")
        {
            MoveSnakeTail();
            MoveSnakeBody();
        }
        MoveSnakeHead();
    }

    void FindGBFSDirectionPython()
    {
        Vector2 snakeHeadPos = snakeHead.transform.position;

        // Create process info
        var psi = new ProcessStartInfo();
        psi.FileName = @"C:\Users\Windows 10\AppData\Local\Programs\Python\Python39\python.exe";

        // Scripts and Arguments
        var script = @"C:\Users\Windows 10\OneDrive - Institut Teknologi Sepuluh Nopember\ITS\KELAS\SEMESTER 4\KB (F)\ETS\GreedyBest.py";
        
        psi.Arguments = $"\"{script}\"\"{mapToPass}\"\"{rSnakeHead}\"\"{cSnakeHead}\"\"{rFoodPos}\"\"{cFoodPos}\"";

        // Process Config
        psi.UseShellExecute = false;
        psi.CreateNoWindow = true;
        psi.RedirectStandardOutput = true;
        psi.RedirectStandardError = true;

        // Execute Process and Fetch Output
        var errors = "";
        var result = "";

        using(var process = Process.Start(psi))
        {
            errors = process.StandardError.ReadToEnd();
            result = process.StandardOutput.ReadToEnd();
        }

        newSnakeHeadDirection = Int32.Parse(result);

        if (newSnakeHeadDirection == -1)
        {
            // check up
            if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) + 1).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 0;
            }
            // check right
            else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) + 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 1;
            }
            // check down
            else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) - 1).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 2;
            }
            // check left
            else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) - 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 3;
            }
            else
            {
                newSnakeHeadDirection = UnityEngine.Random.Range(0, 3);
            }
        }
    }

    void FindGBFSDirection()
    {
        Vector2 snakeHeadPos = snakeHead.transform.position;

        gbfs = new GBFS();

        newSnakeHeadDirection = gbfs.FindPath(mapToPass, rSnakeHead, cSnakeHead, rFoodPos, cFoodPos);

        if (newSnakeHeadDirection == -1)
        {
            // check up
            if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) + 1).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 0;
            }
            // check right
            else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) + 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 1;
            }
            // check down
            else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) - 1).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 2;
            }
            // check left
            else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) - 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 3;
            }
            else
            {
                newSnakeHeadDirection = UnityEngine.Random.Range(0, 3);
            }
        }
    }

    void FindBFSDirection()
    {
        Vector2 snakeHeadPos = snakeHead.transform.position;

        bfs2 = new BFS2();

        newSnakeHeadDirection = bfs2.FindPath(mapToPass, rSnakeHead, cSnakeHead, rFoodPos, cFoodPos);

        if(newSnakeHeadDirection == -1)
        {
            // check up
            if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) + 1).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 0;
            }
            // check right
            else if(GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) + 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 1;
            }
            // check down
            else if(GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) - 1).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 2;
            }
            // check left
            else if(GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) - 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
            {
                newSnakeHeadDirection = 3;
            }
            else
            {
                newSnakeHeadDirection = UnityEngine.Random.Range(0, 3);
            }
        }
    }

    void FetchGameObjects()
    {
        GameMap = GameObject.Find("/Map");
        snakeHead = GameObject.Find("/SnakeContainer/SnakeHead");
        snakeBodyContainer = GameObject.Find("/SnakeContainer/SnakeBodyContainer");
        snakeTail = GameObject.Find("/SnakeContainer/SnakeTail");
    }

    void FetchSnakeBodies()
    {
        snakeBody.Clear();
        foreach (Transform child in snakeBodyContainer.GetComponentsInChildren<Transform>())
        {
            GameObject childObject = child.gameObject;
            snakeBody.Add(childObject);
        }
    }

    void FetchHeadDirections()
    {
        oldSnakeHeadDirection = snakeHead.GetComponent<SnakeHeadDirection>().direction;
    }

    void SetMapToPass()
    {
        mapToPass.Clear();
        for(int i = 0; i < MAX_GRID; i++)
        {
            List<int> data = new List<int>();

            for (int j = 0; j < MAX_GRID; j++)
            {
                string nodeType = GameMap.transform.GetChild(i).GetChild(j).gameObject.GetComponent<NodeType>().Type;

                if (nodeType == "")
                {
                    data.Add(0);
                }
                else if (nodeType == "Food")
                {
                    data.Add(1);
                    rFoodPos = i;
                    cFoodPos = j;
                }
                else if (nodeType == "SnakeHead")
                {
                    data.Add(2);
                    rSnakeHead = i;
                    cSnakeHead = j;
                }
                else
                {
                    data.Add(-1);
                }
            }
            mapToPass.Add(data);
        }
    }

    void GetDestType()
    {
        float x = 0;
        float y = 0;

        if (newSnakeHeadDirection == 0)
        {
            x = snakeHead.transform.position.x;
            y = snakeHead.transform.position.y + 1;
        }
        else if (newSnakeHeadDirection == 1)
        {
            x = snakeHead.transform.position.x + 1;
            y = snakeHead.transform.position.y;
        }
        else if (newSnakeHeadDirection == 2)
        {
            x = snakeHead.transform.position.x;
            y = snakeHead.transform.position.y - 1;
        }
        else if (newSnakeHeadDirection == 3)
        {
            x = snakeHead.transform.position.x - 1;
            y = snakeHead.transform.position.y;
        }

        destType = GameMap.transform.GetChild(Mathf.FloorToInt(x)).GetChild(Mathf.FloorToInt(y)).gameObject.GetComponent<NodeType>().Type;
    }

    void MoveSnakeTail()
    {
        SetObjectInMap(Mathf.FloorToInt(snakeTail.transform.position.x), Mathf.FloorToInt(snakeTail.transform.position.y), "");

        GameObject snakeBodyLast = snakeBody[snakeBody.Count - 1];
        int lastBodyDirection = snakeBodyLast.GetComponent<SnakeBodyDirection>().direction;
        int oldSnakeTailDirection = snakeTail.GetComponent<SnakeTailDirection>().direction;

        int newSnakeTailDirection = 0;

        float x = snakeBodyLast.transform.position.x;
        float y = snakeBodyLast.transform.position.y;

        if (lastBodyDirection == 0)
        {
            if(y > snakeTail.transform.position.y)
            {
                newSnakeTailDirection = 0;
            }
            else
            {
                newSnakeTailDirection = 2;
            }
        }
        else if (lastBodyDirection == 1)
        {
            if (oldSnakeTailDirection == 2)
            {
                newSnakeTailDirection = 1;
            }
            else if (oldSnakeTailDirection == 3)
            {
                newSnakeTailDirection = 0;
            }
        }
        else if (lastBodyDirection == 2)
        {
            if (oldSnakeTailDirection == 0)
            {
                newSnakeTailDirection = 1;
            }
            else if (oldSnakeTailDirection == 3)
            {
                newSnakeTailDirection = 2;
            }
        }
        else if (lastBodyDirection == 3)
        {
            if (oldSnakeTailDirection == 0)
            {
                newSnakeTailDirection = 3;
            }
            else if (oldSnakeTailDirection == 1)
            {
                newSnakeTailDirection = 2;
            }
        }
        else if (lastBodyDirection == 4)
        {
            if (oldSnakeTailDirection == 1)
            {
                newSnakeTailDirection = 0;
            }
            else if (oldSnakeTailDirection == 2)
            {
                newSnakeTailDirection = 3;
            }
        }
        else if(lastBodyDirection == 5)
        {
            if (x > snakeTail.transform.position.x)
            {
                newSnakeTailDirection = 1;
            }
            else
            {
                newSnakeTailDirection = 3;
            }
        }

        snakeTail.GetComponent<SpriteRenderer>().sprite = snakeTailSprites[newSnakeTailDirection];
        snakeTail.GetComponent<SnakeTailDirection>().direction = newSnakeTailDirection;

        snakeTail.transform.position = new Vector3(x, y, 0f);

        SetObjectInMap(Mathf.FloorToInt(x), Mathf.FloorToInt(y), "SnakeTail");
    }

    void MoveSnakeBody()
    {
        GameObject snakeBodyFirst = snakeBody[1];

        int newSnakeBodyFirstDirection = 0;

        if(oldSnakeHeadDirection == 0)
        {
            if(newSnakeHeadDirection == 3)
            {
                newSnakeBodyFirstDirection = 3;
            }
            else if(newSnakeHeadDirection == 0)
            {
                newSnakeBodyFirstDirection = 0;
            }
            else if(newSnakeHeadDirection == 1)
            {
                newSnakeBodyFirstDirection = 2;
            }
        }
        else if(oldSnakeHeadDirection == 1)
        {
            if(newSnakeHeadDirection == 0)
            {
                newSnakeBodyFirstDirection = 4;
            }
            else if(newSnakeHeadDirection == 1)
            {
                newSnakeBodyFirstDirection = 5;
            }
            else if(newSnakeHeadDirection == 2)
            {
                newSnakeBodyFirstDirection = 3;
            }
        }
        else if(oldSnakeHeadDirection == 2)
        {
            if(newSnakeHeadDirection == 1)
            {
                newSnakeBodyFirstDirection = 1;
            }
            else if(newSnakeHeadDirection == 2)
            {
                newSnakeBodyFirstDirection = 0;
            }
            else if(newSnakeHeadDirection == 3)
            {
                newSnakeBodyFirstDirection = 4;
            }
        }
        else if(oldSnakeHeadDirection == 3)
        {
            if(newSnakeHeadDirection == 2)
            {
                newSnakeBodyFirstDirection = 2;
            }
            else if(newSnakeHeadDirection == 3)
            {
                newSnakeBodyFirstDirection = 5;
            }
            else if(newSnakeHeadDirection == 0)
            {
                newSnakeBodyFirstDirection = 1;
            }
        }

        if(snakeBody.Count > 2)
        {
            int i = snakeBody.Count - 1;
            int j = i - 1;
            while(i > 1)
            {
                float x = snakeBody[j].transform.position.x;
                float y = snakeBody[j].transform.position.y;

                snakeBody[i].GetComponent<SnakeBodyDirection>().direction = snakeBody[j].GetComponent<SnakeBodyDirection>().direction;
                snakeBody[i].GetComponent<SpriteRenderer>().sprite = snakeBodySprites[snakeBody[i].GetComponent<SnakeBodyDirection>().direction];

                snakeBody[i].transform.position = new Vector3(x, y, 0f);

                SetObjectInMap(Mathf.FloorToInt(x), Mathf.FloorToInt(y), "SnakeBody");

                i--;
                j--;
            }
        }

        float xFirst = snakeHead.transform.position.x;
        float yFirst = snakeHead.transform.position.y;

        snakeBodyFirst.GetComponent<SnakeBodyDirection>().direction = newSnakeBodyFirstDirection;
        snakeBodyFirst.GetComponent<SpriteRenderer>().sprite = snakeBodySprites[newSnakeBodyFirstDirection];

        snakeBodyFirst.transform.position = new Vector3(xFirst, yFirst, 0f);

        SetObjectInMap(Mathf.FloorToInt(xFirst), Mathf.FloorToInt(yFirst), "SnakeBody");
    }

    void MoveSnakeHead()
    {
        float x = 0;
        float y = 0;

        if (newSnakeHeadDirection == 0)
        {
            x = snakeHead.transform.position.x;
            y = snakeHead.transform.position.y + 1;
        }
        else if (newSnakeHeadDirection == 1)
        {
            x = snakeHead.transform.position.x + 1;
            y = snakeHead.transform.position.y;
        }
        else if (newSnakeHeadDirection == 2)
        {
            x = snakeHead.transform.position.x;
            y = snakeHead.transform.position.y - 1;
        }
        else if(newSnakeHeadDirection == 3)
        {
            x = snakeHead.transform.position.x - 1;
            y = snakeHead.transform.position.y;
        }

        // Check destination type food
        if (destType == "Food")
        {
            // Destroy Food
            GameObject.Destroy(food);

            // Make new body
            GameObject newAddedBody = new GameObject();
            SpriteRenderer newAddedBodyRenderer = newAddedBody.AddComponent<SpriteRenderer>();
            BoxCollider2D newAddedBodyCollider = newAddedBody.AddComponent<BoxCollider2D>();
            SnakeBodyDirection newAddedBodyDirection = newAddedBody.AddComponent<SnakeBodyDirection>();
            newAddedBodyRenderer.sortingLayerName = "Game";

            // Collider
            Vector2 colliderSize = new Vector2(0.9f, 0.9f);
            newAddedBodyCollider.size = colliderSize;

            int newSnakeBodyFirstDirection = 0;

            if (oldSnakeHeadDirection == 0)
            {
                if (newSnakeHeadDirection == 3)
                {
                    newSnakeBodyFirstDirection = 3;
                }
                else if (newSnakeHeadDirection == 0)
                {
                    newSnakeBodyFirstDirection = 0;
                }
                else if (newSnakeHeadDirection == 1)
                {
                    newSnakeBodyFirstDirection = 2;
                }
            }
            else if (oldSnakeHeadDirection == 1)
            {
                if (newSnakeHeadDirection == 0)
                {
                    newSnakeBodyFirstDirection = 4;
                }
                else if (newSnakeHeadDirection == 1)
                {
                    newSnakeBodyFirstDirection = 5;
                }
                else if (newSnakeHeadDirection == 2)
                {
                    newSnakeBodyFirstDirection = 3;
                }
            }
            else if (oldSnakeHeadDirection == 2)
            {
                if (newSnakeHeadDirection == 1)
                {
                    newSnakeBodyFirstDirection = 1;
                }
                else if (newSnakeHeadDirection == 2)
                {
                    newSnakeBodyFirstDirection = 0;
                }
                else if (newSnakeHeadDirection == 3)
                {
                    newSnakeBodyFirstDirection = 4;
                }
            }
            else if (oldSnakeHeadDirection == 3)
            {
                if (newSnakeHeadDirection == 2)
                {
                    newSnakeBodyFirstDirection = 2;
                }
                else if (newSnakeHeadDirection == 3)
                {
                    newSnakeBodyFirstDirection = 5;
                }
                else if (newSnakeHeadDirection == 0)
                {
                    newSnakeBodyFirstDirection = 1;
                }
            }

            string GAMEOBJECT_NAME = "SnakeBody-" + (snakeBody.Count - 1);
            string GAMEOBJECT_TAG = "Obstacle";
            float xNew = snakeHead.transform.position.x;
            float yNew = snakeHead.transform.position.y;
            float zNew = 0f;

            newAddedBody.transform.parent = snakeBodyContainer.transform;
            newAddedBody.transform.SetAsFirstSibling();
            newAddedBody.name = GAMEOBJECT_NAME;
            newAddedBody.tag = GAMEOBJECT_TAG;
            newAddedBody.transform.position = new Vector3(xNew, yNew, zNew);

            newAddedBodyRenderer.sprite = snakeBodySprites[newSnakeBodyFirstDirection];
            newAddedBodyDirection.direction = newSnakeBodyFirstDirection;
            SoundManager.instance.SnakeBiteSound.Play();

            SetObjectInMap(Mathf.FloorToInt(xNew), Mathf.FloorToInt(yNew), "SnakeBody");

            SetRemainingFood();
            userInfo = "Tap Food Position";

            foodRenderer.GetComponent<FoodRenderer>().enabled = true;

            if (GetRemainingFood() == 0)
            {
                SoundManager.instance.ThemeSound.Stop();
                SoundManager.instance.LoseSong.Play();

                userInfo = "AI Win";

                // Set End Scenes
                loseUI.transform.GetChild(0).gameObject.SetActive(true);

                // Set End Scenes Button
                GameObject loseButton = GameObject.Find("ReloadLoseButton");
                loseButton.GetComponent<Button>().interactable = true;
                foodRenderer.GetComponent<FoodRenderer>().enabled = false;
                winUI.SetActive(false);
            }
            enabled = false;
        }

        snakeHead.GetComponent<SpriteRenderer>().sprite = snakeHeadSprites[newSnakeHeadDirection];
        snakeHead.GetComponent<SnakeHeadDirection>().direction = newSnakeHeadDirection;

        snakeHead.transform.position = new Vector3(x, y, 0f);
        SoundManager.instance.SnakeMovementSounds[newSnakeHeadDirection].Play();

        if(destType == "SnakeBody" ||
            destType == "SnakeTail" ||
            destType == "Wall")
        {
            SoundManager.instance.ThemeSound.Stop();
            SoundManager.instance.LoseSFX.Play();
            SoundManager.instance.WinSong.Play();

            userInfo = "AI Lose";

            // Set End Scenes
            winUI.transform.GetChild(0).gameObject.SetActive(true);

            // Set End Scenes Button
            GameObject winButton = GameObject.Find("ReloadWinButton");
            winButton.GetComponent<Button>().interactable = true;

            loseUI.SetActive(false);

            this.enabled = false;
        }

        SetObjectInMap(Mathf.FloorToInt(x), Mathf.FloorToInt(y), "SnakeHead");
    }

    void SetObjectInMap(int xIndex, int yIndex, string content)
    {
        GameMap.transform.GetChild(xIndex).GetChild(yIndex).gameObject.GetComponent<NodeType>().Type = content;
    }

    public static int GetRemainingFood()
    {
        return remainingFood;
    }

    public static void SetRemainingFood()
    {
        remainingFood--;
    }

    public static void InitializeRemainingFood(int givenFood)
    {
        remainingFood = givenFood;
    }

    public static string GetUserInfo()
    {
        return userInfo;
    }

    public static void InitializeUserInfo(string startInfo)
    {
        userInfo = startInfo;
    }
}
