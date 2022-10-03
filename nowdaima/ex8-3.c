// ex8_3.cpp
#include <stdio.h>
#include <stdlib.h>

const int N = 5;

// 定义结构体类型struct student,并定义STU为其别名
typedef struct student
{
    long no;
    char name[20];
    int score;
} STU;

// 函数声明
void input(STU s[], int n);
int findMinlist(STU s[], STU t[], int n);
void output(STU s[], int n);

int main()
{
    STU stu[N], minlist[N];
    int count;

    printf("录入%d个学生信息\n", N);
    input(stu, N);

    printf("\n统计最低分人数和学生信息...\n");
    count = findMinlist(stu, minlist, N);

    printf("\n一共有%d个最低分，信息如下:\n", count);
    output(minlist, count);

    system("pause");
    return 0;
}

// 输入n个学生信息，存放在结构体数组s中
void input(STU s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%ld %s %d", &s[i].no, s[i].name, &s[i].score);
}

// 输出结构体s中n个元素信息
void output(STU s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%ld %s %d\n", s[i].no, s[i].name, s[i].score);
}

// 在结构体数组s中，查找最低分学生的记录，将其存入结构体数组t中
// 形参n是结构体数组s中元素个数
// 函数返回最低分的学生人数
int findMinlist(STU s[], STU t[], int n)
{
    int i, j, k = 0,m;
    STU temp;
    for (i = 0; i < n-1; i++)
    {
        m=i;
        for (j = i+1; j < n; j++)
        {
            if (s[m].score > s[j].score)
            m=j;
        }
    }
    for (i = 0; i < n; i++)
        if (s[m].score == s[i].score)
            t[k++] = s[i];

    return k;
}