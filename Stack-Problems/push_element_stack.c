#include <stdio.h>
#include <stdlib.h>
#define size 50
struct Stack
{
    int items[size];
    int top;
};

void push(struct Stack *stack, int value)
{
    if (stack->top == size - 1)
    {
        printf("\nStack is full\nNo element can be pushed");
        return;
    }

    stack->items[++stack->top] = value;
    printf("\nPushed %d onto the stack.", value);
}

// Function to display the elements of the stack
void display(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("\nStack elements: ");
    for (int i = 0; i <= stack->top; i++)
    {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

int main()
{
    struct Stack myStack;
    myStack.top = -1;

    // Push some elements into the stack
    push(&myStack, 7);
    push(&myStack, 9);
    push(&myStack, 3);

    // display the elements
    display(&myStack);

    return 0;
}