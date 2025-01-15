#include <stdio.h>

int main() {
    int number = 42, guess;
    printf("Guess the number (1 to 100):\n");
    while (1) {
        scanf("%d", &guess);
        if (guess > number) printf("Too high!\n");
        else if (guess < number) printf("Too low!\n");
        else {
            printf("You guessed it!\n");
            break;
        }
    }
    return 0;
}
