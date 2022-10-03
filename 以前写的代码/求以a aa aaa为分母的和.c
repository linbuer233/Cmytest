#include <stdio.h>
double fun(int n,int a);// 函数声明 

int main()
{
	
	int a,n;
	double s;
	
	printf("Enter n and a: ");
	scanf("%d%d",&n,&a);
	
	s = fun(n,a);// 函数调用 
	printf("n=%d, a=%d, s=%lf\n",n,a,s);
	
	return 0;
	
}

double fun(int n,int a)
{
	double m = 0,sign = 1,item = 0,i;
	for(i = 1;i<=n;i++)
	{
		item = item*10+a;
		m+=sign*(i/item);
		sign = -sign;
	}
	return m;
}