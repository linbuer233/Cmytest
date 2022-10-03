// ex8_2.cpp 
// ���ı������ļ�file1.txt�ж������ݣ����ɼ��Ӹߵ������򣬽��������������Ļ��
// ͬʱ�����ı���ʽ�����ļ�file2.txt�У��Զ����Ʒ�ʽд���ļ�file3.txt�� 
#include <stdio.h> 
#include <stdlib.h>

#define N 10

// ����һ���ṹ������STU 
typedef struct student {
	int num;
	char name[20];
	int score;
}STU;

void sort(STU *pst, int n);  // �������� 

int main() {
	FILE *fin, *fout;
	STU st[N];
	int i;
	
	// ��ֻ���ı���ʽ���ļ�file1.txt 
	fin = fopen("file1.txt", "r");
	if( !fin ) {  // �����ʧ�ܣ������������ʾ��Ϣ��Ȼ���˳����� 
		printf("fail to open file1.txt\n");
		exit(0);
	}
	
	// ��finָ��������ļ�file1.txt�ж�ȡ���ݵ��ṹ������st
	for(i=0; i<N; i++) 
		fscanf(fin, "%d %s %d", &st[i].num, st[i].name, &st[i].score);
	
	fclose(fin);  // �ر�finָ����ļ�file1.txt
	
	// ���ú���sort()������st�����ݣ��������ָߵ������� 
	sort(st, N);
	
	// ��д��ʽ��/�����ı��ļ�file2.txt
	fout = fopen("file2.txt", "w");
	if( !fout ) {  // �����ʧ�ܣ������������ʾ��Ϣ��Ȼ���˳����� 
		printf("fail to open file2.txt\n");
		exit(0);
	}	
	
	// ������������st�������������Ļ��ͬʱ��Ҳд���ļ�file2.txt
	for(i=0; i<N; i++) {
		printf("%-6d%-10s%3d\n", st[i].num, st[i].name, st[i].score);
		fprintf(fout, "%-6d%-10s%3d\n", st[i].num, st[i].name, st[i].score);
	}
	
	fclose(fout);  // �ر�foutָ����ı��ļ�file2.txt 
	
	// ��д��ʽ��/�����������ļ�file3.txt
	fout = fopen("file3.txt", "wb");
	if(!fout) {
		printf("fail to open file3.txt\n");
		exit(0);
	} 
	
	// ������������st������д���������ļ�file3.txt
	fwrite(st, sizeof(STU), N, fout); // ���ӵ�ַst��ʼ��sizeof(STU)��N���ֽ���Ϣд��foutָ����ļ�file3.txt��
	
	fclose(fout);	// �ر�foutָ��Ķ������ļ�file3.txt 
	
	system("pause");
	return 0;
}

// ����������������pstָ���n��STU�ṹ�����ݽ������򣬰��ɼ��������ɸߵ������� 
// �����㷨��ѡ�� 
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