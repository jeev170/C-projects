#include<stdio.h>

int main()
{

int a=1, b=1;
int n;

printf("Enter no of terms: ");
scanf("%d", &n);


int i=1;
int sum;

while(i<=n)
{
sum=a+b;

printf("%d\n" ,a);

a=b;
b=sum;

i++;
}


printf("sum is %d",sum);

return 0;
}