#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void createNode(struct node **head, int data)
{
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (*head == NULL)
    {
        *head = temp = newNode;
    }
    else
    {
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
    }
}

void displayForward(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
void reverse(struct node *head)
{
    struct node *temp = NULL;
    struct node *current = head;
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL)
    {
        head = temp->prev;
    }
}
void displayBackward(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;

    printf("\nAdded node data : ");
    createNode(&head, 10);
    createNode(&head, 20);
    createNode(&head, 30);

    printf("\nForward display is : ");
    displayForward(head);

    printf("\nBackward display is : ");
    reverse(head);
    displayBackward(head);

    return 0;
}