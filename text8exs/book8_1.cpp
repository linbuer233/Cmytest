// p256:例8.1 结构体数据的输入与输出
#include <stdio.h>
struct student {  
    char name[20];  
    char sex;      
    long num;    
    float score[3];
}; 
int main() {
    struct student stu;
    int i;
    scanf("%s %c %ld", stu.name,&stu.sex,&stu.num);
	for(i=0; i<3; i++)
	  scanf("%f",&stu.score[i]);
	  
  	printf("\n****************************************\n");
  	printf("Name   Sex    Num    Score1  Score2  Score3 \n");    
  	printf("%-8s %-2c %8ld", stu.name,stu.sex,stu.num);
  	for(i=0; i<3; i++)
	  printf("%8.2f",stu.score[i]);
	  
  	return 0;
}


