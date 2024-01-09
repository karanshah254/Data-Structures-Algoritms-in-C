#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Stack
{
    struct Node *top;
};

void initialize(struct Stack *stack)
{
    stack->top = NULL;
}

int isEmpty(struct Stack *stack)
{
    return (stack->top == NULL);
}

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

void push(struct Stack *stack, int value)
{
    struct Node *newNode = createNode(value);
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack Underflow\n");
        return -1; 
    }

    struct Node *temp = stack->top;
    int poppedItem = temp->data;
    stack->top = temp->next;
    free(temp);
    return poppedItem;
}

int peek(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return -1; 
    }

    return stack->top->data;
}

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

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    printf("Stack elements: ");
    display(&myStack);

    int poppedItem = pop(&myStack);
    printf("Popped item: %d\n", poppedItem);

    printf("Updated Stack elements: ");
    display(&myStack);

    int topElement = peek(&myStack);
    printf("Top element: %d\n", topElement);

    return 0;
}