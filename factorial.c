#include<stdio.h>
int factorial(int n);
void main()
{
int x;
printf("Enter value:");
scanf("%d", &x);
printf("The factorial of %d is %d",x,factorial(x));
}
int factorial(int y) {
int f = 1;
if(y==0 || y==1)
return 1;
else 
f = y * factorial(y-1);

return f;
}