// ö������ʾ�� 
#include <stdio.h>
enum Weekday { Sun,Mon,Tue,Wed,Thu,Fri,Sat };
int main() {  
	enum Weekday  today,days;
	
	today = Thu;
	printf("today = %d\n", today);
	
	days = (enum Weekday)4;
	if(days == today)
		printf("Thu");
		
   	return 0;
}

