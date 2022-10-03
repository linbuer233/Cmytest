#include <stdio.h>
int main()
{
    int a ;

    printf("请输入成绩:\n");
    scanf("%d", &a);
    if (a < 0 || a > 100)
        printf("输入错误");
    if (90 <= a && a <= 100)
        printf("分数：%d，成绩等级为A", a);
    if (80 <= a && a < 89)
        printf("分数：%d，成绩等级为B", a);
    if (70 <= a && a < 79)
        printf("分数：%d，成绩等级为C", a);
    if (60 <= a && a < 69)
        printf("分数：%d，成绩等级为D", a);
    if (0 < a && a < 60)
        printf("分数：%d，成绩等级为E", a);
    return 0;
}