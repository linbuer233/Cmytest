// 例6.18 利用指针数组，使用选择法，对字符串由小到大排序
#include <stdio.h>
#include <string.h>
void sort(char *name[],int n);

int main() {
	char *course[4] = {"C Program", 
	                    "C++ Object Oriented Program", 
			   			"Operating System",
			   			"Data Structure and Algorithms"};
	int i;
			   			
	sort(course, 4);
	for(i=0; i<4; i++)
		printf("%s\n", course[i]);
	return 0;
} 


void sort(char *name[],int n) {
    char *temp;
    int i,j,k;
    for(i=0;  i<n-1;  i++) {
		k=i;
		for(j=i+1;  j<n;  j++) 
	   		if(strcmp(name[j],name[k])<0)
			   k=j;
			   
			if(k!=i) {
				temp=name[i];
                name[i]=name[k];
                name[k]=temp;
			}
       }
} 
 
