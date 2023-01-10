// C program to find all angles of a triangle if two angles are given.

#include <stdio.h>

int main()
{
    int angle1, angle2;
    int angle3;
    printf("Enter the first angle of the triangle: ");
    scanf("%d", &angle1);
    printf("Enter the second angle of the triangle: ");
    scanf("%d", &angle2);

    angle3 = 180 - angle1 - angle2; // formula to find the third angle of a triangle

    printf("The third angle of the triangle is: %d", angle3);

    return 0;
}
