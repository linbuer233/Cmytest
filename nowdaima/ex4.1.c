#include <stdio.h>
int main()
{
    int a, b, c, m = -1;
    printf("�����������ε�������\n");
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
        printf("�ⲻ��һ��������\n");
    if (m == 0)
        printf("���Ǹ����ȱ�������\n");
    if (m == 1)
        printf("����һ������������\n");
    if (m == 2)
        printf("����һ���ȱ�������\n");

    return 0;
}