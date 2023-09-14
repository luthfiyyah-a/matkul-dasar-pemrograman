
/* Ditulis oleh:
Nrp: 5025201090
Nama 1: luthifyyah hanifah amari

nama 2: Fadel
*/

/* Tanggal:
Pembuatan: 5 desember 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
menghitung tingkat persentase tahanan yang ditahan kembali dalam kurun 3 tahun (36 bulan) setelah bulan pelepasan, dari inputan berupa file
*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
dari soal, dapat diperoleh :
- program meminta user untuk menginput nama file yang berisi data tahanan
- lalu, memanggil fungsi untuk memuat data ke dalam 5 array
- kemudian memanggil fungsi kedua untuk menampilkan data file 
- panggil fungsi recividism; dimana fungsi ini menghitung tingkat persentase tahanan yang ditahan kembali dala mkurun waktu 3 tahun (36 bulan) setelah pelepasan;
  juga mengambil input parameter 5 array
- program menampilkan data presentase (dengan 1 angka dibelakang koma)
*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

// define
//#define ROW 20 // mendefinisikan kolom
//#define COL 100 // mendefinisikan baris

//Problem Inputs:
//	FILE *in = fopen("recid.txt", "r");
//	int a[20], b[20], c[20], d[20]; //variabel array
//	double jumlah_tahanan=1; // input

//Problem Outputs:
// int count;

//Program Variables:
//	int temp; // variabel bantuan
//	double count=0; // variabel bantuan
//	char id[ROW][COL]; // variable
//	int i=0; // variabel - pada looping
//	int a[20], b[20], c[20], d[20]; //variabel array
	
/*DESIGN
Initial Algorithm:
1. memasukkan input dari file ke array
2. menghitung jumlah tahanan yang ditangkap kembali tidak lebih dari 3 tahun setelah dibebaskan
3. menampilkan output tingkat recidivism sekaligus memanggil fungsi recidivism

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//tidak ada

/*IMPLEMENTATION

// menulis prototype fungsi
double reci(double a, double b);

pada fungsi utama -------
	// deklarasi variabel
	FILE *in = fopen("recid.txt", "r");
	int i=0; // variabel - pada looping
	int a[20], b[20], c[20], d[20]; //variabel array
	double jumlah_tahanan=1; // input
	char id[ROW][COL]; // variable
	
	// memasukkan input dari file ke array, dengan pernyataan sebagai sebagai berikut
	do{
		fscanf(in, "%s %d%d%d%d", &id[i], &a[i], &b[i], &c[i], &d[i]);
		if (feof(in))break;
		i++;
		jumlah_tahanan++;
	}
	while (!feof(in));
	
	// deklarasi veriabel bantuan, dengan pernyataan sebagai sebagai berikut
	int temp; // variabel bantuan
	double count=0; // variabel bantuan
	
	// menghitung jumlah tahanan yang ditangkap kembali tidak lebih dari 3 tahun setelah dibebaskan, dengan pernyataan sebagai sebagai berikut
	for (i=0; i<jumlah_tahanan; i++)
	{
		temp = d[i]-b[i];
		if (temp>=3) count++;
	}
	
	// menampilkan output tingkat recidivism, dengan pernyataan sebagai sebagai berikut
	printf("%d\n\n", count);
	printf ("%lf",reci(count, jumlah_tahanan));
	fclose (in);


// fungsi recidivism
double reci(double a, double b)
	
	// mengembalikan nilai sekaligus menghitung , dengan pernyataan sebagai sebagai berikut
	return (a*100)/b;

/*
*/





#include <stdio.h>
#define ROW 20 // mendefinisikan kolom
#define COL 100 // mendefinisikan baris

// prototype fungsi
double reci(double a, double b);

int main (){
	// deklarasi variabel
	FILE *in = fopen("recid.txt", "r");
	int i=0; // variabel - pada looping
	int a[20], b[20], c[20], d[20]; //variabel array
	double jumlah_tahanan=1; // input
	char id[ROW][COL]; // variable
	
	// memasukkan input dari file ke array
	do{
		fscanf(in, "%s %d%d%d%d", &id[i], &a[i], &b[i], &c[i], &d[i]);
		if (feof(in))break;
		i++;
		jumlah_tahanan++;
	}
	while (!feof(in));
	
	// deklarasi veriabel bantuan
	int temp; // variabel bantuan
	double count=0; // variabel bantuan
	
	// menghitung jumlah tahanan yang ditangkap kembali tidak lebih dari 3 tahun setelah dibebaskan
	for (i=0; i<jumlah_tahanan; i++)
	{
		temp = d[i]-b[i];
		if (temp>=3) count++;
	}
	
	// menampilkan output tingkat recidivism
	printf("%d\n\n", count);
	printf ("%lf",reci(count, jumlah_tahanan));
	fclose (in);
	return 0;
}

// fungsi recidivism
double reci(double a, double b)
{
	return (a*100)/b;
}
/*


TESTING

*/
