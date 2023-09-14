
/* Ditulis oleh:
Nrp: 5025201090
Nama 1: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 21 desember 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
memodifikasi fungsi menjadi fungsi find_digits untuk mencari digit-digit karakter pada sebuah string
*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
program mengiput string, lalu memanggil fungsi find_digits yang akan merekursi dirinya, dan menampilkan output berupa digit kepada user
*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

// header
// #include <stdio.h>
// #include "find_digits.h"

//Problem Inputs:
//	char str[30]; // variabel input - string
	
/*DESIGN
Initial Algorithm:
1. menginput string dari pengguna
2. menampilkan kalimat pengantar kepada user
3. memanggil fungsi find_digits, fungsi find_digits merekursi dirinya, dan ketika sampai di base case ia mengembalikan nilai serta menampilkan output kepada user

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//tidak ada

/*IMPLEMENTATION
	
	// menginput string dari user, dengan pernyataan sebagai berikut ;
	printf("masukkan string :");
	scanf("%s", str);
	
	printf("digit dari karakter-karakter string tersebut ialah :\n");
	
	//memanggil fungsi serta menampilkan output, dengan pernyataan sebagai berikut ;
	find_digits(str);

*/


#include <stdio.h>
#include "find_digits.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char str[30]; // variabel input - string
	
	// menginput string dari user
	printf("masukkan string :");
	scanf("%s", str);
	
	printf("digit dari karakter-karakter string tersebut ialah :\n");
	
	//memanggil fungsi serta menampilkan output
	find_digits(str);
	
	return 0;
}

/*TESTING
masukkan string :abc
digit dari karakter-karakter string tersebut ialah :
97
98
99

program menampilkan arahan kepada user untuk menginput string, lalu user menginput "abc", program menampilkan "digit dari karakter-karakter string tersebut ialah :"
lalu program memanggil fungsi find_digits, lalu fungsi tersebut menampilkan output "97", "98","99".

*/
