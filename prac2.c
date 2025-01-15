#include<stdio.h>
int main()
{
int a, s;
printf("Enter age=");
scanf("%d",&a);
printf("Enter salary=");
scanf("%d",&s);
if(a>=50)
{
printf("age is greater than 50 \n");

if(s>=60000)
{
s=1.05*s;
printf("new salary is %d",s);
}

else
{
s=1.1*s;
printf("new salary is %d",s);
}
}

else
{
s=1.03*s;
printf("new salary is %d",s);
}
return 0;
}