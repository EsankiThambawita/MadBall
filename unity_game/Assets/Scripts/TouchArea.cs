using UnityEngine;
using UnityEngine.EventSystems;

public class TouchArea : MonoBehaviour, IPointerDownHandler, IDragHandler
{
    private Transform playerPaddle;

    void Start()
    {
        GameObject paddleObj = GameObject.FindGameObjectWithTag("Player");
        if (paddleObj != null)
        {
            playerPaddle = paddleObj.transform;
        }
        else
        {
            Debug.LogError("Player paddle with tag 'Player' not found.");
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
