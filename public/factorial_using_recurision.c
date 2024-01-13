#include <stdio.h>
#include <stdlib.h>

int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }

    return number * factorial(number - 1);
}
int main()
{
    int number;

    printf("\nEnter Number : ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("\nNo factorial is found");
    }
    else
    {
        printf("\nFactorial of %d is : %d", number, factorial(number));
    }
}