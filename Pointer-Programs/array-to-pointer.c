#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p; // pointer declaration
    p = arr;
    int a[10];
    int *q = a;

    printf("\nEnter 5 elements: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);  // &a[i] = &q[i] => read elements
    }

    for (int i = 0; i < 5; i++)
    {
        printf(" %d",a[i]); // a[i] = q[i] => prints the elements
    }
    
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", size); // Output is 5

    printf("%p\n", arr);
    printf("%p\n", p);
    // both the above statements gives same output

    printf("%d\n", arr[2]);     // direct access answer is 3
    printf("%d\n", *(arr + 2)); // through pointer answer is 3
    printf("%d\n", *(p + 1));   // through pointer answer is 3
    /* arr[i] = *(arr+i) = *(p+i) => to access the array elements using pointer */

    printf("%d\n", 2 [arr]);    // gives answer 3
    printf("%d\n", *(2 + arr)); // gives answer 3
    // new formate => i[arr] = *(i+arr) = *(i+p)  => gives element at index i of an array

    return 0;
}