#include <stdio.h>

int main()
{
    int n, search_element, array[10];

    printf("\nEnter Size of array : ");
    scanf("%d", &n);

    printf("\nEnter %d elements in an array : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter element to be searched : ");
    scanf("%d", &search_element);

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == search_element)
        {
            flag = 1;
            printf("\nTargeted Element %d is found at %d position\n", search_element, i);
        }
    }

    if (!flag)
    {
        printf("\nNo %d elements exist\n", search_element);
    }

    return 0;
}