#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "planet";
    char scrambled[] = "nelpat";
    char guess[20];
    printf("Guess the word from the scrambled letters: %s\n", scrambled);
    while (1) {
        printf("Enter your guess: ");
        scanf("%s", guess);
        if (strcmp(word, guess) == 0) {
            printf("Correct! The word is %s.\n", word);
            break;
        } else {
            printf("Incorrect! Try again.\n");
        }
    }
    return 0;
}
