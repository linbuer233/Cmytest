#include <stdio.h>

int main()

{
	int a[3][3];
	
	int m,n,i,j,z,k = 0,t;
	
	scanf("%d%d",&m,&n);
	
	for(i = 0;i<n;i++)
		
	{
		for(j = 0;j<n;j++)
			
		{
			
			scanf("%d",&a[i][j]);
			
		}
		
	}
	
	printf("========\n");
	
	
	for(i = 0;i<n;i++)
		
	{
		t = a[i][n-1];
		
		for(z = n-1;z>0;z--)
			
		{
			
			a[i][z] = a[i][z-1];
			
		}
		
		a[i][0] = t;
		
		for(z = 0;z<n;z++)
			
		{
			
			printf("%d ",a[i][z]);
			
		}
		
		printf("\n");
		
	}
	
	return 0;
	
}