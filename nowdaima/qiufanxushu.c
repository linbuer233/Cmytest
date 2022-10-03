#include <stdio.h>
int main()
{
    int a, m, n = 0;
    scanf("%d", &a);

    if (a < 0)
        printf("ÊäÈë´íÎó");
        return 0£»
    else
    {
        while (a != 0)
        {
            m = a % 10;
            n = n * 10 + m;
            a = a / 10;
        }
        printf("%d\n", n);
    }
    return 0;
}