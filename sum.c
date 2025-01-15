#include<stdio.h>
int main()
{
int n;
printf("enter number=");
scanf("%d",&n);

int sum=0;
int i=0;

while(i<=n)
{
sum = sum + i;
i++;
}
 printf("sum is = %d",sum);
return 0;
}