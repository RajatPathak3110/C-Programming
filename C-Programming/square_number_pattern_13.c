/*
1    2   3   4    5
6    7   8   9   10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

#include <stdio.h>

int main()
{
    int rows, cols, i, j, k;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    k = 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++, k++)
        {
            printf("%-3d", k);
        }

        printf("\n");
    }

    return 0;
}
