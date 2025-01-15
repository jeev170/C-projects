#include <stdio.h>
int Palindrome(int num) {
 int rev = 0, d, Num;
 Num = num;
 
 while (num != 0)
{
 d = num % 10;
 rev = rev * 10 + d;
 num /= 10;
 }



 
 if (Num == rev) 
{
 return 1; 
 } 
else
{
 return 0; 
 }
}
int main() {
 int m, n, i;
 
 printf("Enter the value for (m): ");
 scanf("%d", &m);
 printf("Enter the value for (n): ");
 scanf("%d", &n);
 
 printf("Palindrome numbers between %d and %d are:\n", m, n);
 
 for (i = m; i <= n; i++) {
 if (Palindrome(i)) {
 printf("%d ", i);
 }
 }



 printf("\n");
 return 0;
}
