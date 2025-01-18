#include<stdio.h>
int main() {
int pin=1234,entered_pin,choice;
float balance=1000.0,withdraw,deposit;
  
printf("Welcome to the ATM!\n");
printf("Enter PIN: ");
scanf("%d",&entered_pin);
if(entered_pin!=pin) {
printf("Invalid PIN\n");
return 0;
}
  
do {
printf("1. Balance Inquiry\n2. Cash Withdrawal\n3. Deposit Money\n4. Change PIN\n5. Transfer Funds\n6. Mini Statement\n7. Exit\nEnter choice: ");
scanf("%d",&choice);
  
switch(choice) {
case 1: 
printf("Balance: $%.2f\n",balance);
break;
case 2: 
printf("Enter amount to withdraw: ");
scanf("%f",&withdraw);
if(withdraw>balance) 
printf("Insufficient balance\n");
else if(withdraw<=0) 
printf("Invalid amount\n");
else {
balance-=withdraw;
printf("Withdrawal successful. New balance: $%.2f\n",balance);
}
break;
case 3: 
printf("Enter amount to deposit: ");
scanf("%f",&deposit);
if(deposit<=0) 
printf("Invalid amount\n");
else {
balance+=deposit;
printf("Deposit successful. New balance: $%.2f\n",balance);
}
break;
case 4: 
printf("Enter new PIN: ");
scanf("%d",&pin);
printf("PIN changed successfully\n");
break;
case 5: 
printf("Enter amount to transfer: ");
scanf("%f",&withdraw);
if(withdraw>balance) 
printf("Insufficient balance\n");
else if(withdraw<=0) 
printf("Invalid amount\n");
else {
balance-=withdraw;
printf("Funds transferred successfully. New balance: $%.2f\n",balance);
}
break;
case 6: 
printf("Mini statement unavailable. Feature under development.\n");
break;
case 7: 
printf("Thank you for using the ATM\n");
break;
default: 
printf("Invalid choice\n");
}
} while(choice!=7);
return 0;
}
