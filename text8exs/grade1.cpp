// ����ṹ������struct student 
#include <stdio.h>
#define N 2
#define M 3
struct student {
	char no[13];
	char name[8];
	float grade[M];
	float ave;
};

// �������� 
float average(float x[], int n); 
void input(struct student x[],int n); 
void output(struct student x[], int n); 
void print(struct student x); 
struct student findmax(struct student x[],int n); 


// ������ 

int main() {
	struct student s[N],top;
	
	input(s,N); 
	output(s,N);
	top = findmax(s,N);
	printf("the No.1 student info :\n");
	print(top);
	
	return 0;
}


// ��������: ��������x�ľ�ֵ����n��Ԫ�� 
float average(float x[] , int n) {
	int i;
	float sum=0;
	for(i=0;i<n;i++)
		sum = sum + x[i];
	return (sum/n);		
}


// ��������: ¼��n��ѧ����¼��Ϣ 
void input(struct student x[] ,int n) {
	int i,j;
	for(i=0;i<n;i++) 	{
		scanf("%s%s",x[i].no,x[i].name);
		for(j=0;j<M;j++)
			scanf("%f",&x[i].grade[j]);
			
		x[i].ave= average(x[i].grade, M) ;
	}
}

// �������壺��ӡһ��ѧ����¼��Ϣ 
void print(struct student x) {
	printf("%s %s ",x.no,x.name);
	for(int j=0;j<M;j++)
		printf("%4.0f ",x.grade[j]);
	printf("%6.2f",x.ave);
	printf("\n");
} 

// ��������: ��ӡ�ṹ������x��n��ѧ����¼��Ϣ 
void output(struct student x[], int n) {
	int i,j;
	for(i=0;i<n;i++)
		print(x[i]);
}

// �������壺���Ҿ�����߷�ѧ����������ѧ����Ϣ 
struct student findmax(struct student x[] ,int n) {
	struct student smax;
	int i;
	
	smax=x[0];
	for(i=1;i<n;i++)
		if(x[i].ave > smax.ave)
			smax = x[i];
	
	return smax;
}




