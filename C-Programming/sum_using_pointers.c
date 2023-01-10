// C program to add two number using pointers

#include <stdio.h>

int main()
{
    int a, b;
    int *p, *q;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    p = &a;
    q = &b;

    printf("Sum of %d and %d is %d\n", a, b, *p + *q);

    return 0;
}
