#include <stdio.h>

int main()
{
    int n, position, array[50];

    printf("\nEnter size of array : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("\nInvalid size of array");
        return 1;
    }

    printf("\nEnter %d number of elements : \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter positon of element with respect to index 0 : ");
    scanf("%d", &position);

    if (position < 0 || position >= n)
    {
        printf("\nInvalid position ");
        return 1;
    }

    for (int i = position; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }

    n--;

    printf("\nAfter deletion of array :");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");
    return 0;
}