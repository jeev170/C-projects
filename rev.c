#include<stdio.h>
main()
{
int n,rev,d;
printf("Enter any number with more than one digit");
scanf("%d",&n);
rev=0;
while(n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
printf("The reversed digit is %d",rev);
return 0;
}
