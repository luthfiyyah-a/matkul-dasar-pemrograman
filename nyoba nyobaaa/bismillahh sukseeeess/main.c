#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// KURANG IDE

int huruf_Besar();
int angka();
int huruf_kecil();
int simbol();


int main(){
	
	int jumlah, i;
	int karakter;
	
	scanf("%d", &jumlah);
	
	for(i = 0; i < jumlah; i++){
		
		scanf("%c", &karakter);
	}
		
	for(i = 0; i < jumlah; i++){
		if( karakter <= 90 && karakter >= 65){
			huruf_Besar(karakter);
		}
		if( karakter <= 47 && karakter >= 33){
			simbol(karakter);
		}if( karakter <= 64 && karakter >= 58){
			simbol(karakter);
		}if( karakter <= 96 && karakter >= 91){
			simbol(karakter);
		}if( karakter <= 122 && karakter >= 97){
			huruf_kecil(karakter);
		}if( karakter <= 126 && karakter >= 123){
			simbol(karakter);	
		}if( karakter <= 57 && karakter >= 48){
			angka(karakter);	
		}
	}
	return 0;
}

//fungsi huruf besar
int huruf_Besar(const int huruf_besar){
	
	int i, j, n;
//	int huruf_besar[100];
	
//	scanf("%c", &huruf_besar);
		
	n = (huruf_besar / 18) + 2;
	
	for (i = 1; i <= n; i++){
		for (j = 0; j < i; j++){
			printf("%c", huruf_besar);
		}
		printf("\n");
	}
	return 0;
}

// fungsi simbol
int simbol(const int simbol){
//	int simbol;
	int i, j, n;
	
//	scanf("%c", &simbol);
	
	n = (simbol % 9) + 1;
	
	for (i = 0; i < n; i++){ 
		printf("%c", simbol);
	}
	for(i = 0; i < n-2; i++){
		printf("\n%c", simbol);
		for(j = 0; j < n-2; j++){
		printf(" ");	
		}
		printf("%c", simbol);
	}
	printf("\n");
	for (i = 0; i < n; i++){ 
		printf("%c", simbol);
	}	
}

// fungsi angka
int faktorial (int n){
	
	if(n == 0 || n == 1) return 1;
	else return (n * faktorial(n-1));
	
}
int angka(const int angka){
	
//	int angka;
	int i;
	
//	scanf("%d", &angka);
	
	for(i=0; i<angka; i++){
		printf("%d\n", faktorial(angka));
	}
	
	return 0;
}

// fungsi huruf kecil
int huruf_kecil(const int huruf){
	
	int i, j, n;
//	int huruf;
	
//	printf("masukkan huruf");
//	scanf("%c", &huruf);

	n = ((huruf % 27) / 2) + 1;
	
	for (i = 1; i <= n; i++){
		for (j = 0; j < i; j++){
			printf("%c", huruf);
		}
		printf("\n");
	}
	for (i = n-1; i > 0; i--){
		for (j = i; j > 0; j--){
			printf("%c", huruf);
		}
		printf("\n");
	}	
	return 0;
}

