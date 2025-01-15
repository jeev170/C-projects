#include <stdio.h>

int main() {
    int a, b, result;
    char op;
    printf("Enter an operation (e.g., 3 + 4): ");
    scanf("%d %c %d", &a, &op, &b);
    if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    else if (op == '*') result = a * b;
    else if (op == '/') result = b != 0 ? a / b : 0;
    else {
        printf("Invalid operator.\n");
        return 1;
    }
    printf("Result: %d\n", result);
    return 0;
}
