#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void getLength(struct node **head)
{
    int count = 0;
    struct node *temp;
    temp = *head;

    if (*head == NULL)
    {
        printf("\nempty");
    }
    else
    {
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        printf("\nlength is %d", count);
    }
}

void display(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
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

    first->data = 12;
    first->next = second;

    second->data = 15;
    second->next = third;

    third->data = 20;
    third->next = NULL;

    getLength(&head);
    printf("\nLinked list node elements are : ");
    display(head);
    return 0;
}