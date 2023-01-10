// C program to copy an array to another array AND reverse an array using pointers

#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int size;
    int *p1, *p2;
    int i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Copy array using pointers
    p1 = arr1;
    p2 = arr2;
    for (i = 0; i < size; i++)
    {
        *p2 = *p1;
        p1++;
        p2++;
    }

    // Reverse array using pointers
    p1 = arr2 + size - 1;
    p2 = arr2;
    while (p1 > p2)
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1--;
        p2++;
    }

    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Copied and reversed array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
