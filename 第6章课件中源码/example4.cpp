// ʹ��ָ�������ӷ�������Ԫ�� 
#include <stdio.h>
int main() {
	int a[5]={3,9,5,1,0};
	int *p;
	printf("a[1] = %d\n",a[1]);  // ʹ��������[�±�]��ʽֱ�ӷ��� 
	p = &a[1];
	printf("*p = %d\n",*p);   // ʹ��ָ�������ӷ��� 
	return 0;
}
