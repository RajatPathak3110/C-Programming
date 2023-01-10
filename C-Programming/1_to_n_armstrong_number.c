// C program to print armstrong numbers from 1 to n

#include <stdio.h>
#include <math.h>

int main()
{
    int n, num, digit, sum;

    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d:\n", n);

    for (num = 1; num <= n; num++)
    {
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
            printf("%d ", num);
        }
    }

    return 0;
}
