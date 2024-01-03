#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void deleteAtStart(struct node **head)
{
    if (*head == NULL)
    {
        printf("The list is already empty\n");
    }

    struct node *temp = *head;
    *head = (*head)->next;
    free(temp);
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
    printf("\nBefore deletion linked list is : ");
    display(head);

    deleteAtStart(&head);
    printf("\nAfter deleltion at beginning : ");
    display(head);

    return 0;
}