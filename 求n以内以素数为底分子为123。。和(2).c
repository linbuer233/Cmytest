#include <stdio.h>

double fun(int n);// 函数声明 

int main(){
	
	int n;
	double s;
	
	scanf("%d",&n);
	s = fun(n);// 函数调用
	
	printf("n=%d, s=%lf\n",n,s);
	
	return 0;
	
}
#include <math.h>
double fun(int n)
{
	int m,i,u;
	double s = 0,j = 1,sign = -1;
	for(i = 1;i<=n;i++)
	{
		if(i<2)
			u = 0;
		
		else{
			u = 1;
			for(m = 2;m<=sqrt(i);++m)
			{
				if(i%m==0){
					u = 0;
					break;
					
				}
			}
		}
		//if(u==0)
			//continue;
		if(u==1){
			s = s+sign*(j/i);
			j++;
			sign = -sign;
		}
	}
	
	
	return s;
}