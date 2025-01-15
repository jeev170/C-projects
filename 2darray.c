#include<stdio.h>
void main(){
int a[4][4];
printf("Enter the data in the array:\n");
for(int i=0;i<4;i++)
for(int j=0;j<4;j++)
scanf("%d", &a[i][j]);

printf("The array is:\n");
for(int i = 0;i<4;i++) {
for(int j = 0;j<4;j++) {
printf("%d\t",a[i][j]);
/*if(a[i][j]%2==0)
printf("%d is even\n",a[i][j]);
else
printf("%d is odd\n",a[i][j]);
*/
}
printf("\n");
}
}