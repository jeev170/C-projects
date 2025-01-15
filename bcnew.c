#include <stdio.h>

int main() 
{
    int i = 0;

    while (i < 10) {
        i++;

       
        if (i % 3 == 0)
 {
            continue;
        }


        if (i == 10) {
            break;
        }

        printf("i = %d\n", i);
    }

    return 0;
}
