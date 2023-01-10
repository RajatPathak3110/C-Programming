// C program to print Pascal triangle up to n rows

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print Pascal triangle
    for (i = 0; i < n; i++)
    {
        // Print leading spaces
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // Print numbers in current row
        for (j = 0; j <= i; j++)
        {
            // Print number using binomial coefficient formula
            printf("%d ", binomialCoeff(i, j));
        }

        printf("\n");
    }

    return 0;
}

int binomialCoeff(int n, int k)
{
    int res = 1;

    // Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1]
    if (k > n - k)
    {
        k = n - k;
    }

    for (int i = 0; i < k; i++)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}
