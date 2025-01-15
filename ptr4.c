#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Before: num = %d\n", num);
    *ptr = 50; // Changing value of num via pointer
    printf("After: num = %d\n", num);

    return 0;
}
