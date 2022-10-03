//二维数组的输入输出：使用指向数组元素的指针变量(列指针变量)
#include <stdio.h>
int main() {
	int a[2][3],*p ;
	for(p=a[0]; p<a[0]+6; p++)
		scanf("%d", p);
	
	for(p=a[0]; p<a[0]+6; p++)
		printf("%d ", *p);
		
	return 0;
}
