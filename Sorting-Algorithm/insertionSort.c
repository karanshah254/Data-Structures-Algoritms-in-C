#include <stdio.h>
#include <stdlib.h>
void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; ++i)
    {
        int temp = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}
int main()
{
    int array[] = {5, 4, 10, 1, 6, 2}, i;
    int size = sizeof(array) / sizeof(array[i]);

    printf("\nOriginal Array is -> ");
    for (i = 0; i < size; i++)
    {
        printf("|%d| ", array[i]);
    }

    printf("\nAfter Insertion Sort Array is -> ");
    insertionSort(array, size);
    for (i = 0; i < size; i++)
    {
        printf("|%d| ", array[i]);
    }
    return 0;
}