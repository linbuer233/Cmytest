// ʾ���������������
// ������-1ʱ������������ 
#include <stdio.h>
#include <stdlib.h>
struct node {
	int number;
	struct node *next;
};
int main() {
	struct node *head,*p,*pre;
	
	// ��������ֱ������-1ʱ������������ 
	head = NULL;
	do{
		p = (struct node *) malloc( sizeof( struct node) );
		scanf("%d",&p->number);
		if(p->number == -1)  
            break; 			
		p->next = NULL;
		
		if( head == NULL )
			head = p;
		else
			pre->next = p;
			
		pre = p;
	}while(1);

	// �������
	p = head;
	while( p != NULL ){
		printf("%d ",p->number);
		p = p->next;
	}
	
	return 0;
}
