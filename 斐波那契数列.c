#include <stdio.h>
int fibo(int n);

int main()
{
	int i;
	
	for(i = 1;i<=5;i++)
	{
		printf("%5d",fibo(i));
	}
	
	return 0;
}

int fibo(int n)
{
	int a;
	if(n==1||n==2)
		return 1;
	else
		return a = fibo(n-1)+fibo(n-2);
}