#include <stdio.h>

int main() 
{
    int a;

    
    printf("Enter the age: ");
    scanf("%d", &a);


    if (a>=18 ) 
{
        printf("You can vote");
    } 

else 
{
       printf("You cant vote");

    }

    

    return 0;
}
