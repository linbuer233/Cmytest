#include <stdio.h>
#include <math.h>
float fun(int n);
int main()
{
    int n;
    float m;
    scanf("%d", &n);
    m = fun(n);
    printf("sum=%f\n", m);
    return 0;
}

float fun(int n)
{
    
    int i;
    double j;
    float sum = 1;
    for (i = 1; i <= n; i++)
    {
        double mu = 0;
        for (j = 0; j < i ; j++)
            mu += 1 * pow(10, j);
        if (i > 1)
        {
            mu = i * mu;
            sum += 1 / mu;
        }
    }
    return sum;
}