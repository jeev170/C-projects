//palindrome string

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "madam";
    int n = strlen(str), isPalindrome = 1;
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
    return 0;
}
