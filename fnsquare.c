#include <stdio.h>

int square(int a) 
{
    return a * a;
}

int aPlusBSquare(int a, int b) {
  
    return square(a) + 2 * a * b + square(b);
}

int main() 
{
    int result = aPlusBSquare(1, 2);

    printf("Result: %d\n", result);
}

