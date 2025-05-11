using UnityEngine;

public class GameManager : MonoBehaviour
{
    private int playerScore = 0;
    private int aiScore = 0;
    public int maxScore = 10;

    public GameOverUIController gameOverUI;

    private bool gameOver = false;

    public void AddPlayerScore()
    {
        if (gameOver) return;

        playerScore++;
        CheckGameOver();
    }

    public void AddAIScore()
    {
        if (gameOver) return;

        aiScore++;
        CheckGameOver();
    }

    void CheckGameOver()
    {
        if (playerScore >= maxScore)
        {
            gameOver = true;
            gameOverUI.ShowWinCard(playerScore, aiScore);
        }
        else if (aiScore >= maxScore)
        {
            gameOver = true;
            gameOverUI.ShowLoseCard(playerScore, aiScore);
        }
    }
}
