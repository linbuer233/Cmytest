// 示例：建立链表并输出
// 设输入-1时，链表创建结束 
#include <stdio.h>
#include <stdlib.h>
struct node {
	int number;
	struct node *next;
};
int main() {
	struct node *head,*p,*pre;
	
	// 创建链表，直到输入-1时，链表创建结束 
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

	// 输出链表
	p = head;
	while( p != NULL ){
		printf("%d ",p->number);
		p = p->next;
	}
	
	return 0;
}
