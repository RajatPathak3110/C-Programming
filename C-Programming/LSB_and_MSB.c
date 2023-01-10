// C program to check Least Significant Bit (LSB) and MSB of a number using bitwise operator.

#include <stdio.h>

int main()
{
    // Declare a variable for the input number
    int num;

    // Get the input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Use a bitwise AND operator to check the LSB
    if (num & 1)
    {
        printf("The LSB of %d is set (1).\n", num);
    }
    else
    {
        printf("The LSB of %d is not set (0).\n", num);
    }

    // Use a bitwise AND operator to check the MSB
    if (num & (1 << 31))
    {
        printf("The MSB of %d is set (1).\n", num);
    }
    else
    {
        printf("The MSB of %d is not set (0).\n", num);
    }

    return 0;
}
