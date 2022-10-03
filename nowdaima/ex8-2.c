// ex8_2.cpp
// 结构体数组的输入、输出
#include <stdio.h>
#include <stdlib.h>

#define N 3

// 定义结构体类型 
struct student {
	long id;            // 准考证号
	char name[20]; 		// 姓名
	float objective;	// 客观题得分
	float subjective;	// 主观题得分
	float sum; 			// 总分 
}; 

int main() {
	struct student st[N];   // 定义结构体类型的数组 
	int i;
	
	printf("输入%d个考生信息:\n",N);
	for(i=0; i<N; i++)
		scanf("%ld %s %f %f", &st[i].id, st[i].name, &st[i].objective, &st[i].subjective );
	
	printf("计算总分，并输出考生信息:\n");
	for(i=0; i<N; i++) {
		st[i].sum = st[i].objective  + st[i].subjective;
		printf("%ld %s %0.2f %.2f %.2f\n", st[i].id, st[i].name, st[i].objective, st[i].subjective, st[i].sum);
	}

	system("pause");
	return 0;	
}