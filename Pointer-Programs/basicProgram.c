#include <stdio.h>

int main()
{
    int *ptr; // pointer to integer
    int value = 10;

    ptr = &value;
    printf("Value is : %d\n", *ptr);  // Value of ptr 
    printf("%p\n",&value); // address of value in hexadecimal

    return 0;
}
