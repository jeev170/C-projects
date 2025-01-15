#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp; 
    float avg; 

    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);

   avg = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %.2f\n", avg);


    if(avg >= 80)
    {
        printf("Grade A");
    }
    else if(avg >= 60)
    {
        printf("Grade B");
    }
    else if(avg >= 40)
    {
        printf("Grade C");
       }
    else
    {
        printf("Grade F");
    }

    return 0;
}
