#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	for(i = 0;i<n;i++)
		for(j = 0;j<n;j++)
	{
		if(i<j)
			a[i][j] = i+1;
		else
			a[i][j] = j+1;
	}
	//打印二维数组
	for(i = 0;i<n;i++){
		for(j = 0;j<n;j++){
			printf("%3d",a[i][j]);
			
		}
		printf("\n");
		
	}
	
	return 0;
}