#include <stdio.h>
#include <stdlib.h>

void selectionSort(int array[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = array[min];
            array[min] = array[i];
            array[i] = temp;
        }
    }
}
int main()
{
    int array[] = {7, 4, 10, 8, 3, 1}, i;
    int size = sizeof(array) / sizeof(array[i]);

    printf("\nOriginal array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nAfter selection sort array is : ");
    selectionSort(array, size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}