// C program to find maximum between three numbers using ternary operator

#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The maximum of a, b, and c is: %d\n", max);

    return 0;
}
