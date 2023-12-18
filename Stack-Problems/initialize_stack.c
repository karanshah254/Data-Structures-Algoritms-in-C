#include <stdio.h>
#include <stdlib.h>

#define size 100

struct Stack
{
    int items[size];
    int top;
};

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
    myStack.top = -1;

    return 0;
}