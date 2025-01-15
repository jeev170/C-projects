// function calling with global variables
#include<stdio.h>

void sum();
void subtraction();
void division();
void mult();

int x, y;

void main() 
{
printf("Enter x and y:");
scanf("%d %d", &x, &y);
sum();
subtraction();
division();
mult();
}

void sum() 
{
int result = x + y;
printf("Sum Result is %d\n",result);
}

void subtraction()
 {
int result = x - y;
printf("Sub Result is %d\n",result);
}

void division()
 {
int result = x / y;
printf("Div Result is %d\n",result);
}

void mult() 
{
int result = x * y;
printf("Mult Result is %d\n",result);
}
