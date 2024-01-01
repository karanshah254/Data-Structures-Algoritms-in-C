#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtMiddle(struct Node *prevNode, int data)
{
    printf("\nValue at middle is %d\n", data);
    if (prevNode == NULL)
    {
        printf("\nPrevious node cannot be null");
        return;
    }

    struct Node *newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void printList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NUll\n");
}
int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = first;

    first->data = 15;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 25;
    third->next = NULL;

    printf("\nOriginal Linked list : ");
    printList(head);

    insertAtMiddle(head->next, 18);
    printf("\nAfter insertion at middle : ");
    printList(head);

    return 0;
}