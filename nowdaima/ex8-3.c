// ex8_3.cpp
#include <stdio.h>
#include <stdlib.h>

const int N = 5;

// ����ṹ������struct student,������STUΪ�����
typedef struct student
{
    long no;
    char name[20];
    int score;
} STU;

// ��������
void input(STU s[], int n);
int findMinlist(STU s[], STU t[], int n);
void output(STU s[], int n);

int main()
{
    STU stu[N], minlist[N];
    int count;

    printf("¼��%d��ѧ����Ϣ\n", N);
    input(stu, N);

    printf("\nͳ����ͷ�������ѧ����Ϣ...\n");
    count = findMinlist(stu, minlist, N);

    printf("\nһ����%d����ͷ֣���Ϣ����:\n", count);
    output(minlist, count);

    system("pause");
    return 0;
}

// ����n��ѧ����Ϣ������ڽṹ������s��
void input(STU s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%ld %s %d", &s[i].no, s[i].name, &s[i].score);
}

// ����ṹ��s��n��Ԫ����Ϣ
void output(STU s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%ld %s %d\n", s[i].no, s[i].name, s[i].score);
}

// �ڽṹ������s�У�������ͷ�ѧ���ļ�¼���������ṹ������t��
// �β�n�ǽṹ������s��Ԫ�ظ���
// ����������ͷֵ�ѧ������
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