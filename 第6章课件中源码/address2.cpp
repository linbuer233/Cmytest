#include <stdio.h>
int main() {
	int a[5]={3,9,5,1,0};
	int i;
	
	printf("����Ԫ�صĵ�ַ\t����Ԫ�ص�ֵ\n");
	for(i=0;i<5;i++)
		printf("%#p\t%d\n",&a[i],a[i]);
	
	printf("������׵�ַ: %#p\n", a);

	return 0;
}

