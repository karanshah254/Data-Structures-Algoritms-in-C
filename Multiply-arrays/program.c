#include <stdio.h>
#include <math.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];

    printf("\nWelcome to 3x3 multiplication of array-matrix..");
    printf("\nEnter Elements for array 1 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nArray 1 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter elements for array 2 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nArray 2 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j] = a[i][k] * b[k][j];
            }
        }
    }

    printf("\nAfter multiplication of array-matrix of 3X3 matrix 3 is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}