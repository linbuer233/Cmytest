#include <stdio.h>
#include <math.h>
int main()
{
    int n = 101, m, a = 0;
    while (n <= 200)
    {
        for (m = 2; m <= sqrt(n); m++)
            if (n % m == 0)
                break;
        if (m > sqrt(n))
        {
            printf("%5d", n);
            a++;
        }
        n++;
    }
    printf("\n101-200֮�乲��%d������\n", a);
    return 0;
}