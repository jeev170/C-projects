#include<stdio.h>

void main()
{
int n;
int fact=1; // since we are dealing with product we have to keep=1 otherwise 0*x=0
printf("Enter the number:");
scanf("%d",&n);
for(int i=1;i<=n;i++) //or (i=n;i>=1;i--)
{
fact=fact*i;
}
printf("\n the fact of %d id %d",n,fact);
}
