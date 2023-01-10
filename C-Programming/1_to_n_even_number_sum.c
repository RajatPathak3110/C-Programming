// C program to print all even numbers and sum of it from 1 to n

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d: \n", n);

    // Print all even numbers from 1 to n
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            sum += i; // Add the even number to the sum
        }
    }

    printf("Sum of even numbers from 1 to %d: %d\n", n, sum);

    return 0;
}
