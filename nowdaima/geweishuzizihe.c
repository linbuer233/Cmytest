//����һ�����������λ���ĺ�
#include <stdio.h>
int fun(int a);
int main()
{
    int a;
    printf("������һ���޷�������");
    scanf("%d",&a);
    printf("��Ϊ%d\n",fun(a));
    return 0;
}
//��������
int fun(int a)
{
    int m=0;
    while(a!=0)
    {
       m+=a%10;
       a=a/10;
    }
    return m;
}