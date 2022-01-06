#include <stdio.h>
#define N 20
int main()
{
	long fib[N];
	int n;
	fib[0]=1;
	fib[1]=1;
	
	for(n=2;n<N;n++)
	fib[n]=fib[n-1]+fib[n-2];
	
	//for(n=N-1;n>=0;--n)
	for(n=0;n<N;n++)
	{
		printf("%ld",fib[n]);
		putchar((N-1-n)%5==4 ?'\n':'\t');
	}

    return 0;
}