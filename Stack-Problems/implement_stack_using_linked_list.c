#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Stack structure
struct Stack
{
    struct Node *top;
};

// Function to initialize the stack
void initialize(struct Stack *stack)
{
    stack->top = NULL;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack)
{
    return (stack->top == NULL);
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

// Function to push an element onto the stack
void push(struct Stack *stack, int value)
{
    struct Node *newNode = createNode(value);
    newNode->next = stack->top;
    stack->top = newNode;
}

// Function to pop an element from the stack
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack Underflow\n");
        return -1; // Assuming -1 is not a valid element in the stack
    }

    struct Node *temp = stack->top;
    int poppedItem = temp->data;
    stack->top = temp->next;
    free(temp);
    return poppedItem;
}

// Function to peek at the top element of the stack
int peek(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return -1; // Assuming -1 is not a valid element in the stack
    }

    return stack->top->data;
}

// Function to display the elements of the stack
void display(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return;
    }

    struct Node *current = stack->top;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Stack myStack;
    initialize(&myStack);

    // Push elements onto the stack
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    // Display the stack
    printf("Stack elements: ");
    display(&myStack);

    // Pop an element
    int poppedItem = pop(&myStack);
    printf("Popped item: %d\n", poppedItem);

    // Display the updated stack
    printf("Updated Stack elements: ");
    display(&myStack);

    // Peek at the top element
    int topElement = peek(&myStack);
    printf("Top element: %d\n", topElement);

    return 0;
}