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

    private bool gameStarted = false;
    private bool gameEnded = false;

    void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);
    }

    void Start()
    {
        playerScore = 0;
        aiScore = 0;

        if (playerScoreText != null)
            playerScoreText.text = "0";

        if (aiScoreText != null)
            aiScoreText.text = "0";
    }

    public void StartGame()
    {
        gameStarted = true;
        gameEnded = false;
    }

    public void IncreasePlayerScore()
    {
        if (!gameStarted || gameEnded) return;

        playerScore++;
        playerScoreText.text = playerScore.ToString();
        CheckGameOver();
    }

    public void IncreaseAIScore()
    {
        if (!gameStarted || gameEnded) return;

        aiScore++;
        aiScoreText.text = aiScore.ToString();
        CheckGameOver();
    }

    public void CheckGameOver()
    {
        if (gameEnded) return;

        if (playerScore >= winningScore || aiScore >= winningScore)
        {
            gameEnded = true;

            if (playerScore > aiScore)
                gameOverUIController.ShowWinPanel(playerScore, aiScore);
            else
                gameOverUIController.ShowLosePanel(playerScore, aiScore);

            Time.timeScale = 0f;
        }
    }
}