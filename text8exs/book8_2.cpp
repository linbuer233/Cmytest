#include<stdio.h>
#define N 30 
void inputdata();		/*����ѧ����Ϣ */
void sortdata(); 		/*��ѧ���ܷ����� */
void outputdata();		/*���ѧ����Ϣ*/
void outputaverage();	/*����γ�ƽ����*/

/*����ṹ��*/
struct student{  
	char name[20]; 	/* ѧ������ */ 
	long num; 		/* ѧ�� */ 
	float score[3]; /* ���ƿ��Գɼ� */
	float sum; 		/* �ܳɼ� */
}; 

struct student stu[N];	/* ������һ���༶ͬѧ����Ϣ */

int main() {
	
	inputdata();
	sortdata();
	outputdata();
	outputaverage();
	
    return 0;
}


void inputdata() {
  	int i,j;
  	for(i = 0; i < N; i++) {
	 	scanf("%s %ld %f %f %f",stu[i].name,&stu[i].num,
		                        &stu[i].score[0], &stu[i].score[1],&stu[i].score[2]);
	 	
		 stu[i].sum = stu[i].score[0] + stu[i].score[1] + stu[i].score[2]; 
  }
}

void outputdata() {
   	int i;
   	printf("*******************************\n");
   	printf("Name Num Score1 Score2 Score3 Sum\n");
   	for(i = 0; i < N; i++)
	   	printf("%10s%8ld%8.2f%8.2f%8.2f%8.2f\n",stu[i].name,stu[i].num,
	                                            stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].sum);
}

void sortdata() {
   	int i,j;
   	student temp; 
   	
   	for(i = 0; i < N-1; i++)
		for(j = 0; j < N-1-i; j++)
	  		if ( stu[j].sum < stu[j+1].sum ) {
				temp = stu[j];	/*ʹ�ýṹ������ĸ�ֵ����*/
				stu[j] = stu[j+1];
				stu[j+1] = temp;
	  		}
}

void outputaverage() {
   	int i,j;
   	float aver[3]={0};
   	
   	printf("*********************************\n");
   	for(i=0; i<3; i++)
     	for(j=0;j<N;j++) 
		  	aver[i] += stu[j].score[i];
		  	
   	for(i=0;i<3;i++)
     	printf("Subject%d   Average:%8.2f\n", i+1, aver[i]/N);
}



