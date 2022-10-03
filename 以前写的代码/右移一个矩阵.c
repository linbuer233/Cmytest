#include <stdio.h>
#define n 4
int main()
{
	int a[n][n] = {
		{
			1,2,3,4
		},
		{
			5,6,7,8
		},
		{
			9,10,11,12
		},
		{
			13,14,15,16
		}
	};
	
	int i,j,m;
	for(i = 0;i<n;i++){
		m = a[i][n-1];
		for(j = n-1;j>0;j--)
			a[i][j] = a[i][j-1];
		a[i][0] = m;
	}
	
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<n;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	return 0;
}