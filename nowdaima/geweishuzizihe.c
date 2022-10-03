//输入一个整数，求各位数的和
#include <stdio.h>
int fun(int a);
int main()
{
    int a;
    printf("请输入一个无符号整数");
    scanf("%d",&a);
    printf("和为%d\n",fun(a));
    return 0;
}
//函数部分
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