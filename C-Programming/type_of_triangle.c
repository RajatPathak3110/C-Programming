
#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter the lengths of the sides of the triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("The triangle is equilateral.\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("The triangle is isosceles.\n");
    }
    else
    {
        printf("The triangle is scalene.\n");
    }

    return 0;
}
