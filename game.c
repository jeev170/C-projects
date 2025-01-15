#include <stdio.h>

int main() {
    int secretNumber = 7; 
    int guess;

    printf("Welcome to the Number Guessing Game!\n");
    printf("\nGuess a number between 1 and 10.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 10) {
            printf("Please guess a number between 1 and 10!\n");
            continue;  
        }

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the right number.\n");
            break;  

        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    printf("Thanks for playing!\n");

    return 0;
}
