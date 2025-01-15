#include <stdio.h>

int main() 
{
    float x, y;

   
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);

    printf("Enter the y-coordinate: ");
    scanf("%f", &y);
    
    if (x > 0 && y > 0) 
{
        printf("First Quadrant");
    }
    
    else if (x < 0 && y > 0) 
{
        printf("Second Quadrant");
    }
    else if (x < 0 && y < 0) 
{
        printf("Third Quadrant");
    }
    else if (x > 0 && y < 0) 
{
        printf("Fourth Quadrant");
    }
return 0;
}
