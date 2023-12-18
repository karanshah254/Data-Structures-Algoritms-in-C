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

// Function to reverse a string
void reverseString(char str[])
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
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

// Function to convert infix to prefix
void infixToPrefix(char infix[], char prefix[])
{
    // Reverse the infix expression
    reverseString(infix);

    // Convert the reversed infix expression to postfix
    char postfix[MAX_SIZE];
    infixToPostfix(infix, postfix);

    // Reverse the postfix expression to get the prefix expression
    reverseString(postfix);
    strcpy(prefix, postfix);
}

int main()
{
    char infixExpression[MAX_SIZE];
    char prefixExpression[MAX_SIZE];

    printf("Enter an infix expression: ");
    fgets(infixExpression, MAX_SIZE, stdin);

    // Remove the newline character from the input
    infixExpression[strcspn(infixExpression, "\n")] = '\0';

    infixToPrefix(infixExpression, prefixExpression);

    printf("Infix Expression: %s\n", infixExpression);
    printf("Prefix Expression: %s\n", prefixExpression);

    return 0;
}
