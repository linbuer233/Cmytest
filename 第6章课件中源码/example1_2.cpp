#include <stdio.h>
int main() {
	int n;
	int *pn;
	pn = &n;
	scanf("%d",pn);
	printf("%d",*pn);
	return 0;
}

