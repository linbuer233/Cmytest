// ex9_1.cpp 
// ���ı��ļ�file1.dat�ж�ȡ���ݣ��ҳ���߷ֺ���ͷ�ѧ����Ϣ�����������Ļ��
#include <stdio.h> 
#include <stdlib.h>

#define N 10

// ����һ���ṹ������STU 
typedef struct student {
	int num;
	char name[20];
	int score;
}STU;

int main() {
	STU st, stmax, stmin;
	int i;
	FILE *fp;
	
	// ��ֻ���ı���ʽ���ļ�file1.dat 
	fp = fopen("file1.txt", "r");
	if( !fp ) {  // �����ʧ�ܣ������������ʾ��Ϣ��Ȼ���˳����� 
		printf("fail to open file1.txt\n");
		exit(0);
	}
	
	stmax.score = 0;	// �ȼٶ���߷���0�������緢�ֱȵ�ǰ��߷ֻ��ߵķ������͸�����߷� 
	stmin.score = 100;	// �ȼٶ���ͷ���100�֣������緢�ֱȵ�ǰ��ͷָ��͵ķ������͸�����ͷ� 
	
	while( !feof(fp) ) {
		fscanf(fp, "%d %s %d", &st.num, st.name, &st.score);  		
		if(st.score > stmax.score)
			stmax = st;
		else if(st.score < stmin.score)
			stmin = st; 
}
	
	fclose(fp);
	
	printf("��߷�ѧ����Ϣ: %5d%15s%5d\n", stmax.num, stmax.name, stmax.score);
	printf("��ͷ�ѧ����Ϣ: %5d%15s%5d\n", stmin.num, stmin.name, stmin.score);
	
	system("pause");
	return 0;
}