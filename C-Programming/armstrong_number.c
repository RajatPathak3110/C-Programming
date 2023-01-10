// C program to check a given number is Armstrong numbers or not.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = 0;

    // Make a copy of num and store it in temp
    int temp = num;

    // Find total digits in num
    int digits = (int)log10(num) + 1;

    // Calculate sum of power of digits
    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    // Check if num is equal to sum of digits raised to power of total digits
    if (num == sum)
    {
        printf("%d is an Armstrong number\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
