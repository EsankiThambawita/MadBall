using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    public static SceneLoader Instance;
    public static string SelectedDifficulty = "easy";

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject); // persist this across scene loads
        }
        else
        {
            Destroy(gameObject); // prevent duplicates
        }
    }

    // Flutter calls this using postMessage('GameManager', 'LoadSceneWithDifficulty', ...)
    public void LoadSceneWithDifficulty(string payload)
    {
        var split = payload.Split('|');
        if (split.Length == 2)
        {
            SetDifficultyFromFlutter(split[0]);
            LoadScene(split[1]);
        }
        else
        {
            Debug.LogWarning("[SceneLoader] Invalid scene load payload: " + payload);
        }
    }

    public void SetDifficultyFromFlutter(string difficulty)
    {
        SelectedDifficulty = difficulty.ToLower();
        Debug.Log("[SceneLoader] Difficulty set to: " + SelectedDifficulty);
    }

    public void LoadScene(string sceneName)
    {
        Debug.Log("[SceneLoader] Loading scene: " + sceneName);
        SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
    }

    public void SetGameVolume(string value)
{
    if (float.TryParse(value, out float volume))
    {
        AudioListener.volume = Mathf.Clamp01(volume);
    }
}

}
