// ex9_1.cpp 
// 从文本文件file1.dat中读取数据，找出最高分和最低分学生信息，并输出在屏幕上
#include <stdio.h> 
#include <stdlib.h>

#define N 10

// 定义一个结构体类型STU 
typedef struct student {
	int num;
	char name[20];
	int score;
}STU;

int main() {
	STU st, stmax, stmin;
	int i;
	FILE *fp;
	
	// 以只读文本方式打开文件file1.dat 
	fp = fopen("file1.txt", "r");
	if( !fp ) {  // 如果打开失败，则输出错误提示信息，然后退出程序 
		printf("fail to open file1.txt\n");
		exit(0);
	}
	
	stmax.score = 0;	// 先假定最高分是0，后面如发现比当前最高分还高的分数，就更新最高分 
	stmin.score = 100;	// 先假定最低分是100分，后面如发现比当前最低分更低的分数，就更新最低分 
	
	while( !feof(fp) ) {
		fscanf(fp, "%d %s %d", &st.num, st.name, &st.score);  		
		if(st.score > stmax.score)
			stmax = st;
		else if(st.score < stmin.score)
			stmin = st; 
}
	
	fclose(fp);
	
	printf("最高分学生信息: %5d%15s%5d\n", stmax.num, stmax.name, stmax.score);
	printf("最低分学生信息: %5d%15s%5d\n", stmin.num, stmin.name, stmin.score);
	
	system("pause");
	return 0;
}