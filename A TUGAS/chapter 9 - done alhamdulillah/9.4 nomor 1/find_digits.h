
#include <stdio.h>

int find_digits(const char *str){
	
	if(str[0] == '\0') return 0;

	else{
		printf("%d\n", str[0]);
		find_digits(&str[1]);
		
	}
	return;
}
