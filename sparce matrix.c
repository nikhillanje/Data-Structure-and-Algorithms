#include <stdio.h>

void main ()
{
    int a[3][3], i, j, z = 0, nz = 0;

    printf("\nENTER THE ELEMENTS OF 3x3 MATRIX:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nTWO DIMENSIONAL ARRAY IS:");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
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

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
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

        for (i = 0; i < nz; i++)
        {
            printf("%d\t%d\t%d\n", s[i][0], s[i][1], s[i][2]);
        }
    }

    
}
