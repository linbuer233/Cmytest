// ex8_1.cpp
// 结构体变量的输入、输出
#include <stdio.h>
#include <stdlib.h>

// 定义结构体类型 
struct student {
	long id;            // 准考证号
	char name[20]; 		// 姓名
	float objective;	// 客观题得分
	float subjective;	// 主观题得分
	float sum; 		// 总分
}; 

int main() {
	struct student s1;   // 定义结构体类型的变量 
	
	printf("输入考生信息:\n");
	scanf("%ld %s %f %f", &s1.id, s1.name, &s1.objective, &s1.subjective );
	
	printf("计算总分，并输出考生信息:\n");
	s1.sum = s1.objective  + s1.subjective;
	printf("%ld %s %0.2f %.2f %.2f\n", s1.id, s1.name, s1.objective, s1.subjective, s1.sum);
	
	system("pause");
	return 0;	
}