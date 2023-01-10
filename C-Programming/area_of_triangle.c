// C program to find area of a triangle if base and height are given

#include <stdio.h>

int main()
{
    float base, height, area;

    /* Read base and height from user */
    printf("Enter base of triangle: ");
    scanf("%f", &base);
    printf("Enter height of triangle: ");
    scanf("%f", &height);

    /* Calculate area of triangle */
    area = (base * height) / 2;

    /* Print result */
    printf("Area of triangle: %.2f", area);

    return 0;
}