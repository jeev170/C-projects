#include <stdio.h>
int main()
{
 int num, Num, rev = 0, d;
 
 printf("Enter an integer: ");
 scanf("%d", &num);
 Num = num; 
 
 while (num != 0)
{
 d = num % 10; 
 rev = rev * 10 + d; 
 num /= 10; 
 }

 if (Num == rev)
{
 printf("%d is a palindrome.\n", Num);
 } else {
 printf("%d is not a palindrome.\n", Num);
 }
 return 0;
}
