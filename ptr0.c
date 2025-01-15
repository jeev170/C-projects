#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num; 
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address of num): %p\n", ptr);
    printf("Value at address stored in ptr: %d\n", *ptr);

    return 0;
}
