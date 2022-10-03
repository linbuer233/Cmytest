#include <stdio.h>
#include <math.h>
int isPrime(int n);
double fun(int n);// 函数声明 

int main(){
	
	int n;
	
	double s;
	
	
	scanf("%d",&n);
	
	s = fun(n);// 函数调用
	
	
	printf("n=%d, s=%lf\n",n,s);
	
	
	
	return 0;
	
}

double fun(int n)
{
	int i;
	double s = 0,j = 1,sign = -1;
	for(i = 1;i<=n;i++)
	{
		if(isPrime(i)==0)
			continue;
		if(isPrime(i)==1)
		{
			s = s+sign*(j/i);
			j++;
			sign = -sign;
		}
	}
	return s;
}

int isPrime(int n)
{
	int m;
	if(n<2)
		return 0;
	else
		for(m = 2;m<=sqrt(n);++m)
	{
		if(n%m==0)
			return 0;
	}
	
	return 1;
	
	
	
}