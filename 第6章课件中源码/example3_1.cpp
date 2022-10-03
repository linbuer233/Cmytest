// 形参是指针变量，实参是变量的地址 
#include <stdio.h>
void swap(int *, int *);
int main() { 
	int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

void swap(int *p1,int *p2) {   
    int t;
    printf("*p1=%d,*p2=%d\n",*p1,*p2);
    t = *p1;  *p1 = *p2; *p2 = t;
    printf("*p1=%d,*p2=%d\n",*p1,*p2);
}

