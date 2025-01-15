// simple function calling
#include<stdio.h>

void sum();
void subtraction();
void division();
void mult();

void main() {
sum();
subtraction();
division();
mult();
}

void sum() {
int x, y;
printf("Enter x and y:");
scanf("%d %d", &x, &y);
int result = x + y;
printf("Result is %d\n",result);
}

void subtraction() {
int x, y;
printf("Enter x and y:");
scanf("%d %d", &x, &y);
int result = x - y;
printf("Result is %d\n",result);
}

void division() {
int x, y;
printf("Enter x and y:");
scanf("%d %d", &x, &y);
int result = x / y;
printf("Result is %d\n",result);
}

void mult() {
int x, y;
printf("Enter x and y:");
scanf("%d %d", &x, &y);
int result = x * y;
printf("Result is %d\n",result);
}
