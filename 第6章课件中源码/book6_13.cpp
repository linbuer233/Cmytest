#include <stdio.h>
#define N 5
void input( int [] );        // ��������, ���������п���ʡ�Ա������������� 
void output( int [] );
void sort( int * );
int main() {
	int a[N];
	input(a);              // ��������
	printf("\n����ǰ��˳��:\n");
	output(a);           // ��������
	sort(a);              // ��������
	printf("\n������˳��:\n");
	output(a);          // ��������
	return 0;
}

void input( int x[] ) {
	int i;
	for(i=0;i<N;i++)
		scanf("%d", x+i );
}

void output( int x[] ) {
	int i;
	for(i=0;i<N;i++)
		printf("%5d", *(x+i) );
}

void sort( int  *x ) {
	int i,j,t;
	for(i=0;i<N-1;i++)
		for(j=0;j<N-1-i;j++)
			if( *(x+j) > *(x+j+1) ) {
				t = *(x+j);
				*(x+j) = *(x+j+1);
				*(x+j+1) = t;
			}
}


