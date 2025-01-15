#include<stdio.h>

void main()
{
int i,j;

//outer loop

for(i=1; i<=2; i++)
{
printf("outer: %d\n", i); //executes two times

//inner loop
for(j=1; j<=3; j++)
{

printf("  inner: %d\n", j); //executes six times

printf("%d\n",i*j);

}}}
