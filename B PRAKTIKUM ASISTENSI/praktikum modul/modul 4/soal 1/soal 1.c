#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void tambah();

int main() {
	
	int a = 1;
	int b = 2;
	int c;
	
	tambah(a, b, &c);
	printf("%d", c);	
	
	return 0;
}

void tambah(int a, int b, int *c){
	*c = a + b;
}
