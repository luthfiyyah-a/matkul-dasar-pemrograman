#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int hitung;
	int pangkat;
	int A;
	int B;
	
	A=2;
	pangkat = pow(A, 81);
	printf("%d\n %d\n", A, pangkat);
	hitung = pangkat % 5;    
    
    printf("%d\n\n", hitung);
    
    pangkat = pow(2, 81);
	hitung = pangkat % 5;
	printf("%d\n", pangkat);    
    
    printf("%d", hitung);
    
    return 0;
}
