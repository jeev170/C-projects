#include<stdio.h>

int sum(int x, int y);

int x,y;

void main()
{
printf("Enter x and y:");
scanf("%d %d",&x,&y);
printf("Sum is %d",sum(x,y));
}

int sum(int x, int y)
{
int result=x+y;
return result;
}
