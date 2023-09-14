/* Ditulis oleh:
Nrp: 5025201090
Nama: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 1 november 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/* Tabel di bawah ini mencantumkan perkiraan dalam meter dengan panjang gelombang terpanjang
setiap wilayah spektrum elektromagnetik.
Kolom terakhir memberikan panjang panjag seperti yang akan direpresentasikan dalam notasi ilmiah C. Kamu bisa lihat itu
"E" akan dibaca sebagai "dikalikan 10 pangkat." Angka dalam format ini
dapat digunakan sebagai konstanta. Mereka dapat dipindai menggunakan placeholder% lf.
Namun, untuk mengeluarkan angka dalam notasi ilmiah, gunakan placeholder% e.
Perhatikan bahwa cahaya tampak merupakan sebagian kecil dari spektrum penuh.
Menulis sebuah
program yang berulang kali meminta pengguna untuk memasukkan panjang gelombang secara ilmiah
notasi (atau nol untuk keluar) dan menampilkan untuk setiap entri panjang gelombang dan
wilayah spektrum tempat ia berada. */

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
ambil data yang diperlukan dari user, lalu memprosesnya ke dalam ketentuan batas batas yang ada. lalu, program meminta berkalli kali menggunakan loop hingga user memilih 0. output yang disediakan pada program ini sesuai dengan tabel yang telah disediakan dan bergantung pada inputan user.

*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

char user[3]; // input user
double user1; // input user
double user2; // input user
double pengali; //variabel tambahan
double jmlh_pangkat; // variabel tambahan
double inputuser; // terjemahan dari bahasa scientific


//User memasukkan data  dari user
printf("masukkan kode : ");
scanf("%lf%s%lf", &user1, &user, &user2);

// terjemahkan bahasa scientific
inputuser = user1 * (pow(10,user2));

do{

//User memasukkan data  dari user
printf("masukkan kode : ");
scanf("%lf%s%lf", &user1, &user, &user2);

// terjemahkan bahasa scientific
inputuser = user1 * (pow(10,user2));


// dimasukkan ke dalam percabangan
if(inputuser <=  ( 3 * (pow(10, -11)))){
        printf("gamma ray");
}else if(inputuser <= ( 3 * (pow(10, -9)))){
    printf("xray");
}else if(inputuser <= ( 4 * (pow(10, -7)))){
    printf("ultra violet");
}else if(inputuser <= ( 7 * (pow(10, -7)))){
    printf("visible");
}else if(inputuser <= ( 1.4 * (pow(10, -5)))){
    printf("infrared");
}else if( inputuser <= 0.1){
    printf("microwave");
}else {
    printf("radio wave");
}
}while(user1 = 0);
printf("program selesai");




return 0;


}

