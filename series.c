#include<stdio.h>
#include<math.h>
int main()
{

int x, n;
printf("enter x=");
scanf("%d",&x);

printf("enter n=");
scanf("%d",&n);

int i=0;
int sum=0;

while(i<=n)
{
sum= sum + pow(-1, i)*pow(x, i);

i++; 
}

printf("= %d", sum);



return 0;
}