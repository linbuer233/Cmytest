#include <stdio.h>
void product(int a[M][N],int b[N][M],int r[M][M]);

//函数部分
void product(int a[M][N],int b[N][M],int r[M][M])
{
	int i,k,j;
	
	for(i=0;k<M;i++)
	{
		r[i][k]=0;
		for(j=0;j<N;j++)
		r[i][k]=r[i][k]+a[i][j]*b[j][k];
		
	}
}