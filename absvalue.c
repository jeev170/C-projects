#include <stdio.h>

int absoluteValue(int x) 
{
return (x < 0) ? -x : x;
}

int main() 
{
int x;
printf("Enter a number: ");
scanf("%d", &x);

printf("Absolute value of %d is %d\n", x, absoluteValue(x));
return 0;
}
