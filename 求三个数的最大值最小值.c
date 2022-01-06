#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,s,d,n,m,x;
	printf("请输入三个数\n");
	scanf("%d%d%d",&a,&s,&d);
	n = a;
	m = a;
	if(n<s)
		n = s;
	if(n<d)
		n = d;
	if(m>s)
		m = s;
	if(m>d)
		m = d;
	
	printf("请输入1或2");
	scanf("%d/n",&x);
	if(x==1)
		printf("最小值是%d\n",n);
	if(x==2)
		printf("最大值是%d\n",m);
	 
	return 0;
}