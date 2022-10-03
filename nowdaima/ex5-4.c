#include <stdio.h>
int main()
{
    int m, i, j;
    scanf("%d", &m);
    int a[m][m];
    a[0][0] = 1;
    for (i = 0; i < m; i++)
        for (j = 0; j <= i; j++)
        {
            if (j == 0)
                a[i][0] = a[0][0];
            else if (j == i)
                a[i][j] = a[0][0];
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    return 0;
}