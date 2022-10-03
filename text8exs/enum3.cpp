#include <stdio.h>
enum SignalColor { Red,Yellow,Green };

int main() {  
	enum SignalColor  s1;
	
	s1 = Green;
	
	switch(s1) {
		case 0: printf("Red"); break;
		case 1: printf("Yellow"); break;
		case 2: printf("Green"); break;
		defualt: printf("traffic signal\'s wrong?"); break;
	}
	
   	return 0;
}

