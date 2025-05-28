using UnityEngine;

public class PlayerMovement2P : MonoBehaviour
{
    [SerializeField] private float movementSpeed;
    [SerializeField] private int playerNumber = 1; // 1 or 2

    private Rigidbody2D rb;
    private Vector2 playerMove;

    private float minX, maxX;  // To limit paddle movement
    private float paddleHeight;
    private Vector2 screenBounds;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();

        // Get screen boundaries
        screenBounds = Camera.main.ScreenToWorldPoint(new Vector2(Screen.width, Screen.height));

        // Set limits for paddle movement
        paddleHeight = GetComponent<Collider2D>().bounds.extents.y;
        minX = -screenBounds.x + paddleHeight;
        maxX = screenBounds.x - paddleHeight;
    }

    void Update()
    {
        HandlePlayerInput();
    }

    private void HandlePlayerInput()
    {
        float moveInput = 0f;

        if (playerNumber == 1)
        {
            // Player 1 uses A and D keys for left and right movement
            if (Input.GetKey(KeyCode.A))
                moveInput = -1;
            else if (Input.GetKey(KeyCode.D))
                moveInput = 1;
        }
        else if (playerNumber == 2)
        {
            // Player 2 uses LeftArrow and RightArrow keys for left and right movement
            if (Input.GetKey(KeyCode.LeftArrow))
                moveInput = -1;
            else if (Input.GetKey(KeyCode.RightArrow))
                moveInput = 1;
        }

        playerMove = new Vector2(moveInput, 0);
    }

    void FixedUpdate()
    {
        // Apply horizontal movement
        rb.linearVelocity = new Vector2(playerMove.x * movementSpeed, rb.linearVelocity.y);

        // Clamp vertical movement
        float clampedY = Mathf.Clamp(transform.position.y, -screenBounds.y + paddleHeight, screenBounds.y - paddleHeight);
        transform.position = new Vector2(transform.position.x, clampedY);
    }
}
