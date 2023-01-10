// C program to check a given number is Perfect numbers or not

#include <stdio.h>

int main()
{
    int num, i, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = 0;

    // Find the sum of the divisors of num
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    // Check if num is a perfect number
    if (sum == num)
    {
        printf("%d is a perfect number\n", num);
    }
    else
    {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
}