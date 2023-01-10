// C program to swap two numbers using a third variable

#include <stdio.h>

int main(void)
{
    int a, b, temp;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before swapping, a = %d and b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping, a = %d and b = %d\n", a, b);

    return 0;
}
