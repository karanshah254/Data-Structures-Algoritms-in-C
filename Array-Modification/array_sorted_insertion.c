// Binary search 

#include <stdio.h>

void insertIntoSortedArray(int array[], int *size, int value)
{
    int i = *size - 1;

    while (i >= 0 && array[i] > value)
    {
        array[i + 1] = array[i];
        i--;
    }

    array[i + 1] = value;

    (*size)++;
}

int main()
{
    int n, newValue;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int array[n + 1];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);

    insertIntoSortedArray(array, &n, newValue);

    printf("Sorted array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
