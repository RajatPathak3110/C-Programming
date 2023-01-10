// C program to find power of any number using for loop

#include <stdio.h>

int main()
{
    int base, exponent, result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = 1;

    // Calculate the power using a for loop
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
