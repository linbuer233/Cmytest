#include <stdio.h>
#define N 5
void input( int [] );        // 函数声明, 函数声明中可以省略变量名，数组名 
void output( int [] );
void sort( int * );
int main() {
	int a[N];
	input(a);              // 函数调用
	printf("\n排序前的顺序:\n");
	output(a);           // 函数调用
	sort(a);              // 函数调用
	printf("\n排序后的顺序:\n");
	output(a);          // 函数调用
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


