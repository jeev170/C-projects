#include <stdio.h>

int main() {
    char secret = 'k';
    char guess;
    int attempts = 5;
    printf("Guess the secret letter (a-z). You have %d attempts:\n", attempts);
    while (attempts > 0) {
        scanf(" %c", &guess);
        if (guess == secret) {
            printf("Correct! The secret letter is '%c'.\n", secret);
            break;
        } else {
            attempts--;
            printf("Wrong! You have %d attempts left.\n", attempts);
        }
    }
    if (attempts == 0) printf("Out of attempts! The letter was '%c'.\n", secret);
    return 0;
}
