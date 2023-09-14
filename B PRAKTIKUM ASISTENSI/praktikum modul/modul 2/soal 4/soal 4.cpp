#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int banyak_angka; // input
	int isi[banyak_angka]; // input
	int i;

	
// mengambil data banyak angka 
scanf("%d", &banyak_angka);

// mengambil data isi secara berulang
	for(int i = 0; i < banyak_angka; i++){
		scanf("%d", &isi[i]);
	}

// mengeluarkan output data	
	for(int i = (banyak_angka - 1); i >= 0; i--){
		printf("%d\n", isi[i]);
	}
	return 0;
}
