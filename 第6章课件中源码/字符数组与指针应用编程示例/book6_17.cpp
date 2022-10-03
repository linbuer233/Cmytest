// 例6.17 编写函数，实现用指向字符串的指针变量处理两个字符串的复制、合并操作 
#include <stdio.h>
void strcopy(char *, const char *);  // 函数声明 
void strcat(char *, char *t); // 函数声明 

int main() {
	char str1[80];
	char str2[] = "May~";
	
	strcopy(str1, "Hi, ");
	puts(str1);
	
	strcat(str1, str2);
	puts(str1);
	
	return 0;
}

// 函数定义 
// 功能描述：把source指向的字符串拷贝到target指向的字符地址单元 
void strcopy(char *target, const char *source) {
	while((*target= *source) != '\0') {
		source++;
		target++;
	}
}

// 函数定义 
// 功能描述：把t指向的字符串连接到s指向的字符串末尾 
void strcat(char *s, char *t) {
	while(*s)
		s++;
	
	while(*t)
		*s++ = *t++;
	
	*s = '\0';
} 
