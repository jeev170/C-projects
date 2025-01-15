#include<stdio.h>
void main(){
int a[6];
printf("Enter the data in the array:\n");
for(int i = 0;i<6;i++)
scanf("%d", &a[i]);

printf("The array is:\n");
for(int i = 0;i<6;i++) {
printf("%d\t",a[i]);
if(a[i]%2==0)
printf("%d is even\n",a[i]);
else
printf("%d is odd\n",a[i]);
}
}