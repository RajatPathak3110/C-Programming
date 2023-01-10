// C program to print all Perfect numbers between 1 to n

#include <stdio.h>

int main()
{
    int n, i, sum;

    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d:\n", n);

    for (i = 1; i <= n; i++)
    {
        sum = 0;

        // Find the sum of the divisors of i
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }

        // Check if i is a perfect number
        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
