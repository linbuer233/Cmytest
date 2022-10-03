// 指针数组应用示例
// 字符指针数组作为main()函数实参 
#include <stdio.h>
int main( int argc, char *argv[] ) {
	int i;
    printf("argc=%d\n",argc);
    for(i=0; i<argc; i++)
		printf("argv[%d] : %s\n",i, argv[i] );
    return 0;
}

