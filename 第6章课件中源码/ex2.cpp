#include <stdio.h>
int main() {
    int i=10,k;
    int *p;
    p = &k;
    *p = i;
    printf("%d",*p);
    return 0;
}
