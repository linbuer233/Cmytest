// ��6.5 ����ָ��ĺ���ʾ��
// �����������д�����ַ�ĺ���
#include <stdio.h> 
int *pmax(int *, int *);
int main() {
     int a,b,*pm;
     scanf("%d%d",&a,&b);
     pm = pmax(&a,&b);
     printf("%d",*pm);
     return 0;
}

// ���������������������д����ĵ�ַ 
int *pmax(int *px, int *py) {
    if(*px > *py)
		return px;
    else
		return py;
}
 
