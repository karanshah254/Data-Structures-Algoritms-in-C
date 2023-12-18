#include <stdio.h>
#include <stdlib.h>

#define size 100

struct Stack
{
    int items[size];
    int top;
};

// Initalize the stack
void intialize(struct Stack *stack)
{
    stack->top = -1;
}

// check if stack is empty 
int isEmpty(struct Stack *stack)
{
    return (stack->top == -1);
}

// checking if stack is full 
int isFull(struct Stack *stack)
{
    return (stack->top = size - 1);
}

// calling main function
int main()
{
    struct Stack myStack;
    intialize(&myStack);

    return 0;
}