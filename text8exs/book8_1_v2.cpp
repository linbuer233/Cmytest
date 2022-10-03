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
    scanf("%s%*c%c%ld", stu.name,&stu.sex,&stu.num);  // 如果格式符连在一起写，那么，要加一个%*c跳过一列 
                                                      // 否则，会把输完姓名后的空格或回车，给stu.sex 
	for(i=0; i<3; i++)
	  scanf("%f",&stu.score[i]);
	  
  	printf("\n****************************************\n");
  	printf("Name   Sex    Num    Score1  Score2  Score3 \n");    
  	printf("%-8s %-2c %8ld", stu.name,stu.sex,stu.num);
  	for(i=0; i<3; i++)
	  printf("%8.2f",stu.score[i]);
	  
  	return 0;
}


