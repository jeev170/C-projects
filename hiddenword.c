#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "The quick brown fox jumps over the lazy dog";
    char hiddenWord[] = "fox";
    char guess[20];
    printf("Find the hidden word in the sentence:\n%s\n", sentence);
    while (1) {
        printf("Enter your guess: ");
        scanf("%s", guess);
        if (strcmp(hiddenWord, guess) == 0) {
            printf("Correct! The hidden word is '%s'.\n", hiddenWord);
            break;
        } else {
            printf("Incorrect. Try again.\n");
        }
    }
    return 0;
}
