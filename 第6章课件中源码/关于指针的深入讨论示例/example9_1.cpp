// 指针数组的赋值
#include <stdio.h>
int main() {
	char *ptr[2];
	int i;
	char course1[]="English";
	char course2[]="Math";
	ptr[0]=course1;
	ptr[1]=course2;
	for(i=0;i<2;i++)
		puts( ptr[i] );
	return 0;
}
