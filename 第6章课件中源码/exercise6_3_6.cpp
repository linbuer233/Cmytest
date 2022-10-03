// œ∞Ã‚6£∫3(6)
#include <stdio.h>
void inv(int *, int);
int main() {
	int i,a[10]={3,7,9,11,0,6,7,5,4,2};
	inv(a,10);
	for(i=0;i<10;i++)
		printf("%d, ",a[i]);
	printf("\n");
	return 0;
}

void inv( int *x ,int n) {
	int t,*p,*i,*j,m=(n-1)/2;
	i = x;
	j = x+n-1;
	p = x+m;
	for(; i<=p; i++,j--) {
		t = *i;
		*i = *j;
		*j = t;
	}
}

