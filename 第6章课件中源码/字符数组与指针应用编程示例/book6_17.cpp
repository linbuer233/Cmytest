// ��6.17 ��д������ʵ����ָ���ַ�����ָ��������������ַ����ĸ��ơ��ϲ����� 
#include <stdio.h>
void strcopy(char *, const char *);  // �������� 
void strcat(char *, char *t); // �������� 

int main() {
	char str1[80];
	char str2[] = "May~";
	
	strcopy(str1, "Hi, ");
	puts(str1);
	
	strcat(str1, str2);
	puts(str1);
	
	return 0;
}

// �������� 
// ������������sourceָ����ַ���������targetָ����ַ���ַ��Ԫ 
void strcopy(char *target, const char *source) {
	while((*target= *source) != '\0') {
		source++;
		target++;
	}
}

// �������� 
// ������������tָ����ַ������ӵ�sָ����ַ���ĩβ 
void strcat(char *s, char *t) {
	while(*s)
		s++;
	
	while(*t)
		*s++ = *t++;
	
	*s = '\0';
} 
