#include <stdio.h>
#define N 5
int main() {
    int a[N],i;
    int *p=a;
    for(i=0;i<N;i++)
		scanf("%d",p+i);
    for(i=0;i<N;i++)
		printf("%5d",*(p+i));
    return 0;
}

