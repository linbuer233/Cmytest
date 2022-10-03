#include <stdio.h>
#include <math.h>
void fun(float a, float b, float c);
int main()
{
	float a, b, c;
	int i;
	printf("请依次输入a，b，c三个数：");
	scanf("%f%f%f", &a, &b, &c);
	fun(a, b, c);
	return 0;
}

void fun(float a,float b,float c)
{
	float m;
	if(a==0)
	printf("x=%f",-c/b);
	m=b*b-4*a*c;
	if(m==0)
	{
		printf("x=%f",-b/(2*a));
	}
	if(m>0)
	{
	 printf("x1=%f\n",(-b+sqrt(b*b-4*a*c))/(2*a));
	 printf("x2=%f\n",(-b-sqrt(b*b-4*a*c))/(2*a));
	}
	else
	printf("无实根");
}
