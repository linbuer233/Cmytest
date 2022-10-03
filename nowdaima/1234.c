#include <stdio.h>
//#include <stdlib.h>
#include <math.h>

int main()
{
    int m, n, i, j;
    j = 0;
    for (n = 101; n <= 200; n++)
    {
        m = sqrt(n);
        for (i = 2; i <= m; i++)
        {
            if (n % i == 0)
                break;
        }

        if (n % i != 0)
        {
            printf("%5d\n", n);
            j++;
            if (j % 5 == 0)
                printf("\n");
        }
    }
    printf("¹²%d¸öËØÊý\n", j);
    return 0;
}
