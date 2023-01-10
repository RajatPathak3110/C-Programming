// C program Swap 2 numbers using Call by Value AND Call by reference

#include <stdio.h>

// function to swap two numbers using call by value
void swap_call_by_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// function to swap two numbers using call by reference
void swap_call_by_reference(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Before swapping (call by value): a = %d, b = %d\n", a, b);
    swap_call_by_value(a, b);
    printf("After swapping (call by value): a = %d, b = %d\n", a, b);

    printf("Before swapping (call by reference): a = %d, b = %d\n", a, b);
    swap_call_by_reference(&a, &b);
    printf("After swapping (call by reference): a = %d, b = %d\n", a, b);

    return 0;
}
