// book6_22_v0.cpp��book6_22_v1.cpp��Ϊ�˰������õ����book6_22.cpp��д�������������ӳ��� 
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

// ��������֮�нϴ����
int max(int x,int y) {  
	return x>y?x:y; 
} 

// ��������֮�н�С���� 
int min(int x,int y) {  
	return x<y?x:y; 
} 

// ���������ĺ� 
int add(int x,int y) { 
	return x+y; 
} 
