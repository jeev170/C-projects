#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "apple";
    char guess[6] = "_____";
    char letter;
    int chances = 5, correct;
    printf("Guess the word: %s\n", guess);
    while (chances > 0 && strcmp(word, guess) != 0) {
        printf("Enter a letter: ");
        scanf(" %c", &letter);
        correct = 0;
        for (int i = 0; word[i] != '\0'; i++) {
            if (word[i] == letter) {
                guess[i] = letter;
                correct = 1;
            }
        }
        if (!correct) chances--;
        printf("Word: %s, Chances left: %d\n", guess, chances);
    }
    if (strcmp(word, guess) == 0) printf("You won!\n");
    else printf("You lost! The word was %s.\n", word);
    return 0;
}
