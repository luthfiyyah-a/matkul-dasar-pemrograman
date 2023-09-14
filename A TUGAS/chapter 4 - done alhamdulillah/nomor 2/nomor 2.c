/*
ditulis oleh :
    nama : luthfiyyah hanifah amari
    nrp : 5025201090
*/

/*
tanggal
    pembuatan : 25 oktober 2020
*/

/*
variabel-variabel yang digunakan :
    1. wt_lb
    2. ht_lb
    3. bmi
*/

/*
algoritma pemrograman :
    1. program dimulai
    2. memperkenalkan program kepada user
    3. menginput nilai wt_lb (berat)
    4. menginput nilai ht_lb (tinggi)
    5. mengkalkulasi nilai bmi
    6. membagi nilai bmi ke dalam beberapa kondisi
    7. menampilkan hasil kepada user sesuai kondisi yang telah dikelompokkan
    8. program berhenti

*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    double wt_lb; // input - berat dalam pound
    double ht_lb; // input - tinggi dalam inci
    double bmi; // variabel perhitungan

    // perkenalan program
    printf("program ini dirancang untuk menghitung indeks massa tubuh dan mengategorikannya\n");

    // menginput nilai wb_lb (berat)
    printf("masukkan berat anda dalam pound : ");
    scanf("%lf",&wt_lb);

    // menginput nilai ht_lb (tinggi)
    printf("masukkan tinggi anda dalam inci : ");
    scanf("%lf", &ht_lb);

    // mengkalkulasi bmi
    bmi = (703 * wt_lb) / pow(ht_lb,2);

    // memasukkan ke dalam berbagai kondisi, dan mengeluarkan output
    if(bmi < 18.5){
        printf("status : berat badan kurang");
    }else if(bmi >= 18.5 && bmi <= 24.9){
        printf("status : normal");
    }else if(bmi >= 25.0 && bmi <= 29.9){
        printf("status : berat badan berlebih");
    }else if(bmi > 30){
        printf("status : obesitas");
    }

    return 0;
}
