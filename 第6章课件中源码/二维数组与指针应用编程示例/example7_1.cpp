// 二维数组的输入输出：直接访问方式 & 间接访问方式
#include <stdio.h>
int main() {
	int a[2][3],i,j;
	
	printf("输入:\n");
	for(i=0; i<2; i++)
		for(j=0; j<3; j++)
			scanf("%d",&a[i][j]);   // &a[i][j] 可以写成a[i]+j 
	
	printf("输出:\n");
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++)
			printf("%d ", a[i][j]);  // a[i][j] 可以写成*(a[i]+j) 
		printf("\n");
	}
				
	return 0;
}
