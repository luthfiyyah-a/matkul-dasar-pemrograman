#include <stdio.h>

count_digits(const char string[], int i){
	
	if(string[i] == '\0') return 0;
	
	else return (1 + (count_digits(string, i+1)));
}

