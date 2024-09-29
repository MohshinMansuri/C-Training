#include <stdio.h>

void main()
{
    int x = 3, y = 3, z = 3;
    int a[x][y][z];
    printf("<-------------------Enter the Array Values Here--------------->\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter the Value of %d Page\n", j+1);
            for (int k = 0; k < z; k++)
            {
                printf("Enter %d Page %d row & %d column Element : ", k + 1, i + 1, j + 1);
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                printf("%d\t", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}