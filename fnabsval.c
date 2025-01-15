#include <stdio.h>

void print_absolute_value(int x) {
    int absolute_value = (x < 0) ? -x : x; 
    printf("The absolute value of %d is: %d\n", x, absolute_value);
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    print_absolute_value(x);
    return 0;
}
