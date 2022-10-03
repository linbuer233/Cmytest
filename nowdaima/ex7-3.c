#include <stdio.h>
int main()
{
    int a[3][5];
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            printf("a[%d][%d]µÄµØÖ·=%d\n", i, j, &a[i][j]);
    return 0;
}