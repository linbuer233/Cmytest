#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m,t = 0;
	scanf("%d",&n);
	
	if(n<0){
		
		printf("输入错误\n");
		exit(0);
	}
	
	while(n!=0){
		
		m = n%10;
		
		t = t*10+m;
		
		n = n/10;
	}
	
	printf("反序数是:%d\n",t);
	return 0;
}