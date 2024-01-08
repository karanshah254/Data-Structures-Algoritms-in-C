#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int array[], int size)
{
    int flag;
    for (int i = 0; i < size - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int array[] = {2, 5, 7, 3, 10, 8};
    int i;
    int size = sizeof(array) / sizeof(array[i]);

    printf("\nOriginal array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    bubbleSort(array, size);
    printf("\nAfter sorting array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}