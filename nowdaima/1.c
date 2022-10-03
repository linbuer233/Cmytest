#include <stdio.h>

int main()
{
    int n;
    double s, m=0;
    s = 1.0;
    for (n = 2; n <= 10; n++)
    {
        m = (n - 1) / n;
        s = s + m;
    }
    printf("%lf", s);
    return 0;
}