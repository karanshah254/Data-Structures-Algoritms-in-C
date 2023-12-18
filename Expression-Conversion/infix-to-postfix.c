#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

struct Stack
{
    int top;
    char items[MAX_SIZE];
};

void initialize(struct Stack *stack)
{
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack)
{
    return (stack->top == -1);
}

// Function to push an element onto the stack
void push(struct Stack *stack, char value)
{
    if (stack->top == MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack->items[++stack->top] = value;
}

// Function to pop an element from the stack
char pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack Underflow\n");
        return '\0'; // Assuming '\0' is not a valid element in the expression
    }
    return stack->items[stack->top--];
}

// Function to get the precedence of an operator
int getPrecedence(char operator)
{
    switch (operator)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return 0;
    }
}

// Function to convert infix to postfix
void infixToPostfix(char infix[], char postfix[])
{
    struct Stack operatorStack;
    initialize(&operatorStack);

    int infixLength = strlen(infix);
    int postfixIndex = 0;

    for (int i = 0; i < infixLength; i++)
    {
        char currentSymbol = infix[i];

        if (isalnum(currentSymbol))
        {
            // If operand, append to postfix
            postfix[postfixIndex++] = currentSymbol;
        }
        else if (currentSymbol == '(')
        {
            // If opening parenthesis, push onto the stack
            push(&operatorStack, currentSymbol);
        }
        else if (currentSymbol == ')')
        {
            // Pop operators from the stack and append to postfix until an opening parenthesis is encountered
            while (!isEmpty(&operatorStack) && operatorStack.items[operatorStack.top] != '(')
            {
                postfix[postfixIndex++] = pop(&operatorStack);
            }
            // Pop the opening parenthesis from the stack
            pop(&operatorStack);
        }
        else
        {
            // If operator, pop operators with higher or equal precedence from the stack and append to postfix
            while (!isEmpty(&operatorStack) && getPrecedence(operatorStack.items[operatorStack.top]) >= getPrecedence(currentSymbol))
            {
                postfix[postfixIndex++] = pop(&operatorStack);
            }
            // Push the current operator onto the stack
            push(&operatorStack, currentSymbol);
        }
    }

    // Pop any remaining operators from the stack and append to postfix
    while (!isEmpty(&operatorStack))
    {
        postfix[postfixIndex++] = pop(&operatorStack);
    }

    // Null-terminate the postfix expression
    postfix[postfixIndex] = '\0';
}

int main()
{
    char infixExpression[MAX_SIZE];
    char postfixExpression[MAX_SIZE];

    printf("Enter an infix expression: ");
    fgets(infixExpression, MAX_SIZE, stdin);

    // Remove the newline character from the input
    infixExpression[strcspn(infixExpression, "\n")] = '\0';

    infixToPostfix(infixExpression, postfixExpression);

    printf("Infix Expression: %s\n", infixExpression);
    printf("Postfix Expression: %s\n", postfixExpression);

    return 0;
}
