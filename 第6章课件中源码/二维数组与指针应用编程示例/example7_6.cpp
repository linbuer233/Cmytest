//二维数组的输入输出：使用函数(形参：指针变量，实参：二维数组名)

#include <stdio.h>
void input( int (*p)[3], int n);
void output( int (*p)[3], int n);
int main() {
	int a[2][3];
	input( a, 2 );
	output( a, 2 );
	return 0;
}

// 功能描述： 输入一组整型数据到连续的地址空间
// 形参描述： p是指向一维数组的指针，一维数组元素个数为3个
//            n用来控制行数 
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
