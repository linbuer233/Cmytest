// ����������Ϊ����ʹ��ѡ��������С�������� 
#include <stdio.h>
const int N=5;
void selectSort(int x[], int n);
int main() {
	
	int a[N];
	int i;
	
	printf("����%d������: \n", N);
	for(i=0; i<N; i++)
		scanf("%d", &a[i]);
	
	selectSort(a, N);
	
	printf("�����:\n");
	for(i=0; i<N; i++)
		printf("%d ", a[i]);
	
	
	return 0;
}

void selectSort(int x[], int n) {
	int i,j,k,t;
	
	for(i=0; i<n-1; i++) {
		k = i;
		for(j=i+1; j<n; j++) 
			if (x[j] < x[k])
				k = j;
	
		if(k != i) {
			t = x[i];
			x[i] = x[k];
			x[k] = t;
		}
	}
	
}
