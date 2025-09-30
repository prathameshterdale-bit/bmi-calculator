#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Prompt user for weight and read input
    printf("Enter your weight in kilograms (kg): ");
    scanf("%f", &weight);

    // Prompt user for height and read input
    printf("Enter your height in meters (m): ");
    scanf("%f", &height);

    // Calculate BMI using the formula: weight / (height * height)
    bmi = weight / (height * height);

    // Display the calculated BMI
    printf("Your BMI is: %.2f\n", bmi);

    // Categorize BMI and display the result
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Category: Normal weight\n");
    } else if (bmi >= 25 && bmi <= 29.9) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }

    return 0;
} 

