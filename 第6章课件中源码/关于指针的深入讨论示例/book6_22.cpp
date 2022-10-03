#include <stdio.h>
int max(int ,int);
int min(int ,int);
int add(int ,int);
int process(int, int, int (*f)(int,int));

int main() {
	int a,b;
	
	printf("Enter two num to a and b:");
   	scanf("%d%d",&a,&b);
   	
	printf("max=%d\n",process(a,b,max));  
	printf("min=%d\n",process(a,b,min));
	printf("add=%d\n",process(a,b,add));
	
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

// 通用函数，对两个整数进行运算，具体的运算通过指向函数参数传递 

int process(int x,int y,int (*f)(int,int)) { 
	return (*f)(x,y); 
}

