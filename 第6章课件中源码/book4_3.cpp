#include <stdio.h>
void swap(int x,int y);
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    swap(a,b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
void swap(int x,int y) {
    int t;
    printf("x=%d,y=%d\n",x,y);
    t=x; x=y; y=t;
    printf("x=%d,y=%d\n",x,y);
}

