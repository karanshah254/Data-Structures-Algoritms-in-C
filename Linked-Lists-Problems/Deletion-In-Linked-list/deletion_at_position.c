#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void deleltionAtPostion(struct node **head, int position)
{
    struct node *current = *head;
    struct node *previous = *head;

    if (*head == NULL)
    {
        printf("\nList is empty");
    }

    if (position == 1)
    {
        *head = current->next;
        free(current);
        current == NULL;
    }
    else
    {
        while (position != 1)
        {
            previous = current;
            current = current->next;
            position--;
        }
        previous->next = current->next;
        free(current);
        current = NULL;
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
    struct node *head, *first, *second, *third;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = first;

    first->data = 15;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 25;
    third->next = NULL;

    printf("\nBefore deletion linked list is : ");
    display(head);

    printf("\nAfter deleltion at user position : ");
    deleltionAtPostion(&head, 3);
    display(head);

    return 0;
}