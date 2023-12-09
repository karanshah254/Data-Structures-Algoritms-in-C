#include <stdio.h>
int main()
{
    int array[] = {1, 1, 2, 2, 3, 3, 4};
    int result = 0;

    for (int i = 0; i < 7; i++)
    {
        result = result ^ array[i];
    }

    printf("%d\n", result);
    return 0;
}