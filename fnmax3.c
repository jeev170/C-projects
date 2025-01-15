#include <stdio.h>

int maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    int x = 10, y = 15, z = 5;
    printf("Maximum: %d\n", maxOfThree(x, y, z));
    return 0;
}
