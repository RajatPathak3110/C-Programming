// C program to count total number of duplicate elements in an array.

#include <stdio.h>

int main()
{
    int arr[20], i, j, size, count;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Initialize count */
    count = 0;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            /* If duplicate element is found */
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }

    printf("Total number of duplicate elements found in array = %d", count);

    return 0;
}
