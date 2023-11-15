#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];

    printf("\nWelcome to 2x2 multiplication of array-matrix..");
    printf("\nEnter elements for array 1 : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Array 1 is : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter elements for array 2 : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nArray 2 is : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                c[i][j] = a[i][k] * b[k][j];
            }
        }
    }

    printf("\nAfter multiplication of array-matrix of 2X2 the new matrix 3 : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}