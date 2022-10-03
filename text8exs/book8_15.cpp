// P280例8.5
#include<stdio.h>
#include<string.h> 
#define N 30		// 运行程序输入测试时，可以把这个数组改小一些输入测试 

typedef struct student
{
	int id; 			/*学生学号 */ 
	char name[20]; 		/*学生姓名 */ 
	char subject[20]; 	/*考试科目 */ 
	float perf; 		/*平时成绩 */ 
	float mid; 			/* 期中成绩 */ 
	float final; 		/* 期末成绩 */ 
	float total; 		/* 总评成绩 */ 
	char level[10]; 	/*成绩等级 */ 
}STU;

void input(STU[],int );			/*输入学生信息 */ 
void calc(STU[],int);			/*计算总评和等级 */ 
int fail(STU[],STU [],int);		/*不及格学生统计 */
void sort(STU[],int);			/*排序 */ 
void show(STU[],STU[],int,int);	/*输出学生信息*/ 

int main() {
	STU st[N],fst[N];   // 数组st记录学生信息，fst记录不及格学生信息 
	int k;  // 用于记录不及格学生个数 
	
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
		  strcpy(s[i].level,"优");
		else if(s[i].total>=80 && s[i].total<90)
		  strcpy(s[i].level,"良");
		else if(s[i].total>=70 && s[i].total<80)
		  strcpy(s[i].level,"中"); 
		else if(s[i].total>=60 && s[i].total<70)
		  strcpy(s[i].level,"及格");
		else
		  strcpy(s[i].level,"不及格");		 
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
   printf("\n学生成绩排名情况：\n");
   printf("-----------------\n");
   printf("学号 姓名 考试科目 平时成绩 期中成绩  期末成绩 总评成绩  成绩等级\n");
   for(i=0;i<n;i++)
      printf("%5d %10s%20s %5.1f %5.1f %5.1f %5.1f %10s\n",s[i].id,s[i].name,s[i].subject,s[i].perf,s[i].mid,s[i].final,s[i].total,s[i].level);
   
   printf("\n不及格学生情况：\n");
   printf("-----------------\n");
   printf("学号 姓名 考试科目 平时成绩 期中成绩 期末成绩 总评成绩  成绩等级\n");
   for(i=0;i<m;i++)
      printf("%5d %10s%20s%5.1f %5.1f %5.1f %5.1f %10s\n",t[i].id,t[i].name,s[i].subject,t[i].perf,t[i].mid,t[i].final,t[i].total,t[i].level);	   
}












 
