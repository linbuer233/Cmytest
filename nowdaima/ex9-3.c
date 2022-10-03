// ex9_3.cpp

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
const int N = 10;

// ����ṹ������struct student�������������ΪSTU 
typedef struct student {
	long int id;
	char name[20];
	float objective;	/*�͹���÷�*/
	float subjective;	/*������÷�*/
	float sum;
	char level[10];	
}STU; 

// ��������
void input(STU s[], int n);
void output(STU s[], int n);
void process(STU s[], int n);

int main() {
	STU stu[N];
	
	printf("¼��%d��������Ϣ: ׼��֤�ţ��������͹���÷�(<=40)��������÷�(<=60)\n", N); 
	input(stu, N);
	
	printf("\n�Կ�����Ϣ���д���: �����ܷ֣�ȷ���ȼ�\n");
	process(stu, N);
	
	printf("\n��ӡ����������Ϣ: ׼��֤�ţ��������͹���÷֣�������÷֣��ܷ֣��ȼ�\n");
	output(stu, N); 
	
	system("pause");
	return 0;
} 

// ���ı��ļ�examinee.txt���뿼����Ϣ:׼��֤�ţ��������͹���÷֣�������÷�
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

// �������������Ϣ: ׼��֤�ţ��������͹���÷֣�������÷֣��ܷ֣��ȼ�
// �����������Ļ�ϣ���д���ı��ļ�result.txt�� 
void output(STU s[], int n) {
    FILE *fin;
    fin=fopen("result.txt","w");
    int i;
     if(!fin)
    {
        printf("cannot open the file");
        exit(0);
    }
     printf("׼��֤��   ����    �͹���÷�  ������÷� �ܷ� �ȼ�\n");
    for(i=0;i<n;i++)
    {
        printf("%-6ld%+10s\t%-6.2f\t%-6.2f\t%-6.2f\t%s\n", s[i].id, s[i].name, s[i].objective,s[i].subjective,s[i].sum,s[i].level);
		fprintf(fin,"%-6ld%+10s\t%-6.2f\t%-6.2f\t%-6.2f\t%s\n", s[i].id, s[i].name,s[i].objective,s[i].subjective,s[i].sum,s[i].level);
    }
    fclose(fin);
}

// �Կ�����Ϣ���д��������ܷ֣�����ȷ���ȼ�
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
    strcpy(s[i].level,"����");
    for(i=(int)(N*0.1);i<(int)(N*0.5);i++)
    strcpy(s[i].level,"�ϸ�");
    for(i=(int)(N*0.5);i<n;i++)
    strcpy(s[i].level,"������");
}