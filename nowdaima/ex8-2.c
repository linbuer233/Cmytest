// ex8_2.cpp
// �ṹ����������롢���
#include <stdio.h>
#include <stdlib.h>

#define N 3

// ����ṹ������ 
struct student {
	long id;            // ׼��֤��
	char name[20]; 		// ����
	float objective;	// �͹���÷�
	float subjective;	// ������÷�
	float sum; 			// �ܷ� 
}; 

int main() {
	struct student st[N];   // ����ṹ�����͵����� 
	int i;
	
	printf("����%d��������Ϣ:\n",N);
	for(i=0; i<N; i++)
		scanf("%ld %s %f %f", &st[i].id, st[i].name, &st[i].objective, &st[i].subjective );
	
	printf("�����ܷ֣������������Ϣ:\n");
	for(i=0; i<N; i++) {
		st[i].sum = st[i].objective  + st[i].subjective;
		printf("%ld %s %0.2f %.2f %.2f\n", st[i].id, st[i].name, st[i].objective, st[i].subjective, st[i].sum);
	}

	system("pause");
	return 0;	
}