//简单链表示例：建立一个简单链表，由两个学生数据的节点组成 
#include <stdio.h>
#include <string.h>
struct student {
	long no;
	char name[20];
	char major[50];
	struct student *next;
};

int main() {
	student stu1, stu2, *head, *p;
	
	stu1.no = 20181001;
	strcpy(stu1.name, "Bill");
	strcpy(stu1.major, "CS");
	
	stu2.no = 20182061;
	strcpy(stu2.name, "Alice");
	strcpy(stu2.major, "EE");
	
	head = &stu1;
	stu1.next = &stu2;
	stu2.next = NULL;
	
	p = head;
	while(p != NULL) {
		printf("%ld %s %s\n", p->no, p->name, p->major);
		p = p->next;
	}
	
	return 0;
}
