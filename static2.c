#include <stdio.h>
void next();
void display();
static int counter = 7; 
int main()
{
while(counter<10) {
next();
counter++; }
display();
}
void next() { 
static int iteration = 13; 
iteration ++; 
printf("iteration=%d and counter= %d\n", iteration, counter);
}
void display()
{
printf("%d",counter);
}