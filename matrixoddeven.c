#include <stdio.h>

int main() {
int matrix[3][3];
int i, j;


printf("Enter the elements of the 3x3 matrix:\n");
for (i = 0; i < 3; i++) 
{
for (j = 0; j < 3; j++) 
{
printf("Enter element [%d][%d]: ", i, j);
scanf("%d", &matrix[i][j]);
}
}

printf("\nEven numbers in the matrix:\n");
for (i = 0; i < 3; i++) 
{
for (j = 0; j < 3; j++) 
{
if (matrix[i][j] % 2 == 0) 
{
printf("%d ", matrix[i][j]);
}
}
}

printf("\nOdd numbers in the matrix:\n");
for (i = 0; i < 3; i++) 
{
for (j = 0; j < 3; j++) 
{
if (matrix[i][j] % 2 != 0) 
{
printf("%d ", matrix[i][j]);
}
}
}

    return 0;
}
