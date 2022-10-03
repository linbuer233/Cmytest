#include <stdio.h>
void fun(int a,int b,char c);
int main()
{
    int a,b;
    char c;
    printf("请输入三个参数,一个字符，两个整数\n");
    scanf("%c%d%d",&c,&a,&b);
    fun(a,b,c);
    return 0;
}

void fun(int a,int b,char c)
{
    int i,j;
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=a;j++)
        printf("%5c",c);
        printf("\n");
    }
}