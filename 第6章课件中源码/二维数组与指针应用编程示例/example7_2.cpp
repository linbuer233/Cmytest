//二维数组的输入输出：使用指向数组元素的指针变量(列指针变量)
#include <stdio.h>
int main() {
	int a[2][3] ,i,j, *p ;
	p=a[0];
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d", p++ );
	p=a[0];
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++)
			printf("%d ", *p++);
		printf("\n");
	}
	return 0;
}

