
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
// #include "count_digits.h"

//Problem Inputs:
//	char string[30]; // variabel input - string

//Problem Outputs:
//	int hasil; // variabel output - menampung nilai pengembalian fungsi count_digits
	
/*DESIGN
Initial Algorithm:
1. menginput string dari pengguna
2. memanggil fungsi count_digits
3. menampilkan menampilkan output dari hasil pemanggilan fungsi count_digits

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
#include "count_digits.h"


int main() {
	
	char string[30]; // variabel input - string
	int hasil; // variabel output - menampung nilai pengembalian fungsi count_digits
	
	// menginput string dari pengguna
	printf("masukkan kalimat : ");
	gets(string);
	
	// memanggil fungsi count_digits dan menyimpannya di variabel hasil
	hasil = count_digits(string, 0);
	
	//menampilkan output dari hasil pemanggilan fungsi count_digits
	printf("kamu memasukkan %d karakter", hasil);	
	
	return 0;
}

/* TESTING

masukkan kalimat : tes
kamu memasukkan 3 karakter

pengguna mengiput "tes", lalu program menghitung jumlah karakter yang ada, dan mengeluarkan output " kamu memasukkan 3 karakter "
*/


