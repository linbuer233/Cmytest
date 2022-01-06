#include <stdio.h>
#include <math.h>
int isPrime(int n);

int main()
{
	int a,b,c;
	
	for(a = 4;a<=50;a = a+2)
	{
		for(b = 1;b<a/2;b++)
		{
			if(isPrime(b)==0)
				continue;
			if(isPrime(b)==1)
			{
				c =a-b;
				if(isPrime(c)==1 && c<a && c>0)
					printf("%3d+%2d=%-3d\n",b,c,a);
			}
		}
	}
	
	return 0;
}

int isPrime(int n)
{
	int m;
	if(n<2)
		return 0;
	for(m = 2;m<=sqrt(n);++m)
	{
		if(n%m==0)
			return 0;
	}
	
	return 1;
	
	
}