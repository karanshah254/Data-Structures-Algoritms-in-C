#include<stdio.h>

int main()
{
    int array[10];

    printf("\nReading array elements");
    printf("\nEnter 5 elements : \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("\nPrinting elements of an array / traversal of array :");

    for (int i = 0; i < 5; i++)
    {
        printf(" %d",array[i]);
    }

    printf("\n");
    return 0;
}