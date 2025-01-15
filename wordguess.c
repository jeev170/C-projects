#include <stdio.h>
#include <string.h>

int main() {
    char secret[] = "code";
    char guess[20];
    printf("Guess the word: ");
    while (1) {
        scanf("%s", guess);
        if (strcmp(secret, guess) == 0) {
            printf("You guessed it!\n");
            break;
        } else {
            printf("Try again!\n");
        }
    }
    return 0;
}
