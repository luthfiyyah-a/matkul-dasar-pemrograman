
/* Ditulis oleh:
Nrp: 5025201090
Nama: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 15 november 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*Ketika sebuah pesawat terbang atau mobil bergerak melalui atmosfir, itu pasti mengatasi gaya yang disebut gaya hambat yang bekerja melawan gerak kendaraan.
mari membuat program yang menampilkan tabel gaya hambat (drag force) pada untuk renteng kecepatan 0 -- 40 m/s serta pertambahan 5 m/s,
dengan input area proyeksi kendaraan dan koefisien gaya hambat. */

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
memakai perumusan 
	F = (1/2) * CD * A * p * V^2

dimana,
	F = gaya
	CD = koefisien gaya hambat (drag)
	A = area proyeksi
	p = kerapatan gas atau fluida
	V = kecepatan
	
program ini meginput  A (area) dan CD (koefisien gaya hambat / drag force),
lalu memasukkannya ke dalam rumus bersama p (kerapatan fluida = 1,23 kg/m^3) dan V (kecepatan) sesuai yang telah ditetapkan.
perhitungan digunakan berulang kali sebanyak 9 kali, karena kececapatan yang ditampilkan itu beragam (0 -- 40 m/s).
jadi, perhitungan pertama menggunakan V = 0, sampai perhitungan terakhir menggunakan V = 40.

karena sudah memasukkan variabel yang diperlukan, kita bisa mendapatkan F (gaya) sesuai dengan kecepatannya.
lalu, hasil ditampilkan berbantuk tabel.

*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

//Problem Constant:
//	#define p 1,23 


//Problem Inputs:
//	double A; // area proyeksi (dalam meter persegi)
//	double CD; // koefisien gaya hambat (drag)
//	//	int V[10] = {0, 5, 10, 15, 20, 25, 30, 35, 40}; // kecepatan

//Problem Outputs:
//	double F; // gaya
//	int V[10] = {0, 5, 10, 15, 20, 25, 30, 35, 40}; // kecepatan

//Program Variables:
//	int i; // variabel inisialisasi

//Relevant Formulas:
//	F = (1/2) * CD * A * p * V^2

/*DESIGN
Initial Algorithm:
1. mendapat data A (area) dan CD (koefisien gaya hambat / drag force).
2. memasukkannya ke dalam rumus bersama p (kerapatan fluida = 1,23 kg/m^3) dan V (kecepatan) sesuai yang telah ditetapkan.
3. mengitung rumus sebanyak 9 kali, sesuai dengan kecepatan yang digunakan (0 -- 40 m/s).
4. mendapatkan hasil dari F (gaya) berdasarkan kecepatan (V).
5. menampilkan output berupa F (gaya) dan masing-masing kecepatannya.
6. ditampilkan dalam bentuk tabel.


Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//	F = (1/2) * CD * A * p * V^2	menjadi		F = (1/2) * CD * A * p * pow(V[i], 2)


/*IMPLEMENTATION

1. mendapat data A (area) dan CD (koefisien gaya hambat / drag force).
untuk mendapat data A dan CD, maka perlu input dari user dengan statement sebagai berikut :

	printf("masukkan luas area proyeksi (dalam meter persegi) : ");
	scanf("%lf", &A);
	printf("masukkan koefisien gaya hambat (drag force) : ");
	scanf("%lf", &CD);

 menghitung gaya (F) menggunakan rumus sebanyak 9 kali. data yang digunakan dalam perumusan adalah CD, A, p, dan V (berganti ganti).
 CD dan A didapat dari input user, p didapat dari nilai konstan yang sudah di define, V sudah di deklarasikan dengan 0, 5, .., 40.
untuk itu, kita membuat statement sebagai berikut :
for(i = 0; i < 9; i++){
		
		F[i] = (CD * A * p * pow(V[i], 2)) / 2;
	}

//setelah mendapat nilai dari array F, lalu program menampilkan output berupa F (gaya) dan masing-masing kecepatannya, yang ditampilkan dalam bentuk tabel.
	sebagai berikut :
	
	// menampilakan bagian atas tabel
	printf("	F		V\n");
	
	// menampilkan isi tabel
	for(i = 0; i < 9; i++){
		printf("	%lf		%d\n", F[i], V[i]);
	}

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p 1.23 


int main(){
	
double F[10];// output - gaya
int V[10] = {0, 5, 10, 15, 20, 25, 30, 35, 40}; // output - kecepatan
double A; // input - area proyeksi (dalam meter persegi)
double CD; // input - koefisien gaya hambat (drag)
int i; // variabel inisialisasi

// mendapat data A (area) dan CD (koefisien gaya hambat / drag force).
	printf("masukkan luas area proyeksi (dalam meter persegi) : ");
	scanf("%lf", &A);
	printf("masukkan koefisien gaya hambat (drag force) : ");
	scanf("%lf", &CD);
	
// menghitung gaya (F) menggunakan rumus sebanyak 9 kali. data yang digunakan dalam perumusan adalah CD, A, p, dan V (berganti ganti).
// CD dan A didapat dari input user, p didapat dari nilai konstan yang sudah di define, V sudah di deklarasikan dengan 0, 5, .., 40.


	for(i = 0; i < 9; i++){
		
		F[i] = ( CD * A * p * pow(V[i], 2)) / 2;
	}
	

//5. menampilkan output berupa F (gaya) dan masing-masing kecepatannya.
//6. ditampilkan dalam bentuk tabel.
	// menampilakan bagian atas tabel
	printf("	  F			V\n");
	
	// menampilkan isi tabel
	for(i = 0; i < 9; i++){
		printf("	%lf		%d\n", F[i], V[i]);
	}


return 0;


}
/*
masukkan luas area proyeksi (dalam meter persegi) : 10
masukkan koefisien gaya hambat (drag force) : 3
          F                     V
        0.000000                0
        461.250000              5
        1845.000000             10
        4151.250000             15
        7380.000000             20
        11531.250000            25
        16605.000000            30
        22601.250000            35
        29520.000000            40

TESTING
Dalam kasus uji tersebut, dimasukkan data inputan berupa luas area proyeksi (dalam meter persegi) senilai 0.02, koefisien gaya hambat (drag force) senilai 300.
lalu program ini mengeluarkan output berupa baris per baris seperti tabel.
program mengeuarkan output "F" dan "V" pada baris ke 1. 
lalu, di baris ke-2 menampilkan output "0.000000" dan "0" sebagai nilai dari F[0] dan V[0]. 
lalu, di baris ke-3 menampilkan output "461.250000" dan "5 " sebagi nilai dari F[1] dan V[1].
lalu, di baris ke-4 menampilkan output "1845.000000" dan "10" sebagi nilai dari F[2] dan V[2].
lalu, di baris ke-5 menampilkan output "4151.250000" dan "15" sebagi nilai dari F[3] dan V[3].
lalu, di baris ke-6 menampilkan output "7380.000000" dan "20" sebagi nilai dari F[4] dan V[4].
lalu, di baris ke-7 menampilkan output "11531.250000" dan "25" sebagi nilai dari F[5] dan V[5].
lalu, di baris ke-8 menampilkan output "16605.000000" dan "30" sebagi nilai dari F[6] dan V[6].
lalu, di baris ke-9 menampilkan output "22601.250000" dan "35" sebagi nilai dari F[7] dan V[7].
lalu, di baris ke-10 menampilkan output "29520.000000" dan "40" sebagi nilai dari F[8] dan V[8].


*/

