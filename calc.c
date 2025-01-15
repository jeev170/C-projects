#include<stdio.h>
#include<math.h>
void main()
{
float a,b;
float res;
char ch;
printf("Give the operation:");
scanf("%c", &ch);
printf("Give the first integer:");
scanf("%f",&a);
printf("Give the second integer:");
scanf("%f",&b);
if(ch == '+')
{
res=a+b;}
else if(ch == '-')
{
res=a-b; }
else if(ch == ' ** )
{
res=a*b;}
else if(ch='/')
{
res=a/b;
}
else
{ 
printf("Input Invalid");
}
printf ("Result is %f", res);
}

