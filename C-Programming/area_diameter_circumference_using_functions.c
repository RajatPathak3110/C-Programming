// C program to find diameter, circumference and area of a circle using functions

// How to Find Area of a Circle with Diameter in C using Functions
#include <stdio.h>

// This function will print the diameter, circumference, and area
void CalcCircumferenceArea(float r)
{
    float d = 0, c = 0, a = 0;
    // d = diameter, c = circumference, a = area

    // Calculation of diameter, circumference, and area
    d = 2 * r;
    c = 2 * 3.14 * r;
    a = 3.14 * (r * r);

    // It will print the final output
    printf("\n");
    printf("Diameter: = %f units \n", d);
    printf("Circumference: = %f units \n", c);
    printf("Area: = %f sq. units ", a);
}

// It's the driver function
int main()
{
    float r; // radius of the circle

    printf("Enter the radius of the circle::\n");
    scanf("%f", &r);

    CalcCircumferenceArea(r);
    return 0;
}
