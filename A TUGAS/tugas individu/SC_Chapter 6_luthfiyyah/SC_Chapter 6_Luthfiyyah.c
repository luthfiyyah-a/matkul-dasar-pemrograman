/*

Nama : luthfiyyah hanifah amari
nrp : 5025201090

*/

// Masalah
/*
Anda sedang mengerjakan masalah di mana Anda harus menampilkan hasil Anda sebagai rasio integer;
oleh karena itu, Anda harus dapat melakukan penghitungan dengan pecahan umum dan get
hasil yang merupakan pecahan umum dalam bentuk tereduksi. Anda ingin menulis program itu
akan memungkinkan Anda untuk menambah, mengurangi, mengalikan, dan membagi beberapa pasang pecahan umum.


//Analisis
/*
Karena masalah menentukan bahwa hasil harus dalam bentuk yang diperkecil, kita perlu
untuk menyertakan fungsi pengurang pecahan selain fungsi komputasi. Jika
kita memecah masalah menjadi bagian-bagian yang cukup kecil, seharusnya ada kesempatan untuk melakukannya
menggunakan kembali kode dengan memanggil fungsi yang sama beberapa kali. Analisis mendalam tentang
masalah sebenarnya didistribusikan melalui pengembangan fungsi-fungsi ini.
*/

//Persyaratan Data
//Masukan masalah
//int n1, d1 / * pembilang, penyebut pecahan pertama * /
//int n2, d2 / * pembilang, penyebut pecahan kedua * /
//char op / * operator aritmatika + - * atau / * /
//char lagi / * y atau n tergantung keinginan pengguna untuk melanjutkan * /
//Keluaran Masalah
//int n_ans / * pembilang jawaban * /
//int d_ans / * penyebut jawaban * /


//Rancangan
//Saat kami mengembangkan algoritme melalui penyempurnaan bertahap, kami akan mencari contoh
//di mana definisi fungsi baru akan menyederhanakan desain.
/*Algoritma Awal 
1. Ulangi selama pengguna ingin melanjutkan.
2. Cari soal pecahan.
3. Hitung hasilnya.
4. Menampilkan masalah dan hasil.
5. Periksa apakah pengguna ingin melanjutkan.
*/


/*Langkah 2 Perbaikan
2.1 Dapatkan pecahan pertama.
2.2 Dapatkan operator.
2.3 Dapatkan pecahan kedua.
Langkah 3 Perbaikan
3.1 Pilih tugas berdasarkan operator:
'+': 3.1.1 Tambahkan pecahan.
'-': 3.1.2 Tambahkan pecahan pertama dan negasi pecahan kedua.
'*': 3.1.3 Mengalikan pecahan.
'/': 3.1.4 Kalikan pecahan pertama dan kebalikan dari pecahan kedua.
3.2 Taruh pecahan hasil dalam bentuk tereduksi.
Langkah 3.2 Perbaikan
3.2.1 Tentukan pembagi persekutuan terbesar (gcd) dari pembilang dan penyebut.
3.2.2 Bagilah pembilang dan penyebutnya dengan gcd.
*/

/*
implementasi
Untuk langkah 2.1, dan 2.3, kita akan menggunakan fungsi scan_fraction dari Gambar 6.10. Kita
akan menulis subprogram fungsi baru untuk get_operator (langkah 2.2), add_fractions (langkah 3.1.1 dan 3.1.2), multiply_fractions (langkah 3.1.3 dan 3.1.4),
reduce_fraction (langkah 3.2), find_gcd (langkah 3.2.1), dan print_fraction (bagian
dari langkah 4). Akibatnya, fungsi pengkodean utama cukup mudah. Gambar 6.15
menunjukkan sebagian besar program; Namun, fungsi multiply_fractions dan
find_gcd telah ditinggalkan sebagai latihan. Sebagai gantinya, kami telah memasukkan rintisan,
fungsi kerangka yang memiliki komentar dan tajuk lengkap tetapi hanya
menetapkan nilai ke parameter keluarannya untuk memungkinkan pengujian sistem parsial.
Debugging dan pengujian sistem akan dijelaskan di Bagian 6.7.
*/

/*
* Adds, subtracts, multiplies and divides common fractions, displaying
* results in reduced form.
*/

#include <stdio.h>
#include <stdlib.h> /* provides function abs */

/* Function prototypes */
void scan_fraction(int *nump, int *denomp);

char get_operator(void);

void add_fractions(int n1, int d1, int n2, int d2,
int *n_ansp, int *d_ansp);

void multiply_fractions(int n1, int d1, int n2, int d2,
int *n_ansp, int *d_ansp);

int find_gcd (int n1, int n2);

void reduce_fraction(int *nump, int *denomp);

void print_fraction(int num, int denom);

int
main(void)
{
int n1, d1; /* numerator, denominator of first fraction */
int n2, d2; /* numerator, denominator of second fraction */
char op; /* arithmetic operator + - * or / */
char again; /* y or n depending on user's desire to continue */
int n_ans, d_ans; /* numerator, denominator of answer */
/* While the user wants to continue, gets and solves arithmetic
problems with common fractions */
do {
/* Gets a fraction problem */
scan_fraction(&n1, &d1);
op = get_operator();

scan_fraction(&n2, &d2);

 /* Computes the result */
 switch (op) {
 case '+':
 add_fractions(n1, d1, n2, d2, &n_ans, &d_ans);
 break;

 case '-':
 add_fractions(n1, d1, -n2, d2, &n_ans, &d_ans);
 break;

 case '*':
 multiply_fractions(n1, d1, n2, d2, &n_ans, &d_ans);
 break;

 case '/':
 multiply_fractions(n1, d1, d2, n2, &n_ans, &d_ans);
 }
 reduce_fraction(&n_ans, &d_ans);

 /* Displays problem and result */
 printf("\n");
 print_fraction(n1, d1);
 printf(" %c ", op);
 print_fraction(n2, d2);
 printf(" = ");
 print_fraction(n_ans, d_ans);

 /* Asks user about doing another problem */
 printf("\nDo another problem? (y/n)> ");
 scanf(" %c", &again);
 } while (again == 'y' || again == 'Y');
 return (0);
 }
 /* Insert function scan_fraction from Fig. 6.10 here. */

 /*
 * Gets and returns a valid arithmetic operator. Skips over newline
 * characters and permits reentry of operator in case of error.
*/
char
 get_operator(void)
 {
 char op;

 printf("Enter an arithmetic operator (+,-,*, or /)\n> ");
 for (scanf("%c", &op);
 op != '+' && op != '-' &&
 op != '*' && op != '/';
 scanf("%c", &op)) {
 if (op != '\n')
 printf("%c invalid, reenter operator (+,-, *,/)\n> ", op);
 }
 return (op);
 }

 /*
 * Adds fractions represented by pairs of integers.
 * Pre: n1, d1, n2, d2 are defined;
 * n_ansp and d_ansp are addresses of type int variables.
 * Post: sum of n1/d1 and n2/d2 is stored in variables pointed
 * to by n_ansp and d_ansp. Result is not reduced.
 */
void
 add_fractions(int n1, int d1, /* input - first fraction */
 int n2, int d2, /* input - second fraction */
 int *n_ansp, int *d_ansp) /* output - sum of 2 fractions*/
 {
  int denom, /* common denominator used for sum (may not be least) */
numer, /* numerator of sum */
 sign_factor; /* -1 for a negative, 1 otherwise */

 /* Finds a common denominator */
denom = d1 * d2;

 /* Computes numerator */
 numer = n1 * d2 + n2 * d1;

 /* Adjusts sign (at most, numerator should be negative) */


if (numer * denom >= 0)
 sign_factor = 1;
 else
 sign_factor = -1;

 numer = sign_factor * abs(numer);
 denom = abs(denom);

 /* Returns result */
 *n_ansp = numer;
 *d_ansp = denom;
 }

 /*
 ***** STUB *****
 * Multiplies fractions represented by pairs of integers.
 * Pre: n1, d1, n2, d2 are defined;
 * n_ansp and d_ansp are addresses of type int variables.
 * Post: product of n1/d1 and n2/d2 is stored in variables pointed
 * to by n_ansp and d_ansp. Result is not reduced.
 */
 void
 multiply_fractions(int n1, int d1, /* input - first fraction */
 int n2, int d2, /* input - second fraction */
 int *n_ansp, /* output - */
 int *d_ansp) /* product of 2 fractions */
 {
 /* Displays trace message */
 printf("\nEntering multiply_fractions with\n");
 printf("n1 = %d, d1 = %d, n2 = %d, d2 = %d\n", n1, d1, n2, d2);
 /* Defines output arguments */
 *n_ansp = 1;
 *d_ansp = 1;
 }

 /*
 ***** STUB *****
 * Finds greatest common divisor of two integers
 */
 Int
find_gcd (int n1, int n2) /* input - two integers */
 {
 int gcd;

 /* Displays trace message */
 printf("\nEntering find_gcd with n1 = %d, n2 = %d\n", n1, n2);

 /* Asks user for gcd */
 printf("gcd of %d and %d?> ", n1, n2);
 scanf("%d", &gcd);

 /* Displays exit trace message */
 printf("find_gcd returning %d\n", gcd);
 return (gcd);
 }

 /*
 * Reduces a fraction by dividing its numerator and denominator by their
 * greatest common divisor.
 */
 void
 reduce_fraction(int *nump, /* input/output - */
 int *denomp) /* numerator and denominator of fraction */
 {
 int gcd; /* greatest common divisor of numerator & denominator */

 gcd = find_gcd(*nump, *denomp);
 *nump = *nump / gcd;
 *denomp = *denomp / gcd;
 }

 /*
 * Displays pair of integers as a fraction.
 */
 void
 print_fraction(int num, int denom) /* input - numerator & denominator */
 {
 printf("%d/%d", num, denom);
 }

 /* 
Enter a common fraction as two integers separated by a slash> 3/-4
Invalid—denominator must be positive
Enter a common fraction as two integers separated by a slash> 3/4
Enter an arithmetic operator (+,-,*, or /)
> +
Enter a common fraction as two integers separated by a slash> 5/8
Entering find_gcd with n1 = 44, n2 = 32
gcd of 44 and 32?> 4
find_gcd returning 4
3/4 + 5/8 = 11/8
Do another problem? (y/n)> y
Enter a common fraction as two integers separated by a slash> 1/2
Enter an arithmetic operator (+,-,*, or /)
> 5
5 invalid, reenter operator (+,-,*,/)
> *
Enter a common fraction as two integers separated by a slash> 5/7
Entering multiply_fractions with
n1 = 1, d1 = 2, n2 = 5, d2 = 7
Entering find_gcd with n1 = 1, n2 = 1
gcd of 1 and 1?> 1
find_gcd returning 1
1/2 * 5/7 = 1/1
Do another problem? (y/n)> n
 */
 
 /* Menguji */
/*
Kami telah memilih untuk meninggalkan sebagian dari sistem pecahan kami untuk Anda tulis, tetapi kami
masih ingin menguji fungsi-fungsi yang lengkap. Kami telah memasukkan sebuah rintisan
untuk setiap fungsi belum selesai. Setiap rintisan mencetak pesan identifikasi
dan memberikan nilai ke parameter keluarannya. Untuk tujuan pengujian, kami membuat file
rintisan find_gcd interaktif sehingga penguji program dapat memasukkan pembagi persekutuan terbesar yang benar dan melihat apakah ini mengarah ke hasil yang benar.
Gambar 6.16 menunjukkan jalannya program dalam bentuknya yang sekarang. Perhatikan kapan
kita memilih operator + dan memasukkan pembagi persekutuan terbesar yang benar secara interaktif, itu
hasilnya benar. Namun, saat kita memilih operator *, meskipun program melanjutkan eksekusi dengan memanggil stub, hasilnya salah karena stub untuk fungsi multiply_fractions selalu mengembalikan nilai pembilang dan penyebut 1.
*/















