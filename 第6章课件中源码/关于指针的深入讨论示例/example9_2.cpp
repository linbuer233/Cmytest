#include <stdio.h>
int main() {
	int i; 	
	char *ptr[2];
	ptr[0]="English";
	ptr[1]="Math";
	for(i=0;i<2;i++)
		puts( ptr[i] );
	return 0;
}
 
