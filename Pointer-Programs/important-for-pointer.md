1. Declare the pointer 
```c
    int *ptr; // declaring pointer => pointer to integer 
```
2. Pointer with another variable and its addresse
```c
    int *ptr;
    int a = 50;

    ptr = &a // now ptr has value 50
    printf("Value is : %d\n", *ptr);  // Value of ptr 
    printf("%p\n",&a); // address of value in hexadecimal
```