//计算分数数列 s=1-1/22+1/333-1/4444+1/55555+...+(-1)∧(n+1)*1/n...n//
#include <stdio.h>
#include <math.h>
double fun(int n);//函数声明
int main()
{
	int n;
	printf("输入正整数n: ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("数据输入错误\n");
		return 1;
	}
	printf("数列的和: %1f\n",fun(n));
	
	return 0;
	
}
//函数定义:计算分数数列之和
double fun(int n)
{
	int i,j,sign;// sign用来表示符号位
	double sum,bottom;// bottom用来表示分母
	sign = 1;
	sum = 0;
	for(i = 1;i<=n;i++)
	{
		bottom = 0;
		for(j = 0;j<i;j++)
			bottom = bottom+i*pow(10,j);
		sum = sum+sign*1/bottom;
		sign = -sign;
	}
	return sum;
	
}