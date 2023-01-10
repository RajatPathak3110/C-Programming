/*
12345
23456
34567
45678
56789
*/

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user
     */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++)
    {
        for (j = i; j < i + cols; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
