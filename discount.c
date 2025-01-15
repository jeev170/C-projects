#include <stdio.h>

int main() {
    float amount;


    printf("Enter amount: ");
    scanf("%f", &amount);
    
  

    if (amount <= 1000) 
{
        printf("5% discount");
    }
   
    else if (amount <= 5000) 
{
        printf("10% discount");
    }

    
    else if (amount <= 10000) 
{
        printf("20 % discount");
    }


    return 0;
}
