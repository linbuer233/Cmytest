// 使用指针变量间接访问数组元素 
#include <stdio.h>
int main() {
	int a[5]={3,9,5,1,0};
	int *p;
	printf("a[1] = %d\n",a[1]);  // 使用数组名[下标]方式直接访问 
	p = &a[1];
	printf("*p = %d\n",*p);   // 使用指针变量间接访问 
	return 0;
}
