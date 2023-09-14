/* Ditulis oleh:
Nrp: 5025201090
Nama: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 6 desember 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
dari soal, dapat diperoleh bahwa :
- menulis fungsi  yang menggabungkan isi dari 2 urutan array (urutan menaik)
*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
dari soal, dapat diperoleh bahwa :
- menulis fungsi  yang menggabungkan isi dari 2 urutan array (urutan menaik) dari tipe nilai double, 
yang menyimpan hasilya di parameter output array. 
- Fungsi ini tidak boleh mengasumsikan bahwa kedua inputnya array parameter memiliki panjang yang sama 
  melainkan dapat mengasumsikan bahwa satu array tidak berisi dua salinan dengan nilai yang sama. 
- Array hasil juga harus berisi tidak nilai duplikat.
-  Ketika salah satu array input telah habis, jangan lupa untuk menyalin data yang tersisa dalam array lain ke dalam array hasil.
- Uji fungsi dengan kasus di mana : 
	(1) array pertama habis terlebih dahulu 
	(2) array kedua habis terlebih dahulu 
	(3) dua array habis pada saat yang sama (yaitu, mereka berakhir dengan nilai yang sama)
- Ingatlah bahwa array yang dimasukkan ke fungsi ini harus sudah diurutkan.
*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

//Problem Inputs:
//	int n; // input - panjang array 2
//	int m; // input - panjang array 1
//	int a; // input - panjang array 1 sebelum dikurang 1
//	int b; // input - panjang array 2 sebelum dikurang 1
//	int array_1[a]; // input - array 1
//	int array_2[b]; // input - array 2

//Problem Outputs:
//	int array_hasil[m+n]; // output - array gabungan

//Program Variables:
//	int i; // variabel - pada loop
//	int j; // variabel - pada loop
//	int sementara; // variabel - pembantu saat menukar


/*DESIGN
Initial Algorithm:
1. mengambil input array 1
2. mengambil input array 2
3. menggabungkan array 1 dan array 2 dengan memakai fungsi gabungkan
4. mensortir apabila pada array hasil ada elemen yang sama
5. menampilkan hasil kepada user

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//tidak ada

/*IMPLEMENTATION

// menulis prototype fungsi, dengan pernyataan sebagai berikut
int gabungkan();
int hapus_yang_sama();

// pada fungsi utama
int main() {
	
	int i; // variabel - pada loop
	int j; // variabel - pada loop
	int sementara; // variabel - pembantu saat menukar
	int n; // input - panjang array 2
	int m; // input - panjang array 1
	int a; // input - panjang array 1 sebelum dikurang 1
	int b; // input - panjang array 2 sebelum dikurang 1

	// menginput panjang array 1
	printf("masukkan berapa angka yang ingin di input pada array 1 : ");
	scanf("%d", &a);
	
	// deklarasi array 1
	int array_1[a];
	m = a - 1; 
	
	// menginput panjang array 2
	for(i=0; i<m; i++){
		scanf("%d", &array_1);
	}
	
	// memastikan array 1 terurut
	for(i=0; i<m; i++){
		
		for(j=i+1; j<m; j++){
			if(array_1[i] > array_1[j]){
				sementara = array_1[i];
				array_1[i] = array_1[j];
				array_1[j] = sementara;
			}	
		}
	}
	
	// menginput panjang array 2
	printf("masukkan berapa angka yang inigin di input pada array 2 : ");
	scanf("%d", &b);
	
	// deklarasi array 2
	int array_2[b];
	
	n = b - 1;
	for(i=0; i<n; i++){
		scanf("%d", &array_2);
	}
	
	for(i=0; i<n; i++){
		
		for(j=i+1; j<n; j++){
			if(array_2[i] > array_2[j]){
				sementara = array_2[i];
				array_2[i] = array_2[j];
				array_2[j] = sementara;
			}	
			
		}
	}
	
	// deklarasi array_hasil
	int array_hasil[m+n];
	
	gabungkan(array_1, array_2, array_hasil, m, n);
//	hapus_yang_sama(array_hasil, m+n);
	
	printf("array yang baru adalah");
	for(i=0; i<m+n; i++){
	printf("%d", array_hasil[i]);
	}
__________________________________

// memakai fungsi untuk menggabungkan , dengan pernyataan sebagai berikut
int gabungkan(int array_1[], int array_2[], int array_hasil[], int m, int n){
	
	// deklarasi variabel
	int i; // variabel lokal
	int j; // variabel lokal
	int k; // variabel lokal
	
	// melakukan looping selama i tidak melebihi panjang array 1 dan array 2, dengan pernyataan sebagai berikut
	for(i=0; i<m && j<n;){
		
		// memasukkan ke dalam kondisi, dengan pernyataan sebagai berikut
		if(array_1[i] < array_2[j]){
			array_hasil[k] = array_1[i];
			k++;
			i++;
		}
		else{
			array_hasil[k] = array_2[j];
			k++;
			j++;
		}
	
	// menginput array_hasil dari nilai array 1, dengan pernyataan sebagai berikut
	while(i < m){
		array_hasil[k] = array_1[i];
		k++;
		i++;
	}
	// menginput array_hasil dari array 2, dengan pernyataan sebagai berikut
	while(j<n){
		array_hasil[k] = array_2[j];
		k++;
		j++;
	}


// memakai fungsi untuk menghapus elemen yang bernilai sama pada array hasil, dengan pernyataan sebagai berikut
int hapus_yang_sama(int array_hasil[], int n){
	if(n==0 || n==1)
	return n;
	
	int sementara[n]; // variabel lokal
	int i; // variabel ketika looping
	int j; // variabel 
	
	for(i=0; i<n-1; i++){
		// memasukkan kondisi jika ada nilai yang sama, dengan pernyataan sebagai berikut
		if(array_hasil[i] != array_hasil[i+1] );
		sementara[j++] = array_hasil[i];
	}
		sementara[j++] = array_hasil[n-1];
	
	for(i=0; i<j; i++){
		array_hasil[i] = sementara[i];
	}
	//mengembalikan nilai, dengan pernyataan sebagai berikut
	return j;
	
*/





#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// prototype fungsi
int gabungkan();
int hapus_yang_sama();

int main() {
	
	int i; // variabel - pada loop
	int j; // variabel - pada loop
	int sementara; // variabel - pembantu saat menukar
	int n; // input - panjang array 2
	int m; // input - panjang array 1
	int a; // input - panjang array 1 sebelum dikurang 1
	int b; // input - panjang array 2 sebelum dikurang 1

	// menginput panjang array 1
	printf("masukkan berapa angka yang ingin di input pada array 1 : ");
	scanf("%d", &a);
	
	// deklarasi array 1
	int array_1[a];
	m = a - 1; 
	
	// menginput panjang array 2
	for(i=0; i<m; i++){
		scanf("%d", &array_1);
	}
	
	// memastikan array 1 terurut
	for(i=0; i<m; i++){
		
		for(j=i+1; j<m; j++){
			if(array_1[i] > array_1[j]){
				sementara = array_1[i];
				array_1[i] = array_1[j];
				array_1[j] = sementara;
			}	
			
		}
	}
	
	// menginput panjang array 2
	printf("masukkan berapa angka yang inigin di input pada array 2 : ");
	scanf("%d", &b);
	
	// deklarasi array 2
	int array_2[b];
	
	n = b - 1;
	for(i=0; i<n; i++){
		scanf("%d", &array_2);
	}
	
	for(i=0; i<n; i++){
		
		for(j=i+1; j<n; j++){
			if(array_2[i] > array_2[j]){
				sementara = array_2[i];
				array_2[i] = array_2[j];
				array_2[j] = sementara;
			}	
			
		}
	}
	
	// deklarasi array_hasil
	int array_hasil[m+n];
	
	gabungkan(array_1, array_2, array_hasil, m, n);
//	hapus_yang_sama(array_hasil, m+n);
	
	printf("array yang baru adalah");
	for(i=0; i<m+n; i++){
	printf("%d", array_hasil[i]);
	}
	
	return 0;
}

// memakai fungsi untuk menggabungkan 
int gabungkan(int array_1[], int array_2[], int array_hasil[], int m, int n){
	int i; // variabel lokal
	int j; // variabel lokal
	int k; // variabel lokal
	
	// melakukan looping selama i tidak melebihi panjang array 1 dan array 2
	for(i=0; i<m && j<n;){
		
		// memasukkan ke dalam kondisi
		if(array_1[i] < array_2[j]){
			array_hasil[k] = array_1[i];
			k++;
			i++;
		}
		else{
			array_hasil[k] = array_2[j];
			k++;
			j++;
		}
	}
	// menginput array_hasil dari nilai array 1
	while(i < m){
		array_hasil[k] = array_1[i];
		k++;
		i++;
	}
	// menginput array_hasil dari array 2
	while(j<n){
		array_hasil[k] = array_2[j];
		k++;
		j++;
	}
}

// memakai fungsi untuk menghapus elemen yang bernilai sama pada array hasil
int hapus_yang_sama(int array_hasil[], int n){
	if(n==0 || n==1)
	return n;
	
	int sementara[n]; // variabel lokal
	int i; // variabel ketika looping
	int j; // variabel 
	
	for(i=0; i<n-1; i++){
		// memasukkan kondisi jika ada nilai yang sama
		if(array_hasil[i] != array_hasil[i+1] );
		sementara[j++] = array_hasil[i];
	}
		sementara[j++] = array_hasil[n-1];
	
	for(i=0; i<j; i++){
		array_hasil[i] = sementara[i];
	}
	//mengembalikan nilai
	return j;
}

/*


TESTING
mohon maaf, pak.... program saya gagal... sekali lagi mohon maaf
*/
