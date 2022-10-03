#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	printf("变量n的值:%d\n",n);
	printf("变量n的地址:%#p\n",&n);
	
	return 0;
}
// 格式符%p用于输出地址,地址是十六进制的 
// %#p中的#表示，输出的十六进制地址前加上前导符0x 
