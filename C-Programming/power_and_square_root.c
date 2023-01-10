// C program to find power and square root of any number.

#include <stdio.h>
#include <math.h>

int main()
{
    double num, result;
    int power;

    printf("Enter a number: ");
    scanf("%lf", &num);

    result = sqrt(num);
    printf("The square root of %lf is %lf\n", num, result);

    printf("Enter an integer power: ");
    scanf("%d", &power);

    result = pow(num, power);
    printf("%lf to the power of %d is %lf\n", num, power, result);

    return 0;
}
