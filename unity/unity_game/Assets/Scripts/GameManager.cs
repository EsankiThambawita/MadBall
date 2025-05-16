using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    [Header("HUD Score Texts")]
    public Text playerScoreText;
    public Text aiScoreText;

    [Header("Game Over UI")]
    public GameOverUIController gameOverUIController;

    private int playerScore = 0;
    private int aiScore = 0;
    private int winningScore = 5;

    void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);
    }

    public void IncreasePlayerScore()
    {
        playerScore++;
        playerScoreText.text = playerScore.ToString();
        CheckGameOver();
    }

    public void IncreaseAIScore()
    {
        aiScore++;
        aiScoreText.text = aiScore.ToString();
        CheckGameOver();
    }

    public void CheckGameOver()
    {
        if (playerScore >= winningScore || aiScore >= winningScore)
        {
            if (playerScore > aiScore)
                gameOverUIController.ShowWinPanel(playerScore, aiScore);
            else
                gameOverUIController.ShowLosePanel(playerScore, aiScore);

            Time.timeScale = 0f;
        }
    }

    public void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
}
