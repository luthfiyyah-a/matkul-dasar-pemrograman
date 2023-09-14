
/* Ditulis oleh:
Nrp: 5025201090
Nama 1: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 20 desember 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
menggunakan fungsi count_digits untuk menghitung digit sebuah string
*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
memanggil fungsi count_digits dengan melempar parameter string, count_digit akan merekursif fungsinya dan menghitung digit string yang diberikan.
*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

// header
// #include <stdio.h>
// #include "find_sum.h"

//Problem Inputs:
//	int n; // variabel input - angka

//Problem Outputs:
//	find_sum(n)
	
/*DESIGN
Initial Algorithm:
1. menginput angka dari pengguna
2. memanggil fungsi find_sum untuk menghitung hasil nilai penjumlahan

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//tidak ada

/*IMPLEMENTATION

	// menginput string dari pengguna, dengan pernyataan sebagai berikut ;
	printf("masukkan kalimat : ");
	gets(string);
	
	// memanggil fungsi count_digits dan menyimpannya di variabel hasil
	hasil = count_digits(string, 0);
	
	//menampilkan output dari hasil pemanggilan fungsi count_digits, dengan pernyataan sebagai berikut ;
	printf("kamu memasukkan %d karakter", hasil);	

*/


#include <stdio.h>
#include "find_sum.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n; // variabel input - angka
	
	printf("menjumlahkan 1 sampai dengan : ");
	scanf("%d", &n);
	
	printf("hasil penjumlahan = %d", find_sum(n));
	
	return 0;
}

/* TESTING
menjumlahkan 1 sampai dengan : 3
hasil penjumlahan = 6


program menampilan "menjumlahkan 1 sampai dengan :", pengguna memasukkan input 3, program menampilkan output "hasil penjumlahan = 6"
*/

