using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;

public class MenuToLevel : MonoBehaviour
{
    [SerializeField] private List<GameObject> LevelButtons;
    [SerializeField] private GameObject LevelBackground;

    private GameObject levelUI;

    public void OpenLevel()
    {
        levelUI = GameObject.Find("LevelUI");
        levelUI.transform.GetChild(0).gameObject.SetActive(true);

        foreach(GameObject button in LevelButtons)
        {
            button.GetComponent<Button>().interactable = true;
        }

        LevelBackground.SetActive(true);
    }
}
