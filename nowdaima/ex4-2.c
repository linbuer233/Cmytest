#include <stdio.h>
int main()
{
    int a ;

    printf("������ɼ�:\n");
    scanf("%d", &a);
    if (a < 0 || a > 100)
        printf("�������");
    if (90 <= a && a <= 100)
        printf("������%d���ɼ��ȼ�ΪA", a);
    if (80 <= a && a < 89)
        printf("������%d���ɼ��ȼ�ΪB", a);
    if (70 <= a && a < 79)
        printf("������%d���ɼ��ȼ�ΪC", a);
    if (60 <= a && a < 69)
        printf("������%d���ɼ��ȼ�ΪD", a);
    if (0 < a && a < 60)
        printf("������%d���ɼ��ȼ�ΪE", a);
    return 0;
}