#include <stdio.h>
void input( int (*p)[4], int n);
void output( int (*p)[4], int n);
int main()
{
	int a[3][4];
	input( a, 3 );
	output( a, 3 );
	return 0;
}

