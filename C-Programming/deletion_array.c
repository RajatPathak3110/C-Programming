// C program to delete an element in array at specified position.

#include <stdio.h>

int main()
{
    int arr[50], size, i, pos;
    printf("\n Enter size of the array: ");
    scanf("%d", &size);
    printf("\n Enter elements in the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the element position to delete: ");
    scanf("%d", &pos);
    // now delete element
    for (i = pos - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("\n Array after deletion is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
