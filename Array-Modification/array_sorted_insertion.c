#include <stdio.h>

// Function to insert a number into a sorted array
void insertIntoSortedArray(int array[], int *size, int value)
{
    int i = *size - 1;

    // Move elements greater than the value to the right
    while (i >= 0 && array[i] > value)
    {
        array[i + 1] = array[i];
        i--;
    }

    // Insert the value into the correct position
    array[i + 1] = value;

    // Increase the size of the array
    (*size)++;
}

int main()
{
    int n, newValue;

    // Input the size of the array
    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int array[n + 1]; // Create an array with one extra space

    // Input elements of the sorted array
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Input the new value to insert
    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);

    // Call the function to insert the value into the sorted array
    insertIntoSortedArray(array, &n, newValue);

    // Display the updated sorted array
    printf("Sorted array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
