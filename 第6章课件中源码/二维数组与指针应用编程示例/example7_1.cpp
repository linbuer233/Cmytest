// ��ά��������������ֱ�ӷ��ʷ�ʽ & ��ӷ��ʷ�ʽ
#include <stdio.h>
int main() {
	int a[2][3],i,j;
	
	printf("����:\n");
	for(i=0; i<2; i++)
		for(j=0; j<3; j++)
			scanf("%d",&a[i][j]);   // &a[i][j] ����д��a[i]+j 
	
	printf("���:\n");
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++)
			printf("%d ", a[i][j]);  // a[i][j] ����д��*(a[i]+j) 
		printf("\n");
	}
				
	return 0;
}
