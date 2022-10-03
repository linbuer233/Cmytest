//二维数组的输入输出：使用函数(形参：指针变量，实参：数组元素地址)
#include <stdio.h>
void input( int *q, int n);
void output(int *q, int n);
int main() {
	int a[2][3];
	input( a[0], 6 );
	output( a[0], 6 );
	return 0;
}

void input( int *q, int n ) {
	int i;
	for( i=0; i<n; i++, q++ )
		scanf("%d", q );
}

void output( int *q, int n ) {
	int i;
	for( i=0; i<n ;i++, q++ )
		printf("%d ", *q );
}



