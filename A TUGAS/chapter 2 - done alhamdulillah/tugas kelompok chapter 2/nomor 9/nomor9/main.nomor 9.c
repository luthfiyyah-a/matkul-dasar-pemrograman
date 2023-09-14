#include <stdio.h>
#include <stdlib.h>

/*
program ini berfungsi untuk menghitung waktu yang dibutuhkan untuk memotong rumput di halaman rumah
*/
int main()
{
    int panjang_halaman;
    int lebar_halaman;
    int panjang_rumah;
    int lebar_rumah;
    float luas_rumput;//luas yang didapat dari selisih luas halaman dan luas rumah
    double waktu; //waktu yang diperlukan untuk memotong rumput

    printf("program ini bertujuan untuk menghitung waktu yang digunakan untuk memotong rumput di halaman rumah anda.");
    printf("\nmasukkan panjang halaman anda dalam meter : ");
    scanf("%d", &panjang_halaman);
    printf("\nmasukkan lebar halaman anda dalam meter : ");
    scanf("%d", &lebar_halaman);
    printf("\nmasukkan panjang rumah anda dalam meter : ");
    scanf("%d", &panjang_rumah);
    printf("\nmasukkan lebar rumah anda dalam meter : ");
    scanf("%d", &lebar_rumah);

    luas_rumput = panjang_halaman * lebar_halaman - panjang_rumah * lebar_rumah;
    printf("luas rumput di halaman rumah anda adalah %.1f meter persegi", luas_rumput);

    waktu = luas_rumput / 2;
    printf("\nwaktu yang diperlukan untuk memotong rumput di halaman rumah anda adalah %.2lf detik", waktu);

    return 0;
}
