#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Circular Queue structure
struct CircularQueue
{
    struct Node *front;
    struct Node *rear;
};

// Function to initialize the circular queue
void initialize(struct CircularQueue *queue)
{
    queue->front = NULL;
    queue->rear = NULL;
}

// Function to check if the circular queue is empty
int isEmpty(struct CircularQueue *queue)
{
    return (queue->front == NULL);
}

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to enqueue (insert) an element into the circular queue
void enqueue(struct CircularQueue *queue, int value)
{
    struct Node *newNode = createNode(value);

    if (isEmpty(queue))
    {
        // If the queue is empty, set front and rear to the new node
        queue->front = newNode;
        queue->rear = newNode;
    }
    else
    {
        // Connect the new node to the rear and update the rear pointer
        queue->rear->next = newNode;
        queue->rear = newNode;
    }

    // Make the queue circular by connecting the rear to the front
    queue->rear->next = queue->front;
}

// Function to dequeue (remove) an element from the circular queue
int dequeue(struct CircularQueue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue Underflow\n");
        return -1; // Assuming -1 is not a valid element in the queue
    }

    // Extract the data from the front node
    int removedItem = queue->front->data;

    if (queue->front == queue->rear)
    {
        // If the queue has only one element, set front and rear to NULL
        free(queue->front);
        queue->front = NULL;
        queue->rear = NULL;
    }
    else
    {
        // Move front to the next node and free the old front node
        struct Node *temp = queue->front;
        queue->front = queue->front->next;
        free(temp);
    }

    return removedItem;
}

// Function to display the elements of the circular queue
void display(struct CircularQueue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty\n");
        return;
    }

    struct Node *current = queue->front;
    do
    {
        printf("%d ", current->data);
        current = current->next;
    } while (current != queue->front);
    printf("\n");
}

int main()
{
    struct CircularQueue myQueue;
    initialize(&myQueue);

    // Enqueue elements
    enqueue(&myQueue, 10);
    enqueue(&myQueue, 20);
    enqueue(&myQueue, 30);

    // Display the circular queue
    printf("\nCircular Queue elements: ");
    display(&myQueue);

    // Dequeue an element
    int removedItem = dequeue(&myQueue);
    printf("\nDequeued item: %d\n", removedItem);

    // Display the updated circular queue
    printf("Updated Circular Queue elements: ");
    display(&myQueue);

    return 0;
}
