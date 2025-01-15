#include <stdio.h>

int main() {
    float weight, height, bmi;


    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);
    
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

  
    bmi = weight / (height * height);

    
    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight");
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Normal weight");
    }
    else {
        printf(" Overweight");
    }

    return 0;
}
