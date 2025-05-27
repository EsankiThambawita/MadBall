using UnityEngine;
using UnityEngine.SceneManagement;
using FlutterUnityIntegration;

public class PauseManager : MonoBehaviour
{
    public GameObject pauseMenuUI;  // Assign the PauseMenu panel here
    [SerializeField] private AudioSource audioSource; // Assign an AudioSource component in inspector
    [SerializeField] private AudioClip pauseSound;    // Assign the pause menu pop sound here

    private bool isPaused = false;

    public void TogglePause()
    {
        isPaused = !isPaused;
        pauseMenuUI.SetActive(isPaused);

        if (isPaused && audioSource != null && pauseSound != null)
        {
            audioSource.PlayOneShot(pauseSound);
        }

        Time.timeScale = isPaused ? 0f : 1f;
    }

    public void ResumeGame()
    {
        isPaused = false;
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1f;
    }

    public void RetryGame()
    {
        Time.timeScale = 1f; // Resume game time before restarting
        SceneManager.LoadScene(SceneManager.GetActiveScene().name); // Reload current scene
    }

    public void QuitGame()
    {
        Debug.Log("Quit clicked");

        // Send message to Flutter instead of quitting
        UnityMessageManager.Instance.SendMessageToFlutter("quit");
    }
}
