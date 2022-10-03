// 定义结构体类型struct student 
#include <stdio.h>
#define N 2
#define M 3
struct student {
	char no[13];
	char name[8];
	float grade[M];
	float ave;
};

// 函数声明 
float average(float x[], int n); 
void input(struct student x[],int n); 
void output(struct student x[], int n); 
void print(struct student x); 
struct student findmax(struct student x[],int n); 


// 主函数 

int main() {
	struct student s[N],top;
	
	input(s,N); 
	output(s,N);
	top = findmax(s,N);
	printf("the No.1 student info :\n");
	print(top);
	
	return 0;
}


// 函数定义: 计算数组x的均值，共n个元素 
float average(float x[] , int n) {
	int i;
	float sum=0;
	for(i=0;i<n;i++)
		sum = sum + x[i];
	return (sum/n);		
}


// 函数定义: 录入n个学生记录信息 
void input(struct student x[] ,int n) {
	int i,j;
	for(i=0;i<n;i++) 	{
		scanf("%s%s",x[i].no,x[i].name);
		for(j=0;j<M;j++)
			scanf("%f",&x[i].grade[j]);
			
		x[i].ave= average(x[i].grade, M) ;
	}
}

// 函数定义：打印一个学生记录信息 
void print(struct student x) {
	printf("%s %s ",x.no,x.name);
	for(int j=0;j<M;j++)
		printf("%4.0f ",x.grade[j]);
	printf("%6.2f",x.ave);
	printf("\n");
} 

// 函数定义: 打印结构体数组x中n个学生记录信息 
void output(struct student x[], int n) {
	int i,j;
	for(i=0;i<n;i++)
		print(x[i]);
}

// 函数定义：查找均分最高分学生，并返回学生信息 
struct student findmax(struct student x[] ,int n) {
	struct student smax;
	int i;
	
	smax=x[0];
	for(i=1;i<n;i++)
		if(x[i].ave > smax.ave)
			smax = x[i];
	
	return smax;
}




