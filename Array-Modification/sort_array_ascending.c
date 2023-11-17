#include <stdio.h>
void sortAscending()
{
    int array[50], a, i, j;

    printf("\nEnter 5 elements : \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 5; ++i)
    {
        for (j = i + 1; j < 5; ++j)
        {
            if (array[i] > array[j])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }

    printf("\nAfter sorting: ");

    for (i = 0; i < 5; i++)
    {
        printf(" %d", array[i]);
    }

    printf("\n");
}
int main()
{
    printf("\nWelcome to sort array elemnents in ascending order\n");
    sortAscending();
    
    return 0;
}