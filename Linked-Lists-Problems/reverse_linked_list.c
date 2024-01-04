#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void reverse(struct node **head)
{
    struct node *prevNode, *current, *nextNode;
    prevNode = NULL;
    current = *head;
    nextNode = *head;

    while (nextNode != NULL)
    {
        nextNode = nextNode->next;
        current->next = prevNode;
        prevNode = current;
        current = nextNode;
    }
    *head = prevNode;
}
void display(struct node *head)
{
    struct node *current = head;
    while (current != 0)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n\n");
}
int main()
{
    struct node *head, *first, *second;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = first;

    first->data = 15;
    first->next = second;

    second->data = 20;
    second->next = NULL;

    printf("\nBefore reverse linked list is : ");
    display(head);

    printf("\nAFter reversing linked list is : ");
    reverse(&head);
    display(head);
    return 0;
}