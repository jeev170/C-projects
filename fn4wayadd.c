#include <stdio.h>

void add_no_arg_no_return() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
}

int add_no_arg_with_return() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

void add_with_arg_no_return(int a, int b) {
    printf("Sum: %d\n", a + b);
}

int add_with_arg_with_return(int a, int b) {
    return a + b;
}

int main() {
    int a, b;

    add_no_arg_no_return();

    printf("Sum: %d\n", add_no_arg_with_return());

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    add_with_arg_no_return(a, b);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", add_with_arg_with_return(a, b));

    return 0;
}
