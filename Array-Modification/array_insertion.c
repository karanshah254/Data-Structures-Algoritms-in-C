#include <stdio.h>

int main()
{
    int array[10], n;
    int new_number, position;

    printf("\nEnter the size of array : ");
    scanf("%d", &n);

    printf("\nEnter %d elements in array : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter position to be inserted : ");
    scanf("%d", &position);

    if (position < 0 || position >= n)
    {
        printf("\nInvalid position is entered ... write valid position");
        return 1;
    }

    printf("\nEnter New value to be entered : ");
    scanf("%d", &new_number);

    for (int i = n; i > position; i--)
    {
        array[i] = array[i - 1];
    }

    array[position] = new_number;
    n++;

    printf("\nAfter insertion the array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d\n", array[i]);
    }

    return 0;
}
