
/* Ditulis oleh:
Nrp: 5025201090
Nama : luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 20 desember 2020
perubahan: 21 desember 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
menggunakan fungsi add yang menambahkan 2 bilangan bulat
*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
memanggil add dengan melempar parameter 2 bilangan bulat, fungsi add menghitung hasilnya dan mengembalikan nilai ke fungsi main, lalu output ditampilkan
*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

// header
// #include <stdio.h>
// #include "add.h"

//Problem Inputs:
//	int a; // variabel input -1
//	int b; // variabel input -2
//	int hasil; /// variabel output - menampung pengembalian nilai dari fungsi add

//Problem Outputs:
//	int hasil; /// variabel output - menampung pengembalian nilai dari fungsi add
	
/*DESIGN
Initial Algorithm:
1. menginput 2 bilangan bulat dari pengguna
2. memanggil fungsi add
3. menampilkan menampilkan output dari hasil pemanggilan fungsi add

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//tidak ada

/*IMPLEMENTATION

	//menginput 2 bilangan bulat dari pengguna, dengan pernyataan sebagai berikut
	printf("masukkan 2 angka = ");
	scanf("%d %d", &a, &b);
	
	//memanggil fungsi add, dengan pernyataan sebagai berikut
	hasil = add(a, b);
	
	// menampilkan hasil kepada pengguna, dengan pernyataan sebagai berikut
	printf("hasil penjumlahan = %d", hasil);


*/



#include <stdio.h>
#include "add.h"


int main() {
	
	int a; // variabel input -1
	int b; // variabel input -2
	int hasil; // variabel output - menampung pengembalian nilai dari fungsi add
	
	//menginput 2 bilangan bulat dari pengguna
	printf("masukkan 2 angka = ");
	scanf("%d %d", &a, &b);
	
	//memanggil fungsi add
	hasil = add(a, b);
	
	// menampilkan hasil kepada pengguna
	printf("hasil penjumlahan = %d", hasil);
	
	return 0;
}

/*TESTING
masukkan 2 angka = 1 4
hasil penjumlahan = 5

pengguna memasukkan input 1 4, program menghitung hasil penjumlahannya menggunakan fungsi add, dan menampilkan output berupa "hasil penjumlahan = 5"
*/
