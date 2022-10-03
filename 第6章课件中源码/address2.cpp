#include <stdio.h>
int main() {
	int a[5]={3,9,5,1,0};
	int i;
	
	printf("数组元素的地址\t数组元素的值\n");
	for(i=0;i<5;i++)
		printf("%#p\t%d\n",&a[i],a[i]);
	
	printf("数组的首地址: %#p\n", a);

	return 0;
}

