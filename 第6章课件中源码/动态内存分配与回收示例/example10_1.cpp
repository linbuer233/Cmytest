// ��̬�ڴ��������ռ�ʾ��
#include <stdio.h>
#include <stdlib.h>
int main() {
	char *likes;
	likes = (char *)malloc(20) ;
	puts("input one of your likes: ");
	gets(likes);
	puts("your likes include: ");
	puts(likes);
	free(likes);
	return 0;
}
 

