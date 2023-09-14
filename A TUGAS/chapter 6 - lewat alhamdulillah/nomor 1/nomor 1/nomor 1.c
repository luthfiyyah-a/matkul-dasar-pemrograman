
/* Ditulis oleh:
Nrp: 5025201090
Nama: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 15 november 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
 Tulis program yang menghitung jumlah digit ganjil dan jumlah digit genap dalam
bilangan bulat. Pengguna harus memasukkan bilangan bulat yang diinginkan dan program dihitung
jumlah digit ganjil dan bahkan digit dalam bilangan bulat itu. Tulis fungsi itu
menentukan jumlah digit ganjil dan digit genap dan menampilkan hal yang sama kepada
pengguna
*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
sebenarnya saya kurang menangkap soalnya, apakah soal meminta membuat program yang menghitung ada berapa jumlah digit ganjil dan genap dalam bilangan,
ataukah jumlah dari setiap angka pada digit ganjil dan digit genap.
saya mengasumsikan bahwa soalnya meminta membuat program yang menghitung ada berapa jumlah digit ganjil dan genap dalam bilangan.

program menginput data bilangan dari pengguna. lalu, dihitung panjang arraynya. lalu, data panjang array digunakan untuk menghitung ada berapa jumlah digit ganjil dan genap dalam bilangan,
dengan cara membaginya ke dalam 2 kondisi. yakni kondisi jika jumlah digit bilangan yang dimasukkan genap ataukah ganjil.
lalu, dihitung ada berapa digit ganjil dan digit genapnya.
lalu, data jumlah digit ganjil dan genap itu ditampilkan ke pengguna.
*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

//Problem Inputs:
//	bilangan_pengguna; // bilangan yang diinput oleh pengguna

//Problem Outputs:
//   int jumlah_digit_genap; // output - ada berapa jumlah digit genap dalam bilangan
//   int jumlah_digit_ganjil; // output - ada berapa jumlah digit ganjil dalam bilangan

//Program Variables:
//	int panjang_bilangan; // variabel yang menampung ada jumlah digit bilan

//Relevant Formulas:
// ketika ada genap digit
//	jumlah bilangan ganjil = jumlah seluruh digit bilangan / 2
//	jumlah bilangan genap = jumlah seluruh digit bilangan / 2
// ketika ada ganjil digit
//	jumlah bilangan genap = jumlah seluruh digit bilangan / 2
//	jumlah bilangan ganjil = (jumlah seluruh digit bilangan / 2) + 1


/*DESIGN
Initial Algorithm:
1. mendapat data bilangan yang diiinput oleh pengguna
2. menghitung panjang string
3. membagi kondisi, jika ganjil dan jika genap
4. menghitung ada berapa jumlah digit ganjil dan genap menggunakan formula yang diatas.
4. menampilkan output kepada user

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//tidak ada

/*IMPLEMENTATION

// mendapat data bilangan yang diiinput oleh pengguna dengan statement sebagai berikut :
	printf("masukkan bilangan : ");
	scanf("%s", &bilangan_pengguna);

// menghitung panjang string dengan statement sebagai berikut :
    panjang_bilangan = strlen(bilangan_pengguna);

// membagi kondisi dengan statement sebagai berikut :

    // jika ganjil
    if(panjang_bilangan % 2 == 1){

    jumlah_digit_ganjil = (panjang_bilangan / 2) + 1;
    jumlah_digit_genap = panjang_bilangan / 2;

    }
    // jika genap
    else{

    jumlah_digit_genap = panjang_bilangan / 2;
    jumlah_digit_ganjil = panjang_bilangan / 2;
    }

// menampilkan output kepada user dengan menulis statement sebagai berikut:

printf("jumlah digit genap dalam bilangan tersebut adalah : %d/n", jumlah_digit_genap);
printf("jumlah digit ganjil dalam bilangan tersebut adalah : %d", jumlah_digit_ganjil);



*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p 1.23



int main(){

	char bilangan_pengguna[100]; // input - bilangan yang diiinput oleh pengguna
    int panjang_bilangan; // variabel
    int jumlah_digit_genap; // output - ada berapa jumlah digit genap dalam bilangan
    int jumlah_digit_ganjil; // output - ada berapa jumlah digit ganjil dalam bilangan

// mendapat data bilangan yang diiinput oleh pengguna
	printf("masukkan bilangan : ");
	scanf("%s", &bilangan_pengguna);

// menghitung panjang string
    panjang_bilangan = strlen(bilangan_pengguna);

// membagi kondisi
    // jika ganjil
    if(panjang_bilangan % 2 == 1){

    jumlah_digit_ganjil = (panjang_bilangan / 2) + 1;
    jumlah_digit_genap = panjang_bilangan / 2;

    }
    // jika genap
    else{

    jumlah_digit_genap = panjang_bilangan / 2;
    jumlah_digit_ganjil = panjang_bilangan / 2;
    }

// menampilkan output kepada user

printf("jumlah digit genap dalam bilangan tersebut adalah : %d\n", jumlah_digit_genap);
printf("jumlah digit ganjil dalam bilangan tersebut adalah : %d", jumlah_digit_ganjil);

return 0;


}
/*
masukkan bilangan : 12345678
jumlah digit genap dalam bilangan tersebut adalah : 4
jumlah digit ganjil dalam bilangan tersebut adalah : 4


TESTING
dalam kasus uji tersebut, dimasukkan input "12345678",
lalu program menampilkan output "4" sebagai jumlah digit bilangan genap,
serta program menampilkan output "4" sebagai jumlah digit bilangan ganjil.
*/
