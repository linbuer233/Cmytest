// 枚举类型示例 
#include <stdio.h>
enum SignalColor { Red,Yellow=3,Green };

int main() {  
	enum SignalColor  s1,s2;
	
	s1 = Red;
	s2 = Green;
	printf("s1=%d,s2=%d\n",s1,s2);
	
   	return 0;
}

