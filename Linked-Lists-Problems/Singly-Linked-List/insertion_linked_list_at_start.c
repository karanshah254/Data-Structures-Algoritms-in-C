#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertAtStart(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;

    *head = newNode;
}

void printList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));

    head->data = 15;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 25;
    second->next = NULL;

    insertAtStart(&head, 9);
    insertAtStart(&head, 10);

    printf("\nInsertion at the beginning is : \n");
    printList(head);

    return 0;
}