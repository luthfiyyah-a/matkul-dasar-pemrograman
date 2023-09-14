
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
//	int a; // input - data yang ingin dicari
//	int array[n+1]; // input - meampung data

//Problem Outputs:
//	int a; // output - data yang ingin dicari

//Program Variables:
//	int i; // variabel - pada looping

/*DESIGN
Initial Algorithm:

1. membuat fungsi utama
2. menginput jumlah data yang ingin yang ingin dimasukkan
3. mendeklarasikan array dengan panjang jumlah data+1 
4. mengiput data array
5. menginput data yang akan dicari
6. memanggil fungsi void untuk mencari data
7. menampilkan data yang dicari dan di mana keberadaannya
8. menampilkan pesan penutup kepada user

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//tidak ada

/*IMPLEMENTATION

	// menginput banyak data array yang akan diururtkan, dengan pernyataan sebagai berikut
	printf("masukkan anda ingin mencari dari berapa data  : ");
	scanf("%d", &n);
	
	// menginput data array, dengan pernyataan sebagai berikut
	for(i=0; i<n; i++){
	printf("masukkan data ke - %d :", i+1);
	scanf("%d", &array[i]);
	}
	
	// mengiput data yang ingin dicari, dengan pernyataan sebagai berikut
	printf("masukkan data apa yang ingin anda cari :");
	scanf("%d", &a);
	
	// memanggil fungsi untuk mensearching, dengan pernyataan sebagai berikut
	linear_search(array, a, n);
	// menampilkan output berupa data array

	// menampilkan kalimat penutup kepada user, dengan pernyataan sebagai berikut
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
	int a; // input - data yang ingin dicari
	
	// menginput banyak data array yang akan diururtkan
	printf("masukkan anda ingin mencari dari berapa data  : ");
	scanf("%d", &n);
	
	int array[n+1];
	
	// menginput data array
	for(i=0; i<n; i++){
	printf("masukkan data ke - %d :", i+1);
	scanf("%d", &array[i]);
	}
	
	// mengiput data yang ingin dicari
	printf("masukkan data apa yang ingin anda cari :");
	scanf("%d", &a);
	
	// memanggil fungsi untuk mensearch
	linear_search(array, a, n);
	// menampilkan output berupa data array

	
	printf("program selesai ^___^\nterima kasih telah menggunakan program ini...");
	
	return 0;


}

void linear_search(int fn_arr[], int element, int MAX_SIZE) {
  int i;

  /* for : Check elements one by one - Linear */
  for (i = 0; i < MAX_SIZE; i++) {
    /* If for Check element found or not */
    if (fn_arr[i] == element) {
      printf("Linear Search : %d is Found at array : %d.\n", element, i + 1);
      break;
    }
  }

  if (i == MAX_SIZE)
    printf("\nSearch Element : %d  : Not Found \n", element);
}

/*
masukkan anda ingin mencari dari berapa data  : 2
masukkan data ke - 1 :5
masukkan data ke - 2 :4
masukkan data apa yang ingin anda cari :4
Linear Search : 4 is Found at array : 2.
program selesai ^___^
terima kasih telah menggunakan program ini...

TESTING
 program menampilkan perintah "masukkan anda ingin mencari dari berapa data  : " user memasukkan 2.
 lalu program memberi perintah untuk memasukkan data ke - 1 sampai data ke - 2. user memberi data 5 dan 2
 program memberi perintah dengan pernyataan "masukkan data apa yang ingin anda cari :" user memasukkan 4
 program menampilkan kalimat "Linear Search : 4 is Found at array : 2" dimana 4 adalah data yang dicari dan 2 adalah letak data tersebut.
 kemudian program menampilkan kalimat penutup*/
