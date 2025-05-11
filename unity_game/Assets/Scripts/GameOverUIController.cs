using UnityEngine;
using UnityEngine.UI;

public class GameOverUIController : MonoBehaviour
{
    public GameObject winCard;
    public GameObject loseCard;

    [Header("Win Card Texts")]
    public Text winPlayerScoreText;
    public Text winAIScoreText;

    [Header("Lose Card Texts")]
    public Text losePlayerScoreText;
    public Text loseAIScoreText;

    void Start()
    {
        winCard.SetActive(false);
        loseCard.SetActive(false);
    }

    public void ShowWinCard(int playerScore, int aiScore)
    {
        Debug.Log("Game Over: Player Wins");
        winCard.SetActive(true);
        loseCard.SetActive(false);

        winPlayerScoreText.text = "Player: " + playerScore;
        winAIScoreText.text = "AI: " + aiScore;
    }

    public void ShowLoseCard(int playerScore, int aiScore)
    {
        Debug.Log("Game Over: AI Wins");
        loseCard.SetActive(true);
        winCard.SetActive(false);

        losePlayerScoreText.text = "Player: " + playerScore;
        loseAIScoreText.text = "AI: " + aiScore;
    }
}
