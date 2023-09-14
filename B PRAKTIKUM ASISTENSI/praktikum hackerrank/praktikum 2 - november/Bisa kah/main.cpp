#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
narasi soal
Potter adalah seorang matematikawan jenius. Ia dapat menjadi semangat apabila ia diberi angka cantik.
Angka cantik adalah angka yang dapat dibentuk dari empat bilangan kuadrat.
Tugas anda adalah menentukan, dari N angka yang akan disodorkan kepada Potter, angka-angka mana yang dapat membuat potter semangat.

Input Format
Baris pertama berisi sebuah bilangan N yang menyatakan jumlah angka. N baris berikutnya berisi Ai, angka yang akan ditawarkan pada Potter.

Constraints
1=N=10^6 
1=Ai=10^6

Output Format
Untuk setiap angka yang ditawarkan, apabila angka tersebut angka cantik outputkan "POTTER SEMANGAT" tanpa tanda petik.
Apabila bukan angka cantik, outputkan "POTTER LEMES" tanpa tanda petik.
*/

int main() {
    
    int n; // input
    int i;
    
    // mengambil data pertama
    scanf("%d", &n);
    
    /* idenya, 
    karena sy sempat mengira bahwa semua angka adalah angka cantik, yakni dapat disusun dari 4 bilangan kuadrat.
    output yang dikeluarkan akan selalu "POTTER SEMANGAT" dengan jumlah yang sesuai dengan n. 
    dimana n, adalah input  pertama
    */
    
    char array[n];
    
    for(i = 0; i < n; i++){
        scanf("%s", &array[i]);
    }
    
    for(i = 0; i < n; i++){
        printf("POTTER SEMANGAT\n");
    }
    
    return 0;
}
