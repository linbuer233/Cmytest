// p261: ��8.3 ��ָ�������ӷ��ʽṹ������ĳ�Ա
#include <stdio.h>
#include <stdlib.h> 

struct student {  
    char name[20];  
    char sex;       
    long num;        
    float score[3];
}; 

int main() {
  	struct student *p;
  	int i;
  	
	p = (struct student *)malloc(sizeof(struct student));         
  	scanf("%s %c %ld", p->name,&p->sex ,&p->num);
  	for(i=0; i<3; i++)
        scanf("%f",&p->score[i]);
        
  	printf("\n*********************************************\n");
  	printf("Name    Sex    Num    Score1  Score2  Score3 \n");    
  	printf("%-8s %-2c %8ld", p->name,p->sex,p->num);
  	for(i=0; i<3; i++)
	  	printf("%8.2f",p->score[i]);
  	printf("\n");
  	
  	free(p);             
  	return 0;
}



