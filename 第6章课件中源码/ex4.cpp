#include <stdio.h>
int main() {  
    int i,*p,a[3];
    p=a;
    for(i=0;i<3;i++)
       scanf("%d",p++);
    printf("\n");
    p=a;  // ע�⣺ָ��ĸ�λ 
    for(i=0;i<3;i++,p++)
       printf("%d",*p);
    return 0;
}

