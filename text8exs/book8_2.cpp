#include<stdio.h>
#define N 30 
void inputdata();		/*输入学生信息 */
void sortdata(); 		/*对学生总分排序 */
void outputdata();		/*输出学生信息*/
void outputaverage();	/*输出课程平均分*/

/*定义结构体*/
struct student{  
	char name[20]; 	/* 学生姓名 */ 
	long num; 		/* 学号 */ 
	float score[3]; /* 三科考试成绩 */
	float sum; 		/* 总成绩 */
}; 

struct student stu[N];	/* 定义了一个班级同学的信息 */

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
				temp = stu[j];	/*使用结构体变量的赋值操作*/
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



