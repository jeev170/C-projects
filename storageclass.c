#include<stdio.h>
int c;
int func()
{
auto int a = 0;
static int b = 0;

printf("%d \t %d\n",a,b);
a++;
b++;
return 0;
}

void main() {
//for(int i=0;i<10;i++)
c=5;
func();
func();
func();
func();
printf("%d",c);
}