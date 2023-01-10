// C program to copy one array to another array

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Copy elements of arr1 to arr2
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("Elements of array 2:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
