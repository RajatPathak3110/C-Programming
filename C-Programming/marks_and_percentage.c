// C program to calculate total, average and percentage and grades of five subjects.

#include <stdio.h>
int main()
{
    // Declare variables for the five subjects, total, average, and percentage
    float subject1, subject2, subject3, subject4, subject5;
    float total, average, percentage;

    // Get the grades for the five subjects from the user
    printf("Enter the grade for subject 1: ");
    scanf("%f", &subject1);
    printf("Enter the grade for subject 2: ");
    scanf("%f", &subject2);
    printf("Enter the grade for subject 3: ");
    scanf("%f", &subject3);
    printf("Enter the grade for subject 4: ");
    scanf("%f", &subject4);
    printf("Enter the grade for subject 5: ");
    scanf("%f", &subject5);

    // Calculate the total, average, and percentage
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    // Print the results
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
