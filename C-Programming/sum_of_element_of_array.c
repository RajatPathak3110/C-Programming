// C program to find the sum of all elements of an array

#include <stdio.h>

int main()
{
    int arr[100], size, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find the sum of all elements of the array
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of all elements of array: %d\n", sum);

    return 0;
}
