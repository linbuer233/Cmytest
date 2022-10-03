// P280��8.5
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
void show(STU[],STU[],int,int);	/*���ѧ����Ϣ*/ 

int main() {
	STU st[N],fst[N];   // ����st��¼ѧ����Ϣ��fst��¼������ѧ����Ϣ 
	int k;  // ���ڼ�¼������ѧ������ 
	
	input(st,N);
	calc(st,N);
	k = fail(st,fst,N);
	sort(st,N);
	show(st,fst,N,k);
	
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

void show(STU s[],STU t[],int n,int m) {
   int i;
   printf("\nѧ���ɼ����������\n");
   printf("-----------------\n");
   printf("ѧ�� ���� ���Կ�Ŀ ƽʱ�ɼ� ���гɼ�  ��ĩ�ɼ� �����ɼ�  �ɼ��ȼ�\n");
   for(i=0;i<n;i++)
      printf("%5d %10s%20s %5.1f %5.1f %5.1f %5.1f %10s\n",s[i].id,s[i].name,s[i].subject,s[i].perf,s[i].mid,s[i].final,s[i].total,s[i].level);
   
   printf("\n������ѧ�������\n");
   printf("-----------------\n");
   printf("ѧ�� ���� ���Կ�Ŀ ƽʱ�ɼ� ���гɼ� ��ĩ�ɼ� �����ɼ�  �ɼ��ȼ�\n");
   for(i=0;i<m;i++)
      printf("%5d %10s%20s%5.1f %5.1f %5.1f %5.1f %10s\n",t[i].id,t[i].name,s[i].subject,t[i].perf,t[i].mid,t[i].final,t[i].total,t[i].level);	   
}












 
