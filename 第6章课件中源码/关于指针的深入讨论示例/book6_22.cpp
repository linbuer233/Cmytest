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

// ͨ�ú����������������������㣬���������ͨ��ָ������������ 

int process(int x,int y,int (*f)(int,int)) { 
	return (*f)(x,y); 
}

