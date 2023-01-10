// C program to print all natural numbers AND sum of it from 1 to n

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum = %d\n", sum);

    return 0;
}
