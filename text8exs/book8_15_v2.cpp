// P280��8.5
// �Խ̲��ϵĳ�������΢�����������ѧ����Ϣ������д��һ������ģ��
// ��ӡ������ѧ����Ϣ������ѧ����Ϣ�̷ֱ���� 
 
#include<stdio.h>
#include<string.h> 
#define N 30		// ���г����������ʱ�����԰���������СһЩ������� 

typedef struct student
{
	int id; 			/*ѧ��ѧ�� */ 
	char name[20]; 		/*ѧ������ */ 
	char subject[20]; 	/*���Կ�Ŀ */ 
	float perf; 		/*ƽʱ�ɼ� */ 
	float mid; 			/* ���гɼ� */ 
	float final; 		/* ��ĩ�ɼ� */ 
	float total; 		/* �����ɼ� */ 
	char level[10]; 	/*�ɼ��ȼ� */ 
}STU;

void input(STU[],int );			/*����ѧ����Ϣ */ 
void calc(STU[],int);			/*���������͵ȼ� */ 
int fail(STU[],STU [],int);		/*������ѧ��ͳ�� */
void sort(STU[],int);			/*���� */ 
void print(STU[], int);		/*���ѧ����Ϣ*/ 

int main() {
	STU st[N],fst[N];   // ����st��¼ѧ����Ϣ��fst��¼������ѧ����Ϣ 
	int k;  // ���ڼ�¼������ѧ������ 
	
	printf("¼��ѧ���ɼ���Ϣ:\n");
	input(st,N);
	
	printf("\n�ɼ�����...\n");
	calc(st,N);
	
	k = fail(st,fst,N);
	sort(st, N);
	printf("\nѧ���ɼ��������:\n");
	print(st, N);
	
	printf("\n������ѧ����Ϣ:\n");
	print(fst, k);
	
	return 0;
} 

void input(STU s[],int n) {
      int i;
      for(i=0;i<n;i++)
      scanf("%d %s %s %f %f %f",&s[i].id,s[i].name,s[i].subject,&s[i].perf,&s[i].mid,&s[i].final);
}

void calc(STU s[],int n) {
	int i;
	for(i=0;i<n;i++) {	
		s[i].total=s[i].perf*0.2+s[i].mid*0.2+s[i].final*0.6;
		
		if(s[i].total>=90)
		  strcpy(s[i].level,"��");
		else if(s[i].total>=80 && s[i].total<90)
		  strcpy(s[i].level,"��");
		else if(s[i].total>=70 && s[i].total<80)
		  strcpy(s[i].level,"��"); 
		else if(s[i].total>=60 && s[i].total<70)
		  strcpy(s[i].level,"����");
		else
		  strcpy(s[i].level,"������");		 
	}
}

int fail(STU s[],STU t[],int n) {
      int i,k=0;
      
      for(i=0;i<n;i++)
      	if(s[i].total<60)
	    	t[k++]=s[i];
	    	
    return k;
}


void sort(STU s[],int n) {
	int i,j;
	STU temp;
	
	for(i=0;i<n-1;i++)
	  for(j=0;j<n-1-i;j++)
	    if(s[j].total<s[j+1].total) {
	    	temp=s[j];
	    	s[j]=s[j+1];
	    	s[j+1]=temp;
	    }
}

void print(STU s[], int n) {
   int i;
   
   printf("-----------------\n");
   printf("ѧ�� ���� ���Կ�Ŀ ƽʱ�ɼ� ���гɼ�  ��ĩ�ɼ� �����ɼ�  �ɼ��ȼ�\n");
   for(i=0;i<n;i++)
      printf("%5d %10s%20s %5.1f %5.1f %5.1f %5.1f %10s\n",s[i].id,s[i].name,s[i].subject,s[i].perf,s[i].mid,s[i].final,s[i].total,s[i].level);
}












 
