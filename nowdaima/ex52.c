#include <stdio.h>
long fun(long a);
int main()
{
    long a, m, n = 0;
    scanf("%ld", &a);
    while (a != 0)
    {
        m = a % 10;
        if (m % 2 == 0)
        {
            n = n * 10 + m;
        }
        a = a / 10;
    }
    printf("%d\n", fun(n));
    return 0;
}

long fun(long a)
{
    int m, n = 0;
    while (a != 0)
    {
        m = a % 10;
        n = n * 10 + m;
        a = a / 10;
    }
    return n;
}