//��ά��������������ʹ�ú���(�βΣ�ָ�������ʵ�Σ���ά������)

#include <stdio.h>
void input( int (*p)[3], int n);
void output( int (*p)[3], int n);
int main() {
	int a[2][3];
	input( a, 2 );
	output( a, 2 );
	return 0;
}

// ���������� ����һ���������ݵ������ĵ�ַ�ռ�
// �β������� p��ָ��һά�����ָ�룬һά����Ԫ�ظ���Ϊ3��
//            n������������ 
void input( int (*p)[3] , int n) {
	int i,j;
	for(i=0;i<n;i++,p++ )
		for(j=0;j<3;j++)
			scanf("%d",*p+j);
}

void output(int (*p)[3], int n) {
	int i,j;
	for(i=0;i<n;i++,p++ ) {
		for(j=0;j<3;j++)
			printf("%d ", *(*p+j));
		
		printf("\n");
	}	
}
