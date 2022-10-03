// ex9_3.cpp

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
const int N = 10;

// 定义结构体类型struct student，并定义其别名为STU 
typedef struct student {
	long int id;
	char name[20];
	float objective;	/*客观题得分*/
	float subjective;	/*操作题得分*/
	float sum;
	char level[10];	
}STU; 

// 函数声明
void input(STU s[], int n);
void output(STU s[], int n);
void process(STU s[], int n);

int main() {
	STU stu[N];
	
	printf("录入%d个考生信息: 准考证号，姓名，客观题得分(<=40)，操作题得分(<=60)\n", N); 
	input(stu, N);
	
	printf("\n对考生信息进行处理: 计算总分，确定等级\n");
	process(stu, N);
	
	printf("\n打印考生完整信息: 准考证号，姓名，客观题得分，操作题得分，总分，等级\n");
	output(stu, N); 
	
	system("pause");
	return 0;
} 

// 从文本文件examinee.txt读入考生信息:准考证号，姓名，客观题得分，操作题得分
void input(STU s[], int n) {
	FILE *fin;
    fin=fopen("examinee.txt","r");
    if(!fin)
    {
        printf("cannot open the file");
        exit(0);
    }
    int i;
	for(i=0; i<n; i++) 
		fscanf(fin, "%ld %s %f %f", &s[i].id, s[i].name, &s[i].objective,&s[i].subjective);
	
	fclose(fin);
}

// 输出考生完整信息: 准考证号，姓名，客观题得分，操作题得分，总分，等级
// 不仅输出到屏幕上，还写到文本文件result.txt中 
void output(STU s[], int n) {
    FILE *fin;
    fin=fopen("result.txt","w");
    int i;
     if(!fin)
    {
        printf("cannot open the file");
        exit(0);
    }
     printf("准考证号   姓名    客观题得分  操作题得分 总分 等级\n");
    for(i=0;i<n;i++)
    {
        printf("%-6ld%+10s\t%-6.2f\t%-6.2f\t%-6.2f\t%s\n", s[i].id, s[i].name, s[i].objective,s[i].subjective,s[i].sum,s[i].level);
		fprintf(fin,"%-6ld%+10s\t%-6.2f\t%-6.2f\t%-6.2f\t%s\n", s[i].id, s[i].name,s[i].objective,s[i].subjective,s[i].sum,s[i].level);
    }
    fclose(fin);
}

// 对考生信息进行处理：计算总分，排序，确定等级
void process(STU s[], int n) {
    int i, j;
    STU temp;
    for (i = 0; i < n; i++)
        s[i].sum = s[i].objective + s[i].subjective;
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i - 1; j++)
            if (s[j].sum < s[j + 1].sum)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
    for(i=0;i<(int)(N*0.1);i++)
    strcpy(s[i].level,"优秀");
    for(i=(int)(N*0.1);i<(int)(N*0.5);i++)
    strcpy(s[i].level,"合格");
    for(i=(int)(N*0.5);i<n;i++)
    strcpy(s[i].level,"不及格");
}