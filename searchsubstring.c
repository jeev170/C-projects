//search substring

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    if (strstr(str, "world") != NULL) {
        printf("Substring found\n");
    } else {
        printf("Substring not found\n");
    }
    return 0;
}
