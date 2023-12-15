#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;

    // memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // assigning values
    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    // linking node wtih next node
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    // calling display function
    display(head);
    printf("This continues as per user choice..\n");

    return 0;
}