#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	printf("����n��ֵ:%d\n",n);
	printf("����n�ĵ�ַ:%#p\n",&n);
	
	return 0;
}
// ��ʽ��%p���������ַ,��ַ��ʮ�����Ƶ� 
// %#p�е�#��ʾ�������ʮ�����Ƶ�ַǰ����ǰ����0x 
