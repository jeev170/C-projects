#include<stdio.h>


void sum();
void sub();
void mul();
void dis();


void main()
{
sum();
}

void sum()
{
int x,y;
printf("enter x and y");
scanf("%d %d",&x,&y);
int result=x+y;
printf("result is %d",result);
}

void sub()
{
int x,y;
printf("enter x and y");
scanf("%d %d",&x,&y);
int result=x-y;
printf("result is %d",result);
}

void mul()
{
int x,y;
printf("enter x and y");
scanf("%d %d",&x,&y);
int result=x*y;
printf("result is %d",result);
}

void dis()
{
int x,y;
printf("enter x and y");
scanf("%d %d",&x,&y);
int result=x/y;
printf("result is %d",result);
}
