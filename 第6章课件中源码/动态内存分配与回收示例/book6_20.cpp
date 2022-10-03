// ��6.20 ʹ�ö��ֲ��ҷ��������ź�����ַ�ָ���������ָ���ַ����Ĳ��ҡ� 
#include<string.h>
#include<stdio.h>
#include<malloc.h>
#define N 4    
void sort(char *name[],int n);
char *b_search(char *ptr[],char *str,int n);

int main() {
	char *p[N],*t;
	int i,j;
	
	for (i=0; i<N; i++)   {
		p[i]= (char *)malloc(20); 
		gets(p[i]);
	}
	
	printf("\n");
	printf("orginal string:\n");
	for(i=0; i<N; i++)
		printf("%s\n", p[i]);
	
	sort(p,N);
	
	printf("\n");
	printf("after sort string:\n");
	for(i=0; i<N; i++)
		printf("%s\n", p[i]);
	
	printf("\n");	
	printf("input search string:\n");
	t = (char *)malloc(20);
	while(strcmp(gets(t), "End") != 0) {
		t = b_search(p,t,N);
		
		if(t)
			printf("successful-----%s\n", t);
		else
			printf("no successful!\n");
		
		printf("input searchstring:\n");
		t = (char *)malloc(20);
	}
	
	free(t);
	return 0;
}

// ѡ�񷨶�һ���ַ������ֵ�������
void sort(char *name[], int n) {
	char *temp;
	int i,j,k;
	for(i=0; i<n-1; i++) {
		k = i;
		for(j=i+1; j<n; j++) 
			if(strcmp(name[j], name[k]) < 0)
				k = j;
				
		if(k != i) {
			temp = name[k];
			name[k] = name[i];
			name[i] = temp;
		}
	}
} 


// �۰���� 
// ��ָ������n��Ԫ��ָ���n���ַ����У�����strָ����ַ��� 
char *b_search(char *ptr[],char *str,int n) { 
	int high,low,mid;
	low=0;
	high=n-1;
	while(low<=high) {
		mid = (low+high)/2;
		if( strcmp(str,ptr[mid]) < 0 )
			high = mid - 1 ;
		else if( strcmp(str,ptr[mid] ) > 0 )
			low = mid + 1 ;
		else return(str);
	}
	return 0;
}

