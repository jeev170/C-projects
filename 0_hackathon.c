#include<stdio.h>
#include<stdlib.h>

int main() 
{

printf("WELCOME TO MONTHLY EXPENSE TRACKER BY TEAM 18 of AIE-D\n");

int choice,num;
float income,t,e1,e2,e3,e4,spending;
float expense;
float sum1=0,sum2=0,sum3=0,sum4=0;
float largest;
char la[50]; 
printf("Enter the monthly income:\n");
scanf("%f",&income);

if(income>0)
{
t=income;
printf("Your monthly income is %.2f \n",income);
printf("Record your expenses \n");

printf("Enter the no of expenses:\n");
scanf("%d",&num);

printf("1.Rent\n 2.Food\n 3.Travel\n 4.Miscellaneous\n");

for(int i=1;i<=num;i++)
{

printf("\n Enter your choice:");
scanf("%d",&choice);


switch(choice)
{


case 1:
printf("Enter your rent expense:");
scanf("%f",&e1);

if(e1>0 && e1<income)
{
income=income-e1;
printf("Remaining balance is %.2f",income);
sum1+=e1;
}

else 
printf("Invalid expense");
break;

case 2:
printf("Enter your food expense:");
scanf("%f",&e2);

if(e2>0 && e2<income){
income=income-e2;
printf("Remaining balance is %.2f",income);
sum2+=e2;
}

else 
printf("Invalid expense");
break;

case 3:
printf("Enter your travel expense:");
scanf("%f",&e3);

if(e3>0 && e3<income){
income=income-e3;
printf("Remaining balance is %.2f",income);
sum3+=e3;}

else 
printf("Invalid expense");
break;

case 4:
printf("Enter your miscellanous expense:");
scanf("%f",&e4);

if(e4>0 && e4<income){
income=income-e4;
printf("Remaining balance is %.2f ",income);
sum4+=e4;
}
else 
printf("Invalid expense");
break;

default:
 printf("Invalid choice! Please try again.\n");
return 0;
}
spending=e1+e2+e3+e4;



if(spending>0.8*t)
{
printf("WARNING : Crossed 80 percent income");
}
}



int j;

largest=sum1;
j=1;

if(largest<sum2){
largest=sum2;
j=2;
}
if(largest<sum3){
largest=sum3;
j=3;
}
if(largest<sum4){
largest=sum4;
j=4;
}

if(largest==sum1)
printf("\n The largest spending contributer is Rent");

if(largest==sum2)
printf("\n The largest spending contributer is Food");

if(largest==sum3)
printf("\n The largest spending contributer is Travel");

if(largest==sum4)
printf("\n The largest spending contributer is Miscellaneous");

printf("\n Expense from rent is %.2f", sum1);
printf("\n Expense from food is %.2f", sum2);
printf("\n Expense from travel is %.2f", sum3);
printf("\n Expense from miscellaneous is %.2f \n", sum4);


FILE *file=fopen("fin.txt","w");
if (file!=NULL)
{
fprintf(file,"Monthly income=%.2f \nRent=%.2f\nFood=%.2f\nTravel=%.2f\nMiscellaneous=%.2f\nAvailable balance=%.2f",t,sum1,sum2,sum3,sum4,income);
fclose(file);
}
}

else 
printf("Invalid income \n");

}
