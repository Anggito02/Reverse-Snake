using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;

public class UserInfo : MonoBehaviour
{
    private Text userInfoText;

    private void Awake()
    {
        userInfoText = GameObject.Find("UserInfoText").GetComponent<Text>();
    }

    void Update()
    {
        userInfoText.text = GameHandler.GetUserInfo();
    }
}
