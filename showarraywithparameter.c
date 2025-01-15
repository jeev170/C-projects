//passing an array as a parameter
#include<stdio.h>
void showarray(int array[]); // function declaration
void main()
{
int arr[5];
printf("Enter integers in an array:");
for(int i =0; i<5; i++)
{
scanf("%d",&arr[i]);
}
showarray(arr);
}

void showarray(int array[]) // function definition
{
printf("Integers in an array:\n");
for(int i =0; i<5; i++)
{
printf("%d\t",array[i]);
}

}