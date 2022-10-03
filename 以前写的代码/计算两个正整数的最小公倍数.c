//计算两个正整数最小公倍数
#include <stdio.h>
int gcd(int x,int y);//函数声明
int lcm(int x,int y);//函数声明
int main()
{
	int x,y;
	printf("输入两个正整数: ");
	scanf("%d%d",&x,&y);
	if(x<=0||y<=0)
	{
		printf("数据输入有误!\n");
		return 1;
	}
	printf("%d和%d的最小公倍数为%d\n",x,y,lcm(x,y));
	printf("%d和%d的最大公约数为%d\n",x,y,gcd(x,y));
	return 0;
}
//函数定义:计算两个数最大公约数
int gcd(int x,int y)
{
	int r;
	do{
		r = x%y;
		x = y;
		y = r;
	}while(r!=0);
	return x;
}
//函数定义:计算两个数最小公倍数
int lcm(int x,int y)
{
	return x*y/gcd(x,y);// 调用gcd函数计算最大公约数
}