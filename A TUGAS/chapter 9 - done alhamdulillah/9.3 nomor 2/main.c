
/* Ditulis oleh:
Nrp: 5025201090
Nama 1: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 20 desember 2020
perubahan: 21 desember 2020
*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
menggunakan fungsi fast_fib
*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
memanggil fungsi fast_fib
*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

// header
// #include <stdio.h>
// #include "fast_fib.h"

//Problem Inputs:
//int n; // variabel input - yang dicari

//Problem Outputs:
//	fast_fib(n)
	
/*DESIGN
Initial Algorithm:
1. menginput angka dari pengguna
2. memanggil fungsi fast_fib dan menampilkan hasil

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//tidak ada

/*IMPLEMENTATION

	//menginput n dari user, dengan pernyataan sebagai berikut
	printf("mencari nilai dari fibonacci ke - : ");
	scanf("%d", &n);
	
	//menampilkan output dari hasil pemanggilan fungsi fast_fib, dengan pernyataan sebagai berikut
	printf("fibonacci ke - %d adalah %d", n, fast_fib(n));
*/


#include <stdio.h>
#include "fast_fib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n; // variabel input - yang dicari
	
	//menginput n dari user
	printf("mencari nilai dari fibonacci ke - : ");
	scanf("%d", &n);
	
	//menampilkan output dari hasil pemanggilan fungsi fast_fib
	printf("fibonacci ke - %d adalah %d", n, fast_fib(n));
	
	return 0;
}

/* TESTING 
//mohon maaf, pak.. saya belum mengerti maksud dari soalnya... programnya berjalan, tetapi tak menampilkan output.

*/

