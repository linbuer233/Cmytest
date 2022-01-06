#include <stdio.h>
const int N = 10;
int findMax(int a[],int N);
int findMin(int a[],int N);
int main()
{
	int a[N],i;
	int max,min;
	
	for(i = 0;i<N;i++)
		scanf("%d",&a[i]);
	max = findMax(a,N);
	min = findMin(a,N);
	printf("max=%d,min=%d\n",max,min);
	
	return 0;
}

int findMax(int a[],int N)
{
	int max = a[0],i;
	for(i = 0;i<N;i++){
		if(max>a[i])
			continue;
		else
			max = a[i];
	}
	return max;
}

int findMin(int a[],int N)
{
	int min = a[0],i;
	for(i = 0;i<N;i++){
		if(min<a[i])
			continue;
		else
			min = a[i];
	}
	return min;
}
