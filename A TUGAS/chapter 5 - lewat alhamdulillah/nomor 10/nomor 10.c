/* Ditulis oleh:
Nrp: 5025201090
Nama: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 1 november 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/* membuat program yang menggunakan persamaan Van der Waals untuk gas untuk membuat file yang menampilkan
 dalam bentuk tabel hubungan antara tekanan dan volume n mol karbon dioksida pada suhu absolut konstan (T).
P adalah tekanan dalam atmosfer dan V adalah volume dalam liter. */

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*untuk menghasilkan output yang diminta, yaitu p (tekanan), diperlukan rumus. tetai, rumus yang diberikan di buku sedikit dimanipulasi untuk mendapatkan nilai p. untuk menjalankan perumusan, kita menggunakan konstanta-konstanta dan variabel2 input.

lalu, kita menggunakan loop. volume awal dijadikan nilai inisialisasi dan volume akhir dijadikan nilai sentinel. laulu masukkan ke dalam perumusan dan dikeluarkan output berupa volume dan tekanan pada setiap volume.
*/

/*Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem
Problem Constant:
#define A 3.592
#define B 0.0427
#define R 0.08206
*/
//Problem Inputs:
//double n; // input - jumlah mol karbon dioksida
//double suhu_kelvin;//input - suhu kelvin
//double volume_awal;// input - volume awal
//double volume_akhir; // input - volume akhir
//double kenaikan_suhu; // input - kenaikan suhu per baris

//Problem Outputs:
//double i; // variabel inisialisasi
//double p; // variabel sentinel - output

//Program Variables:
//double i; // variabel inisialisasi
//double p; // variabel sentinel - output

//Relevant Formulas:
// p = (((n x R x T) / (V - (b x n))) - ((a * n^2) / (i^2)) * 1000 );

/*DESIGN
Initial Algorithm:
Memasukkan data jumlah mol karbon
Memasukkan data suhu kelvin
memasukkan data volume awal
memasukkan data volume akhir
memasukkan data kenaikan volume per baris
mengaluarkan output printf "volume  pressure" sebagi penamaan di tabel
menggunakan loop
menggunakan rumus mencari tekanan dalam loop
mengeluarkan output printf nilai volume dan juga hasil perhitungan tekanan
penggunaan rumus dan output nilai volume dan juga hasil perhitungan tekanan berulang-ulang sampai batas yang dimasukkan oleh user berupa volume akhir
Menghitung harga total tanah
Menampilkan harga total tanah

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
// p = ((n * R * suhu_kelvin) / (i - (B * n))) - ((A * n * n) / (i * i));

/*IMPLEMENTATION
untuk menghasilkan output yang diminta, yaitu p (tekanan), diperlukan rumus.
 tetapi, rumus yang diberikan di buku sedikit dimanipulasi untuk mendapatkan nilai p.
untuk menjalankan perumusan, kita menggunakan konstanta-konstanta dan variabel2 input.

input data yang didapat, melalui statement sebagai berikut :

printf("Masukkan jumlah mol karbon dioksida : ");
scanf("%lf", &n);

//User memasukkan data suhu kelvin
printf("Masukkan suhu kelvin: ");
scanf("%lf", &suhu_kelvin);

//user memasukkan data volume awal
printf("masukkan volume awal : ");
scanf("%lf", &volume_awal);

//user memasukkan data volume akhir
printf("masukkan volume akhir : ");
scanf("%lf", &volume_akhir);

//user memasukkan kenaikan suhu per baris
printf("masukkan kenaikan suhu per baris : ");
scanf("%lf", &kenaikan_suhu);

lalu, kita ingin mengeluarkan output seperti berupa tabel. maka dikeluarkan statement :

printf("volume     pressure");

untuk mencetak judul tabel bagian atas

lalu, kita menggunakan loop. volume awal dijadikan nilai inisialisasi dan volume akhir dijadikan nilai sentinel. lalu masukkan ke dalam perumusan dan dikeluarkan output berupa volume dan tekanan pada setiap volume.
dengan statement seperti berikut :

for(i=volume_awal; i <= volume_akhir; i += kenaikan_suhu){
        //rumus
    p = (((n * R * suhu_kelvin) / (i - (B * n))) - ((A * n * n) / (i * i))) * 1000;


    printf("\n%.lf        %lf", i, p);
}

program pun selesai dijalankan. setelah itu, output ditampilkan kepada user
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define A 3.592
#define B 0.0427
#define R 0.08206

int main(){
double n; // input - jumlah mol karbon dioksida
double suhu_kelvin;//input - suhu kelvin
double volume_awal;// input - volume awal
double volume_akhir; // input - volume akhir
double i; // variabel inisialisasi
double p; // variabel sentinel - output
double kenaikan_suhu; // input - kenaikan suhu per baris


//User memasukkan data jumlah mol karbon
printf("Masukkan jumlah mol karbon dioksida : ");
scanf("%lf", &n);

//User memasukkan data suhu kelvin
printf("Masukkan suhu kelvin: ");
scanf("%lf", &suhu_kelvin);

//user memasukkan data volume awal
printf("masukkan volume awal : ");
scanf("%lf", &volume_awal);

//user memasukkan data volume akhir
printf("masukkan volume akhir : ");
scanf("%lf", &volume_akhir);

//user memasukkan kenaikan suhu per baris
printf("masukkan kenaikan suhu per baris : ");
scanf("%lf", &kenaikan_suhu);

// menampilkan tabel bagian atas
printf("volume     pressure");

// dimasukkan ke dalam loop

for(i=volume_awal; i <= volume_akhir; i += kenaikan_suhu){
        //rumus
    p = (((n * R * suhu_kelvin) / (i - (B * n))) - ((A * n * n) / (i * i))) * 1000;


    printf("\n%.lf        %lf", i, p);
}


return 0;


}
/*
Masukkan jumlah mol karbon dioksida : 0.02
Masukkan suhu kelvin: 300
masukkan volume awal : 400
masukkan volume akhir : 600
masukkan kenaikan suhu per baris : 50
volume     pressure
400        1.230894
450        1.094128
500        0.984716
550        0.895197
600        0.820597

TESTING
Dalam kasus uji tersebut, dimasukkan data inputan berupa jumlah mol karbon dioksida senilai 0.02, temperatur suhu kelvin senilai 300, volume awal sebesar 400, volume akhir sebesar 600, dan kenaikan suhu per baris senilai 50.lalu program ini mengeluarkan output berupa baris per baris seperti tabel.
program mengeuarkan output volume 400 pressure 1.230894
volume 450 pressure 1.094128. dibaris berikutnya, volume 500 pressure 0.984716. dibaris berikutnya, volume 550 pressure 0.895197
. dibaris berikutnya, volume 600 pressure 0.820597.
*/
