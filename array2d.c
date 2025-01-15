#include<stdio.h>
void main()
{
int arr2d[3][3];
printf("Enter integers in an array:");
//user input to 2d array of size 3 * 3
for(int i =0; i<3; i++)
{
for(int j =0; j<3; j++) 
{
scanf("%d",&arr2d[i][j]);
}}

//print the entire 2d arrray in matrix form
printf("Elements in the matrix are \n");
for(int i =0; i<3; i++)
{
for(int j =0; j<3; j++) 
{
printf("%d\t",arr2d[i][j]);
}
printf("\n");
}
int sum = 0, sumut = 0, sumlt = 0;
//applying logic and printing it
for(int i =0; i<3; i++)
{
for(int j =0; j<3; j++) 
{
if(arr2d[i][j] % 2 == 0)
printf("\n%d is even\n", arr2d[i][j]);
else
printf("\n%d is odd\n", arr2d[i][j]);

if(i == j) //sum for the diagonal elements
sum += arr2d[i][j];
if(i < j) //sum for the upper triangular elements
sumut += arr2d[i][j];
if(i > j) //sum for the lower triangular elements
sumlt += arr2d[i][j];
}
}
printf("Sum of the diagonal elements is %d\n", sum);
printf("Sum of the upper triangular elements is %d\n", sumut);
printf("Sum of the lower triangular elements is %d\n", sumlt);
}