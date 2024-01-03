#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void deleltionAtEnd(struct node **head)
{
    struct node *temp = *head;
    struct node *prev = NULL;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == *head)
    {
        *head = NULL;
        free(temp);
    }
    else
    {
        prev->next = NULL;
        free(temp);
    }
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

    deleltionAtEnd(&head);
    printf("\nAfter deleltion at end : ");
    display(head);

    return 0;
}