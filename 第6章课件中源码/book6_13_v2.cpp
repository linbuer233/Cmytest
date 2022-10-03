#include <stdio.h>
const int N=5;
void input(int [], int);        // 函数声明, 函数声明中可以省略变量名，数组名 
void output(int [], int);
void sort(int *, int);
int main() {
	int a[N];
	input(a, N);              // 函数调用
	printf("\n排序前的顺序:\n");
	output(a, N);           // 函数调用
	sort(a, N);              // 函数调用
	printf("\n排序后的顺序:\n");
	output(a, N);          // 函数调用
	return 0;
}

// 功能描述：输入n个int型数据到数组x
// 形参描述：形参x是数组名（本质上是指针变量）
//           形参n是要输入的元素的个数 
void input( int x[], int n) {
	int i;
	for(i=0;i<n;i++)
		scanf("%d", x+i );
}


// 功能描述：输出数组x中的n个元素
// 形参描述：形参x是数组名（本质上是指针变量）
//           形参n是要输入的元素的个数 
void output( int x[], int n ) {
	int i;
	for(i=0; i<n; i++)
		printf("%5d", *(x+i));
}

//功能描述：用冒泡法对x所指向的n个连续int型数据由小到大排序
// 形参描述：x是指针，指向待排序数据的第一个，及存放首地址
//           n是待排序元素个数 
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

