#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int days; // input - hari ke-n
    int cases; // output - total kasus yang terjadi pada hari ke-n

    // dapatkan data hari
    printf("Masukkan hari ke :");
    scanf("%d",&days);
    // menghitung total kasus yang terjadi pada hari ke-n
    cases = 40000 / (1+(39999 * exp(-0.24681*days)));
    // menampilkan hasil
    printf("Pada hari ke -%d, total kasus diprekdisi menjadi %d kasus",days,cases);
    return 0;
}

/*
dibuat oleh :
    1. nama : luthfiyyah hanifah
       nrp  : 5025201090
*/

/*
tanggal
    pembuatan : 18 oktober 2020
*/

/*
variabel-variabel yang digunakan :
1. days = input hari ke-n
2. cases= output yang dihasilkan dari perumusan, menampilkan jumlah kasus di hari ke-n
*/

/*
algoritma program
1. program berjalan
2. menampilkan perintah kepada pengguna untuk memasukkan nilai days
3. menmenerima data dari pengguna berupa nilai dari variabel days
4. menghitung nilai cases menggunakan formula
5. menampilkan nilai cases yang telah dihitung
6. program berhenti
 */
