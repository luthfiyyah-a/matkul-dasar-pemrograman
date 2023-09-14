
/* Ditulis oleh:
Nrp: 5025201090
Nama : luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 20 desember 2020
perubahan : 21 desember 2020

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
menghitung suatu huruf dalam sebuah string
*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
memanggil fungsi count, fungsi count melakukan rekursi, lalu fungsi count mengembalikan ilai dan ditampinkan kepada pengguna 
*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

// header
// #include <stdio.h>
// #include "count.h"

//Problem Inputs:
//     char str[80];        /* string to be processed */
//     char target;         /* character counted */

//Problem Outputs:
//	count(target, str)
	
/*DESIGN
Initial Algorithm:
1. menginput string dari pengguna
2. menginput target huruf dari pengguna
3. menampilkan output dari hasil pemanggilan fungsi count

Step 3 refinement /*di sini di data, hal apa saja yang anda perbaiki dari algoritma anda, dan apa perbaikannya*/
//tidak ada

/*IMPLEMENTATION
	
	// mengambil input string dari user
     printf("Enter up to 79 characters.\n");
     gets(str);           /* read in the string */
    
    // mengambil input target dari user
//     printf("Enter the character you want to count: ");
//     scanf("%c", &target);
   
	// menampilkan input dari hasil pemanggilan fungsi count
//     printf("The number of occurrences of %c in\n\"%s\"\nis %d\n",
//            target, str, count(target, str));

//*/


/*
 * Counting occurrences of a letter in a string.
 */

#include <stdio.h>
#include "count.h"
int count(char ch, const char *str);
 int
 main(void)
 {
     char str[80];        /* string to be processed */
     char target;         /* character counted */
//     int my_count;
   
     printf("Enter up to 79 characters.\n");
     gets(str);           /* read in the string */
   
     printf("Enter the character you want to count: ");
     scanf("%c", &target);
   
//     my_count = count(target, str);
     printf("The number of occurrences of %c in\n\"%s\"\nis %d\n",
            target, str, count(target, str));
              return (0);
 }

 
 /* TESTING
 Enter up to 79 characters.
 this is the string I am testing
 Enter the character you want to count: t
 The number of occurrences of t in
 "this is the string I am testing" is 5
 
 
 pengguna memasukkan input string "this is the string I am testing". pengguna mengiput t sebagai karakter yang ingin dihitung. lalu program memanggil fungi count dan menampilkan hasilnya. progam menampilkan hasi " The number of occurrences of t in
 "this is the string I am testing" is 5"
 */
