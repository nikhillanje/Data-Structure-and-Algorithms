#include <stdio.h>

void main()
{
    int row, col, i, j, z = 0, nz = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int a[row][col];

    printf("\nENTER THE ELEMENTS OF %dx%d MATRIX:\n", row, col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nTWO DIMENSIONAL ARRAY IS:");
    for (i = 0; i < row; i++)
    {
        printf("\n");
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                z++;
            }
            else
            {
                nz++;
            }
        }
    }

    if (nz > z)
    {
        printf("\nIT IS NOT A SPARSE MATRIX\n");
    }
    else
    {
        int s[nz][3], k = 0;

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (a[i][j] != 0)
                {
                    s[k][0] = i;
                    s[k][1] = j;
                    s[k][2] = a[i][j];
                    k++;
                }
            }
        }

        printf("\nSPARSE MATRIX IS:\n");
        printf("row    column   value\n");

        for (i = 0; i < nz; i++)
        {
            printf("%d\t%d\t%d\n", s[i][0], s[i][1], s[i][2]);
        }
    }
}
