//二维数组指针
#include <stdio.h>
int main()
{
    int a[3][4] = {
        {65, 67, 79, 60},
        {80, 87, 90, 81},
        {90, 99, 100, 98}};
    int (*p)[4];//定义行指针
    int i, k;
    p = a; //也可以p=&a[0]
    scanf("%d", &k);
    for (i = 0; i < 4; i++)
        printf("%6d", *(*(p + k) + i));
    printf("\n");
    return 0;
}