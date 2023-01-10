/*
01110
10001
10001
10001
01110
*/

#include <stdio.h>

int main()
{
    int i, j, rows, cols;

    /* Input rows and columns from user */
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            // Print corner element
            if ((i == 1 || i == rows) && (j == 1 || j == cols))
            {
                printf("0");
            }
            else if (i == 1 || i == rows || j == 1 || j == cols)
            {
                // Print edge
                printf("1");
            }
            else
            {
                // Print center
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}
