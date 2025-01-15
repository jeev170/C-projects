
#include<stdio.h>

int sum(int x, int y); 
int subtraction(int x, int y);
int division(int x, int y);
int mult(int x, int y);


void main() {
int x, y;
printf("Enter x and y:");
scanf("%d %d", &x, &y);
printf("Sum is %d\n",sum(x, y));
printf("Sub is %d\n",subtraction(x, y));
printf("Div is %d\n",division(x, y));
printf("Mult is %d\n",mult(x, y));
}


int sum(int x, int y) {
int result = x + y;
return result;

}

int subtraction(int x, int y) {
int result = x - y;
return result;
}

int division(int x, int y) {
int result = x / y;
return result;
}

int mult(int x, int y) {
int result = x * y;
return result;
}
