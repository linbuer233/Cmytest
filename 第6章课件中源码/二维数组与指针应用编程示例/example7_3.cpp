//��ά��������������ʹ��ָ������Ԫ�ص�ָ�����(��ָ�����)
#include <stdio.h>
int main() {
	int a[2][3],*p ;
	for(p=a[0]; p<a[0]+6; p++)
		scanf("%d", p);
	
	for(p=a[0]; p<a[0]+6; p++)
		printf("%d ", *p);
		
	return 0;
}
