#include <stdio.h>
int main() {
    int a=3,b=4;
    int *p1,*p2,*p;
    p1 = &a;  p2 = &b;
    p = p1; 
    p1 = p2; 
    p2 = p;
    printf("%d,%d\n",*p1,*p2);
    return 0;
}

