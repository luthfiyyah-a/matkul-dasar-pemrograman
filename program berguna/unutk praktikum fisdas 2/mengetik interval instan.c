#include <stdio.h>
#include <stdlib.h>

// program ini berfungsi untuk mengetik interval secara instan
int main() {

	double n[100], m;
	int i = 1;
	
	m = 20;
	n[0] = 0;
	
	while(i < m){
	
	n[i] = i * 0.3;
	printf("%.1lf", n[i-1]);
	
	printf(" - %.1lf\n", n[i]);
	
	i++;
	}

	return 0;
}
