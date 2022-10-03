#include <stdio.h>
int main()
{
    int a, b, c, m = -1;
    printf("请输入三角形的三条边\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a - b < c && c < a + b)
    {
        m = 0;
        if (a == b || a == c || b == c)
        {
            m = 1;
            if (a == b && b == c)
                m = 2;
        }
    }
    if (m == -1)
        printf("这不是一个三角形\n");
    if (m == 0)
        printf("这是个不等边三角形\n");
    if (m == 1)
        printf("这是一个等腰三角形\n");
    if (m == 2)
        printf("这是一个等边三角形\n");

    return 0;
}