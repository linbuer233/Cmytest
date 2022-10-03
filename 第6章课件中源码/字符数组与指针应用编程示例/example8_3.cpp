// 使用字符指针处理字符串
// 从键盘上输入姓名，然后在屏幕上输出
 
#include <stdio.h>
int main( ) {   
    char name[20];
    char *p;
	p = name;
	gets(p);
	puts(p);
	return 0;
}

