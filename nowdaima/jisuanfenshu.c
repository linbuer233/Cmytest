#include <stdio.h>
double fun(int n, double x)
{
    int i, j, item = 1;
    double m = 1, v = 1, s = 1, k = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i + 1; j++)
            m = m * x;
        for (j = 1; j < i + 1; j++)
        {
            if (i == 1)
                break;
            v = v * (2 * j);
        }
        for (j = 1; j < i + 1; j++)
            s = s * (2 * j - 1);
        k = k + item * m / v * s;
        item = -item;
    }
    return k;
};

int main()
{
    int a;
    double b;
    scanf("%d%lf", &a, &b);
    printf("%lf\n", fun(a, b));
    return 0;
}