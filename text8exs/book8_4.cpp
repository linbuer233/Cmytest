// 例8.4 用指针变量间接访问结构体数组
#include <stdio.h>
struct student {   
    int   num;
    char  name[20];
    int score;
};
int main() {
    struct student stu[3]={{11302,"Wang",90},
                           {11303,"Liu",88},
                           {11304,"Song",96}};
    struct student *q;
    
  	for(q=stu; q<stu+3; q++)     
      	printf("%d,%s,%d\n",q->num,q->name, q->score); 
      	
  	return 0;
} 

        
