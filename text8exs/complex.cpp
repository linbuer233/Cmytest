// ��дһ���Ӻ���add()��ʵ�������������ӷ������ؼ����ĸ���ֵ��

#include <stdio.h>

// ����ṹ������Complex
struct Complex {
	double real;   	// ����ʵ�� 
	double imag; 	// �����鲿 
}; 

// ��������
struct Complex add(struct Complex, struct Complex); 

int main() {
	struct Complex x1, x2, y;
	
	scanf("%lf%lf",&x1.real, &x1.imag);   // ע�⣺double���ͣ�����ʱҪ��%lf 
	scanf("%lf%lf",&x2.real, &x2.imag);
	
	y = add(x1, x2);
	
	printf("x1 = %.2f + %.2fi\n", x1.real, x1.imag);
	printf("x2 = %.2f + %.2fi\n", x2.real, x2.imag);
	printf("x1 + x2 = %.2f + %.2fi\n", y.real, y.imag);
	
	
	return 0;
} 


struct Complex add(struct Complex c1, struct Complex c2) {
	struct Complex r;
	
	r.real = c1.real + c2.real;
	r.imag = c1.imag + c2.imag;
	
	return r;
	
}
