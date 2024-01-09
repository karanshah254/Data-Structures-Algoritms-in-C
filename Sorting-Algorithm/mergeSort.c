#include <stdio.h>
#include <stdlib.h>
void merge(int array[], int beg, int mid, int end)
{
    int i = 0, j = 0, k = beg;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[5], RightArray[4];

    for (int i = 0; i < n1; i++)
    {
        LeftArray[i] = array[beg + i];
    }
    for (int j = 0; j < n2; j++)
    {
        RightArray[j] = array[mid + 1 + j];
    }

    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            array[k] = LeftArray[i];
            i++;
        }
        else
        {
            array[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        array[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(array, beg, mid);
        mergeSort(array, mid + 1, end);
        merge(array, beg, mid, end);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
}
int main()
{
    int array[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    int i;
    int size = sizeof(array) / sizeof(array[i]);

    printf("\nOriginal array is : ");
    printArray(array, size);

    printf("\n");

    printf("\nAfter sorting array : ");
    mergeSort(array, 0, size - 1);
    printArray(array, size);
    return 0;
}