#include <stdio.h>

int main() {
    char word[100];
    int length = 0;
    printf("Enter a word: ");
    scanf("%s", word);
    while (word[length] != '\0') length++;
    printf("Length of the word is: %d\n", length);
    return 0;
}
