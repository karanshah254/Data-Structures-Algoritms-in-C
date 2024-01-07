#include <stdio.h>
#include <stdlib.h>
#define size 100

struct Stack
{
    int top;
    int items[size];
};

// push or add element in stack
void push(struct Stack *stack, int value)
{
    if (stack->top == size - 1)
    {
        printf("\nStack overflow or stack is full");
        return;
    }

    stack->items[++stack->top] = value;
    printf("\n%d is pushed to stack", value);
}

// fetching top element in stack
int peek(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf("\nStack is empty");
        return -1;
    }

    return (stack->items[stack->top]);
}

int main()
{
    struct Stack myStack;
    myStack.top = -1;

    push(&myStack, 5);
    push(&myStack, 6);

    printf("\nTop element in stack => %d\n", peek(&myStack));
}