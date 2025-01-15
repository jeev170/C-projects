#include<stdio.h>
void main()
{
int arr[5];
printf("Enter integers in an array:");
for(int i =0; i<5; i++)
{
scanf("%d",&arr[i]);
}
printf("Array element is:");
for(int i =0; i<5; i++)
{
printf("%d\t",arr[i]);
}

}