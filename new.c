#include <stdio.h>

int main()
{
    int arr[2] = { 2, 5 };
    int *i = &arr[0];
    int *j = &arr[0];

    // Directly printing the pointers without void cast
    printf("i as pointer: %p\n", i);  // Prints the address of arr[0]
    printf("j as pointer: %p\n", j);  // Prints the address of arr[0]

    printf("i address: %p\n", i);      // Correctly prints the address
    printf("j address: %p", j);         // Correctly prints the address

    return 0;
}
