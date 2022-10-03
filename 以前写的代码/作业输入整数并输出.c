#include <stdio.h>
int main()
{
	int a,b,c,x,max,min;
	printf("请输入三个整数\n");
	scanf("%d%d%d",&a,&b,&c);
	
	max=a;
	min=a;
	if (max<b)
	max=b;
	if (max<c)
	max=c;
	if (min>b)
	min=b;
	if (min>c)
	min=c;
	
	printf("请输入一个数字1或2\n");
	printf("你的选择是:");
	scanf("%d",&x);
	if (x==1)
	{
	printf("最大值是%d\n",max);
	if (x==2)
	printf("最小值是%d\n",min);
	}
    else printf("没有这个选项");
	
	return 0;
}