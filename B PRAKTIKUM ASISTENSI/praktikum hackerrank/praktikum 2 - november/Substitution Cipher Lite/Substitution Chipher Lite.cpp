#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
# narasi soal
Sebagai kriptografer amatir, Bang Jaog ingin mencoba berbagai jenis cipher.
Salah satu cipher yang ia ingin gunakan adalah substitution cipher. 
Substitution cipher adalah jenis encoding yang mengganti beberapa huruf dengan huruf lain sehingga pesan menjadi lebih sulit terbaca. 
Namun karena Bang Jaog belum terlalu jago, ia memutuskan hanya akan mengubah N huruf saja. 
Bantulah Bang Jaog untuk membuat program kriptografinya!

# Input Format
Pertama, diberikan N untuk menentukan berapa banyak huruf yang akan dia ubah.
Lalu untuk N baris berikutnya, diberikan 2 input huruf A B, yaitu A sebagai input huruf yang akan diubah dan B sebagai huruf penggantinya.
Terakhir, diberikan string S yang akan diubah.

# Constraints
1 <= N <= 15
S, A, B hanya akan terdiri dari huruf besar (A-Z) dan kecil (a-z)
1 <= panjang S <= 1000

Output Format
String yang sudah diubah
*/

int main() {
	
	int N; // input - menentukan berapa huruf yang akan diubah
	char huruf_awal[20]; //string yang menampung huruf sebelum diubah
	char huruf_pengganti[20]; // string yang menampung huruf pengganti
	char tambahan[20]; // string yang menampung spasi
	int i;
	
//	// input data N - untuk menentukan berapa huruf yang akan diubah
	scanf("%d", &N);
	
	// input data huruf yang akan diubah dan huruf pengganti secara berulang sebayak N kali
	for(i = 0; i < N; i++ ){
		printf("ini yang ke %d", i);
		scanf("%c%c%C", &huruf_awal[i], &tambahan[i], &huruf_pengganti[i]);
	}
	
	for(i = 0; i < N; i++ ){
		
		printf("yang anda masukkan %d : %c %C\n", i, huruf_awal[i], huruf_pengganti[i]);
	}
	
	
	// mengganti huruf secara berulang
	
	// input kalimat S
	
	// mengganti huruf yang harus diubah dengan huruf pengganti
	
	
	
	
	return 0;
}
