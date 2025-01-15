#include<stdio.h>
void main()
{
int a=0,b=1;
int sum=0;
int noofterms;
printf("Enter the no.of terms:");
scanf("%d", &noofterms) ;
for(int i=0;i<noofterms; i++)
{
sum=a + b;
printf("%d\n", sum);
a=b;
b=sum; }}





/*
Initial number =0,1
Add 0+1=1
Add 1+1=2
Add 1+2=3
Add 2+3=5
Add 3+5=8
Add 5+8=13
Logic : Consider 'b' to be new 'a' and 'sum' to be new 'b'
*/
