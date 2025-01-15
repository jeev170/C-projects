#include<stdio.h>
void main() {
int a = 5;
int* ptr;
int** ptr2ptr;
ptr = &a;
ptr2ptr = &ptr;
printf("%d\n",a);
printf("%d\n", &a);
printf("%p\n",&a);

printf("%d\n",*&a);
 
printf("Value at ptr = %p \n", ptr); // address of the variable a

printf("Value at *ptr = %p \n", *ptr); //  value at the address of variable a = value

printf("Value at ptr2ptr = %p \n", ptr2ptr);
// address of the address of variable a

printf("Value at *ptr2ptr = %p \n", *ptr2ptr);
// value at the address of the address of variable a =  address of the variable a


}