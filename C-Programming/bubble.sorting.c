#include <stdio.h>

int main()
{
    // Declare an array
    int arr[100], i, j, temp, size;

    // Ask the user to enter the size of the array
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    // Ask the user to enter the elements of the array
    printf("Enter the elements of the array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // print the second largest number number
    printf("Second largest number is: %d", arr[size - 2]);
    return 0;
}
