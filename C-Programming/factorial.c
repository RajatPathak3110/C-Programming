// C program to calculate the factorial of a number:

#include <stdio.h>

int main()
{
    int n, i, factorial = 1;

    // Get the number for which we want to calculate the factorial
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the factorial
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d: %d\n", n, factorial);

    return 0;
}
