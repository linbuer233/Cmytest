// ex8_1.cpp
// �ṹ����������롢���
#include <stdio.h>
#include <stdlib.h>

// ����ṹ������ 
struct student {
	long id;            // ׼��֤��
	char name[20]; 		// ����
	float objective;	// �͹���÷�
	float subjective;	// ������÷�
	float sum; 		// �ܷ�
}; 

int main() {
	struct student s1;   // ����ṹ�����͵ı��� 
	
	printf("���뿼����Ϣ:\n");
	scanf("%ld %s %f %f", &s1.id, s1.name, &s1.objective, &s1.subjective );
	
	printf("�����ܷ֣������������Ϣ:\n");
	s1.sum = s1.objective  + s1.subjective;
	printf("%ld %s %0.2f %.2f %.2f\n", s1.id, s1.name, s1.objective, s1.subjective, s1.sum);
	
	system("pause");
	return 0;	
}