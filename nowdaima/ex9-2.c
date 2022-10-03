// ex8_2.cpp 
// 从文本数据文件file1.txt中读入数据，按成绩从高到低排序，将排序结果输出到屏幕上
// 同时，以文本方式存入文件file2.txt中；以二进制方式写入文件file3.txt中 
#include <stdio.h> 
#include <stdlib.h>

#define N 10

// 定义一个结构体类型STU 
typedef struct student {
	int num;
	char name[20];
	int score;
}STU;

void sort(STU *pst, int n);  // 函数声明 

int main() {
	FILE *fin, *fout;
	STU st[N];
	int i;
	
	// 以只读文本方式打开文件file1.txt 
	fin = fopen("file1.txt", "r");
	if( !fin ) {  // 如果打开失败，则输出错误提示信息，然后退出程序 
		printf("fail to open file1.txt\n");
		exit(0);
	}
	
	// 从fin指向的数据文件file1.txt中读取数据到结构体数组st
	for(i=0; i<N; i++) 
		fscanf(fin, "%d %s %d", &st[i].num, st[i].name, &st[i].score);
	
	fclose(fin);  // 关闭fin指向的文件file1.txt
	
	// 调用函数sort()对数组st中数据，按分数又高到低排序 
	sort(st, N);
	
	// 以写方式打开/创建文本文件file2.txt
	fout = fopen("file2.txt", "w");
	if( !fout ) {  // 如果打开失败，则输出错误提示信息，然后退出程序 
		printf("fail to open file2.txt\n");
		exit(0);
	}	
	
	// 将排序后的数组st中数据输出到屏幕，同时，也写入文件file2.txt
	for(i=0; i<N; i++) {
		printf("%-6d%-10s%3d\n", st[i].num, st[i].name, st[i].score);
		fprintf(fout, "%-6d%-10s%3d\n", st[i].num, st[i].name, st[i].score);
	}
	
	fclose(fout);  // 关闭fout指向的文本文件file2.txt 
	
	// 以写方式打开/创建二进制文件file3.txt
	fout = fopen("file3.txt", "wb");
	if(!fout) {
		printf("fail to open file3.txt\n");
		exit(0);
	} 
	
	// 将排序后的数组st中数据写到二进制文件file3.txt
	fwrite(st, sizeof(STU), N, fout); // 将从地址st开始的sizeof(STU)×N个字节信息写入fout指向的文件file3.txt中
	
	fclose(fout);	// 关闭fout指向的二进制文件file3.txt 
	
	system("pause");
	return 0;
}

// 函数功能描述：对pst指向的n个STU结构体数据进行排序，按成绩数据项由高到底排序 
// 排序算法：选择法 
void sort(STU *pst, int n) {
	STU *pi, *pj, t;
	
	for(pi = pst; pi < pst+n-1; pi++)
		for(pj = pi+1; pj < pst+n; pj++) 
			if(pi->score < pj->score) {
				t = *pi;
				*pi = *pj;
				*pj = t; 
			}
}