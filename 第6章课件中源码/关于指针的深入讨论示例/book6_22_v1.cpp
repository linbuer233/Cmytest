// book6_22_v0.cpp和book6_22_v1.cpp是为了帮助更好地理解book6_22.cpp而写的两个引导例子程序 
#include <stdio.h>
int max(int ,int);
int min(int ,int);
int add(int ,int);

int main() {
	int a,b;
	int (*p)(int, int); 
	
	printf("Enter two num to a and b:");
   	scanf("%d%d",&a,&b);
   	
   	p = max;
	printf("max=%d\n",(*p)(a,b));  
	
	p = min;
	printf("min=%d\n",(*p)(a,b));  
	
	p = add;
	printf("add=%d\n",(*p)(a,b));  
	
	
	return 0;
} 

// 返回两数之中较大的数
int max(int x,int y) {  
	return x>y?x:y; 
} 

// 返回两数之中较小的数 
int min(int x,int y) {  
	return x<y?x:y; 
} 

// 返回两数的和 
int add(int x,int y) { 
	return x+y; 
} 
