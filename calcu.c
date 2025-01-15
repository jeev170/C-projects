
#include<stdio.h>

int sum();
int subtraction();
int division();
int mult();

int x, y;


void main() {
printf("Enter x and y:");
scanf("%d %d", &x, &y);
printf("Sum is %d",sum());
printf("Sub is %d",subtraction());
printf("Div is %d",division());
printf("Mult is %d",mult());
}

int sum() {
int result = x + y;
return result;
}

int subtraction() {
int result = x - y;
return result;
}

int division() {
int result = x / y;
return result;
}

int mult() {
int result = x * y;
return result;
}
