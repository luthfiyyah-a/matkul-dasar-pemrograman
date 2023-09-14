
/* Ditulis oleh:
Nrp: 5025201090
Nama: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 7 desember 2020
*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
mengimplementasi fungsi sorting
*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
mendesain fungsi utama, lalu memanggil fungsi void sorting di fungsi utama dan menampilkan output berupa data array yang telah diurutkan
*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

//Problem Inputs:
	
//	int n; // input - jumlah data
//	int array[n+1];

//Problem Outputs:
//	int array[]; 

//Program Variables:
//	int i; // variabel - pada looping
//  int temp;       // variabel pembantu
//	int j,fill;       // index dari element pertama dalam subarray yang belum diurutkan
//    int index_of_min; //subscript dari elemen terkecil selanjutnya

/*DESIGN
Initial Algorithm:

1. membuat fungsi utama
2. menginput jumlah data yang ingin dimasukkan ke array dari user
3. mendeklarasikan array dengan panjang data+1 
4. mengiput data array
5. memanggil fungsi untuk men sorting
6. menampilkan data array setelah di sorting
7. menampilkan pesan penutup kepada user

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//tidak ada

/*IMPLEMENTATION

// menginput jumlah data yang ingin dimasukkan ke array dari user, dengan pernyataan sebagai berikut
	printf("masukkan berapa data yang ingin diurutkan : ");
	scanf("%d", &n);
	
//	mendeklarasikan array dengan panjang data+1 , dengan pernyataan sebagai berikut
	int array[n+1];

// menginput data array, dengan pernyataan sebagai berikut
	for(i=0; i<n; i++){
	printf("masukkan data ke - %d :", i+1);
	scanf("%d", &array[i]);
	}
// memanggil fungsi untuk mensorting, dengan pernyataan sebagai berikut
	select_sort(array, n);

// menampilkan output berupa data array, dengan pernyataan sebagai berikut
	printf("\n\narray setelah diurutkan \n");
	for(i=0; i<n; i++){
	printf("%d\n", array[i]);
	}
	
//	menampilkan tampilan penutup kepada user. dengan pernyataan sebagai berikut
	printf("program selesai ^___^\nterima kasih telah menggunakan program ini...");

*/


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// prototype fungsi
void select_sort();
                  
int main() {
	
	int n; // input - jumlah data
	int i; // variabel - pada looping
	
	// menginput banyak data array yang akan diururtkan
	printf("masukkan berapa data yang ingin diurutkan : ");
	scanf("%d", &n);
	
	int array[n+1];
	
	// menginput data array
	for(i=0; i<n; i++){
	printf("masukkan data ke - %d :", i+1);
	scanf("%d", &array[i]);
	}
	
	// memanggil fungsi untuk mensorting
	select_sort(array, n);
	
	// menampilkan output berupa data array
	printf("\n\narray setelah diurutkan \n");
	for(i=0; i<n; i++){
	printf("%d\n", array[i]);
	}
	
	printf("program selesai ^___^\nterima kasih telah menggunakan program ini...");
	
	return 0;


}

void select_sort(int list[],   //input/output - array yang diurutkan
                  int n)        // input - banyaknya elemen yang akan diurutkan
{
    int j,fill;       // index dari element pertama dalam subarray yang belum diurutkan
    int temp;       // variabel pembantu
    int index_of_min; //subscript dari elemen terkecil selanjutnya
    for(fill=0;fill<n-1;++fill){
        /* Temukan posisi dari elemen terkecil dalam subarray yang belum urut*/
        index_of_min = fill;
            for(j=fill+1;j<n;j++){
                if(list[j]<list[index_of_min]) index_of_min = j;
            }

        /*Tukar elemen pada fill dan index_of_min*/

        if(fill!=index_of_min){
            temp = list[index_of_min];
            list[index_of_min]= list[fill];
            list[fill] = temp;
        }
    }
}
/*
masukkan berapa data yang ingin diurutkan : 5
masukkan data ke - 1 :2
masukkan data ke - 2 :1
masukkan data ke - 3 :3
masukkan data ke - 4 :4
masukkan data ke - 5 :5


array setelah diurutkan
1
2
3
4
5
program selesai ^___^
terima kasih telah menggunakan program ini...

TESTING
 program menampilkan perintah "masukkan berapa data yang ingin diurutkan : " user memasukkan 5.
 lalu program memberi perintah untuk memasukkan dat ke - 1 sampai data ke - 5. user memberi data 2, 1, 3, 4, 5.
 program menampilkan kalimat "array setelah diurutkan" diikuti dengan data yang telah diurutkan, yakni "1, 2, 3, 4, 5"
 kemudian program menampilkan kalimat penutup*/
