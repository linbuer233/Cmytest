// 共用体简单示例 
#include <stdio.h>
union  data {  
	int i;
	char ch[2];
};
int main() {  
    union data x;
    x.i = 24897;
    printf("x.i = %d\n",x.i);
    printf("x.ch[0] = %c,x.ch[1] = %c\n",x.ch[0],x.ch[1]);
   
   	return 0;
}
