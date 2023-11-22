// Binary Search

#include <stdio.h>

int binarySearch(int array[], int n, int search_element)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid =  (right + left) / 2;

        if (array[mid] == search_element)
        {
            return mid;
        }

        if (array[mid] < search_element)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n, search_element, array[10];

    printf("\nEnter Size of array : ");
    scanf("%d", &n);

    printf("\nEnter %d elements in a sorted array : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter element to be searched : ");
    scanf("%d", &search_element);

    int position = binarySearch(array, n, search_element);

    if (position != -1)
    {
        printf("\nTargeted Element %d is found at %d position\n", search_element, position);
    }
    else
    {
        printf("\nNumber %d element doesn't exist\n", search_element);
    }

    return 0;
}