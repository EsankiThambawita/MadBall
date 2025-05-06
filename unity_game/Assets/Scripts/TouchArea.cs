using UnityEngine;
using UnityEngine.EventSystems;

public class TouchArea : MonoBehaviour, IPointerDownHandler, IDragHandler
{
    [SerializeField] private string playerTag = "Player";  // Default tag for 1P
    private Transform playerPaddle;

    void Start()
    {
        GameObject paddleObj = GameObject.FindGameObjectWithTag(playerTag);
        if (paddleObj != null)
        {
            playerPaddle = paddleObj.transform;
        }
        else
        {
            Debug.LogError("Paddle with tag '" + playerTag + "' not found.");
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        MovePaddle(eventData);
    }

    public void OnDrag(PointerEventData eventData)
    {
        MovePaddle(eventData);
    }

    private void MovePaddle(PointerEventData eventData)
    {
        if (playerPaddle == null) return;

        Vector2 worldPoint = Camera.main.ScreenToWorldPoint(eventData.position);
        Vector2 paddlePos = playerPaddle.position;
        playerPaddle.position = new Vector2(worldPoint.x, paddlePos.y);
    }
}
