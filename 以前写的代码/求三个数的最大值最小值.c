#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,s,d,n,m,x;
	printf("������������\n");
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
	
	printf("������1��2");
	scanf("%d/n",&x);
	if(x==1)
		printf("��Сֵ��%d\n",n);
	if(x==2)
		printf("���ֵ��%d\n",m);
	 
	return 0;
}