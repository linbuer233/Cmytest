//N*N矩阵，顺时针旋转九十度输出
#include <stdio.h>
#define N 3
int main()
{
	int i,j,a[N][N],b[N][N];
	//输入二维矩阵
	printf("输入%dx%d矩阵：\n",N,N);
	for(i = 0;i<N;i++)
		for(j = 0;j<N;j++)
		scanf("%d",&a[i][j]);
	
	//计算顺时针旋转九十度后矩阵，存入b
	for(i = 0;i<N;i++)
		for(j = 0;j<N;j++)
		b[i][j] = a[N-1-j][i];
	
	//输出矩阵b
	printf("顺时针旋转九十度后：\n");
	for(i = 0;i<N;i++)
	{
		for(j = 0;j<N;j++)
			printf("%4d",b[i][j]);
		
		printf("\n");
		
	}
	return 0;
}
