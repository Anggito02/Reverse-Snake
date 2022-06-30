using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * GameAssets ==> Game Assets instance for scripts to access game sprites
 * 
 */

public class GameAssets : MonoBehaviour
{
    // Instance
    public static GameAssets instance;

    private void Awake()
    {
        instance = this;    
    }

    // Sprites
    public Sprite GameWalls;

    public List<Sprite> Foods = new List<Sprite>();
    public List<Sprite> SnakeHead = new List<Sprite>();
    public List<Sprite> SnakeBody = new List<Sprite>();
    public List<Sprite> SnakeTail = new List<Sprite>();
}
