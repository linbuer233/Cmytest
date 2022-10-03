#include <stdio.h>
#include <math.h>
int isPrime(int n);

int main()
{
	int a;
	scanf("%d",&a);
	printf("返回值:%d",isPrime(a));
	return 0;
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