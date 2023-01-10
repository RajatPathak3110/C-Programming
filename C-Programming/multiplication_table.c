// C program to print multiplication table of a number

#include <stdio.h>

int main()
{
    int n, i;

    // Get the number for which we want to print the multiplication table
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print the multiplication table
    printf("Multiplication table for %d:\n", n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
