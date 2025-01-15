#include<stdio.h>
#include<math.h>
void main()
{
float num1, num2;
float result;
char ch;
printf("Give the operation:");
scanf("%c",&ch);
printf("Give the first integer:");
scanf("%f",&num1);
printf("Give the second integer:");
scanf("%f",&num2);
switch(ch)
{
case '+';
result = num1+num2;
printf("Result is %f", result);
break;
case '-';
result = num1-num2;
printf("Result is %f", result);
break;
case '*';
result = num1*num2;
printf("Result is %f", result);
break;
case '/';
result = num1/num2;
printf("Result is %f", result);
break;
default:
printf("Invalid Input");
}
}
