using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;

public class ScoreWindow : MonoBehaviour
{
    private Text scoreText;

    void Awake()
    {
        scoreText = GameObject.Find("RemainingFood").GetComponent<Text>();
    }

    void Update()
    {
        scoreText.text = GameHandler.GetRemainingFood().ToString();
    }
}
