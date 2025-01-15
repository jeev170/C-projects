#include <stdio.h>

int main()
{
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);


     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("You get 5 points.");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("You get 10 points.");
    }
    else 
    {
        printf("You get 0 points.");
    }

    return 0;
}
