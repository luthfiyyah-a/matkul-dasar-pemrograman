
/* Ditulis oleh:
Nrp: 5025201090
Nama: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 15 november 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
diberikan list bilangan. lalu diperintahkan untuk :
1. membalikkan bilangan
2. mengecek apakah itu merupakan bilangan prima
3. mengecek apakah itu bilangan polindrom

*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
program akan menginput data bilangan dari user. lalu, melakukan yang diperintahkan

1. membalikkan bilangan dengan memakai loop
2. mengecek apakah itu merupakan bilangan prima dengan algoritma memakai for dan if
3. mengecek apakah itu bilangan polindrom dengan memakai loop dan if

*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

//Problem Inputs:
//	bilangan_pengguna; // bilangan yang diinput oleh pengguna

//Problem Outputs:
//   int jumlah_digit_genap; // output - ada berapa jumlah digit genap dalam bilangan
//   int jumlah_digit_ganjil; // output - ada berapa jumlah digit ganjil dalam bilangan

//Program Variables:
//	int panjang_bilangan; // variabel yang menampung ada jumlah digit bilan


/*DESIGN
Initial Algorithm:
1 mengambil data bilangan dari user
2. menentukan apakah bilangan tersebut meruupakan bilangan prima
3. membalik bilangan
4. menampilkan hasil membalik bilangan
5. mengecek apakah palindrom
6. membagi kondisi jika ganjil dan jika genap
7. menampilkan hasil apakah dia bilangan polindrom


Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//tidak ada

/*IMPLEMENTATION
// mengambil data bilangan dari user dengan statement sebagia berikut :
    printf("masukkan bilangan : ");
    scanf("%d", &bilangan_user);

// menentukan apakah bilangan tersebut meruupakan bilangan prima dengan statement sebagia berikut :

		if(bilangan_user == 2){
			prima = 2;

		}else{
			for( int i = 2; i < bilangan_user; i++){

				if(bilangan_user %i == 0){ //jika angka habis dibagi suatu bilangan selain 1 dan angka itu sendiri
					prima = 0; // angka ini bukan bilangan prima
					break;
				}else{
					prima = 1; // angka ini merupakan bilangan prima
				}

			// mengeluarkan output
				}
			}
    if(prima == 1){
        printf("bilangan ini merupakan bilangan prima");
    }else{
        printf("bilangan ini bukan merupakan bilangan prima");
    }

    int a = bilangan_user;
    int b; // variabel

// membalik bilangan
        while(a >  0){
        b = a % 10;
        a = a / 10;
        c = 10 * b;
     }

// menampilkan hasil membalik bilangan

// mengecek apakah palindrom

// membagi kondisi
    //jika ganjil dan jika genap

// menampilkan hasil apakah dia bilangan polindrom

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int bilangan_user; // input - bilangan yang diberikan user
    int prima; // variabel - jika nilainya 1 maka prima, jika nilainya 2 maka bukan prima
    int i; // variabel inisialisasi

// mengambil data bilangan dari user
    printf("masukkan bilangan : ");
    scanf("%d", &bilangan_user);

// menentukan apakah bilangan tersebut meruupakan bilangan prima

		if(bilangan_user == 2){
			prima = 2;

		}else{
			for( int i = 2; i < bilangan_user; i++){

				if(bilangan_user %i == 0){ //jika angka habis dibagi suatu bilangan selain 1 dan angka itu sendiri
					prima = 0; // angka ini bukan bilangan prima
					break;
				}else{
					prima = 1; // angka ini merupakan bilangan prima
				}

			// mengeluarkan output
				}
			}
    if(prima == 1){
        printf("bilangan ini merupakan bilangan prima");
    }else{
        printf("bilangan ini bukan merupakan bilangan prima");
    }

    int a = bilangan_user;
    int b; // variabel

// membalik bilangan
        while(a >  0){
        b = a % 10;
        a = a / 10;
        c = 10 * b;
     }

// menampilkan hasil membalik bilangan


// mengecek apakah palindrom

// membagi kondisi
    //jika ganjil
        if(bilangan_user % 2 == 1){

            for()
                if()
        }
         // jika genap
        else{
            for(){
                if()
            }
        }

// menampilkan hasil apakah dia bilangan polindrom


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
