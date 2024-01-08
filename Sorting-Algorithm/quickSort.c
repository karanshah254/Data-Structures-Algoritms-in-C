#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int location = partition(arr, low, high);
        quickSort(arr, low, location - 1);
        quickSort(arr, location + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {12, 17, 6, 25, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\nOriginal array is : ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);
    printf("\nSorted array: ");
    printArray(arr, n);

    return 0;
}
