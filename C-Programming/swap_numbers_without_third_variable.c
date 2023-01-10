// C program to swap two numbers without 3rd variable.

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before swapping, a = %d and b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping, a = %d and b = %d\n", a, b);

    return 0;
}