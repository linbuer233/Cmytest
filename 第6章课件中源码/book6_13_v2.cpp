#include <stdio.h>
const int N=5;
void input(int [], int);        // ��������, ���������п���ʡ�Ա������������� 
void output(int [], int);
void sort(int *, int);
int main() {
	int a[N];
	input(a, N);              // ��������
	printf("\n����ǰ��˳��:\n");
	output(a, N);           // ��������
	sort(a, N);              // ��������
	printf("\n������˳��:\n");
	output(a, N);          // ��������
	return 0;
}

// ��������������n��int�����ݵ�����x
// �β��������β�x������������������ָ�������
//           �β�n��Ҫ�����Ԫ�صĸ��� 
void input( int x[], int n) {
	int i;
	for(i=0;i<n;i++)
		scanf("%d", x+i );
}


// �����������������x�е�n��Ԫ��
// �β��������β�x������������������ָ�������
//           �β�n��Ҫ�����Ԫ�صĸ��� 
void output( int x[], int n ) {
	int i;
	for(i=0; i<n; i++)
		printf("%5d", *(x+i));
}

//������������ð�ݷ���x��ָ���n������int��������С��������
// �β�������x��ָ�룬ָ����������ݵĵ�һ����������׵�ַ
//           n�Ǵ�����Ԫ�ظ��� 
void sort( int  *x, int n ) {
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=0; j<n-1-i; j++)
			if( *(x+j) > *(x+j+1) ) {
				t = *(x+j);
				*(x+j) = *(x+j+1);
				*(x+j+1) = t;
			}
}

