#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// program ini digunakan untuk mencari data yang diperlukan pada delay 0,3
int main() {
	
	double data[100];
	int i;
	int n; // berapa data yang akan dimasukkan
	
	printf("berapa data yang akan dimasukkan : ");
	scanf("%d", &n);
	
	printf("masukkan / paste data disiniii ");
	for(i = 0; i < n; i++){
		scanf("%lf", &data[i]);
	}
	
	for(i = 0; i < n; i += 3){
		printf("%.0lf\n", data[i]);
	}
	return 0;
}
