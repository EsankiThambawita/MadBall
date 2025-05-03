using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    [SerializeField] private float movementSpeed;
    [SerializeField] private bool isAI;
    [SerializeField] private GameObject ball;

    private Rigidbody2D rb;
    private Vector2 playerMove;

    private float minX, maxX;  // To limit paddle movement
    private bool isDragging = false;  // To track when player is holding the paddle

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();

        // Get screen boundaries
        Vector2 screenBounds = Camera.main.ScreenToWorldPoint(new Vector2(Screen.width, Screen.height));

        // Set limits for paddle movement
        float paddleWidth = GetComponent<Collider2D>().bounds.extents.x;
        minX = -screenBounds.x + paddleWidth;
        maxX = screenBounds.x - paddleWidth;
    }

    void Update()
    {
        if (isAI)
        {
            AIControl();
        }      
    }

    //To touch the paddle itself to make it move (currently not using)
    private void HandleTouchInput()
    {
        if (Input.GetMouseButtonDown(0)) // Detect initial touch
        {
            Vector2 touchPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            Collider2D hit = Physics2D.OverlapPoint(touchPos);

            if (hit != null && hit.gameObject == gameObject)  // Check if the paddle is touched
            {
                isDragging = true;
            }
        }

        if (Input.GetMouseButton(0) && isDragging) // While dragging the paddle
        {
            Vector2 touchPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            float clampedX = Mathf.Clamp(touchPos.x, minX, maxX); // Limit paddle movement
            transform.position = new Vector2(clampedX, transform.position.y);
        }

        if (Input.GetMouseButtonUp(0)) // When the player releases the paddle
        {
            isDragging = false;
        }
    }

    private void AIControl()
    {
        if (ball.transform.position.x > transform.position.x + 0.5f) 
        {
            playerMove = new Vector2(1, 0);  
        }
        else if (ball.transform.position.x < transform.position.x - 0.5f)  
        {
            playerMove = new Vector2(-1, 0);  
        }
        else
        {
            playerMove = new Vector2(0, 0);  
        }
    }

    void FixedUpdate()
    {
        rb.linearVelocity = playerMove * movementSpeed;  
    }
}
