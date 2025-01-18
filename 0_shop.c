#include<stdio.h>
int main() {
int choice,quantity;
float total=0,price,discount,final_total;
printf("Welcome to the Shopping Cart System!\n");
  
do {
printf("1. Add Product\n2. Show Total\n3. Apply Discount\n4. Remove Product\n5. Show Final Total\n6. Generate Receipt\n7. Exit\nEnter choice: ");
scanf("%d",&choice);
  
switch(choice) {
case 1: 
printf("Enter product price: ");
scanf("%f",&price);
printf("Enter quantity: ");
scanf("%d",&quantity);
if(price<=0||quantity<=0) 
printf("Invalid input\n");
else {
total+=price*quantity;
printf("Product added successfully. Subtotal: $%.2f\n",total);
}
break;
case 2: 
printf("Current total: $%.2f\n",total);
break;
case 3: 
printf("Enter discount percentage: ");
scanf("%f",&discount);
if(discount<0||discount>100) 
printf("Invalid discount\n");
else {
final_total=total-(total*(discount/100));
printf("Discount applied. New total: $%.2f\n",final_total);
}
break;
case 4: 
printf("Enter price of product to remove: ");
scanf("%f",&price);
printf("Enter quantity to remove: ");
scanf("%d",&quantity);
if(price<=0||quantity<=0||price*quantity>total) 
printf("Invalid input\n");
else {
total-=price*quantity;
printf("Product removed successfully. Subtotal: $%.2f\n",total);
}
break;
case 5: 
final_total=total;
printf("Final total without additional discounts: $%.2f\n",final_total);
break;
case 6: 
printf("Final Total: $%.2f\nGenerating receipt...\nThank you for shopping\n",total);
choice=7; 
break;
case 7: 
printf("Exiting the system. Thank you!\n");
break;
default: 
printf("Invalid choice\n");
}
} while(choice!=7);
return 0;
}
