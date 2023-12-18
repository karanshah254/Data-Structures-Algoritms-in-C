#include <stdio.h>
#include <stdlib.h>
#define size 50

struct Stack
{
    int items[size];
    int top;
};

// push element in stack
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

// pop element in stack
int pop(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf("\nStack is empty");
        return -1;
    }

    return (stack->items[stack->top--]);
}

void display(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf("\nStack is empty");
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

    push(&myStack, 10);

    display(&myStack);

    printf("\nPoped element is : %d", pop(&myStack));

    display(&myStack); 
    return 0;
}
