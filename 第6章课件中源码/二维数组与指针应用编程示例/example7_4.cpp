//��ά��������������ʹ��ָ��һά�����ָ�����(��ָ�����)
#include <stdio.h>
int main() {
    int a[2][3];
    int (*p)[3]; 
    int j;
    for( p=a; p<a+2; p++ )
    	for(j=0;j<3;j++)
    		scanf("%d",*p+j );
    		
    for( p=a; p<a+2; p++)
    	for(j=0;j<3;j++)
    		printf("%d ",*(*p+j) );
    		
    return 0;
}


