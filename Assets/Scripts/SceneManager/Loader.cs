using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Loader : MonoBehaviour
{
    [SerializeField] private Slider progressSlider;
    [SerializeField] private Text progressText;

    public void Load(int sceneBuildIndex)
    {
        StartCoroutine(AsyncLoad(sceneBuildIndex));
    }

    IEnumerator AsyncLoad(int sceneBuildIndex)
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync(sceneBuildIndex);

        GameObject loadingScreen = GameObject.Find("/LevelUI/Canvas");

        loadingScreen.transform.GetChild(4).gameObject.SetActive(true);

        while(!operation.isDone)
        {            
            float progress = Mathf.Clamp01(operation.progress / .9f);
            progressSlider.value = progress;
            progressText.text = Mathf.FloorToInt(progress * 100).ToString() + " %";

            yield return null;
        }
    }
}
