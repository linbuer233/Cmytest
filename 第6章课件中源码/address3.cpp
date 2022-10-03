#include <stdio.h>
int main() {
	int a[4] = {3,2,5,9};
	int b[2][2] = {7,6,1,0};
	
	int i,j;
	
	for(i=0; i<4; i++)
		printf("&a[%d]: %#p\n",i, &a[i]);
	
	printf("a: %#p\n", a);
	printf("a+1: %#p\n",a+1);
	printf("a+2: %#p\n",a+2);
	
	
	for(i=0; i<2; i++)
		for(j=0; j<2; j++)
			printf("&b[%d][%d]: %#p\n", i, j, &b[i][j]);	
	
	printf("b: %#p\n", b);
	printf("b+1: %#p\n", b+1);
	
	return 0;
} 
