// 例6.5 返回指针的函数示例
// 返回两个数中大数地址的函数
#include <stdio.h> 
int *pmax(int *, int *);
int main() {
     int a,b,*pm;
     scanf("%d%d",&a,&b);
     pm = pmax(&a,&b);
     printf("%d",*pm);
     return 0;
}

// 功能描述：返回两个数中大数的地址 
int *pmax(int *px, int *py) {
    if(*px > *py)
		return px;
    else
		return py;
}
 
