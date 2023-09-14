#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
/*
narasi soal
Setelah cupang berhasil keluar dari sel penjaranya, ia ingin makan enak terlebih dahulu di dapur para polisi. Oleh karena itu, dia menyusup ke pakaian ganti polisi lalu mencuri salah satu baju polisi, lalu segera menuju dapur polisi.
Cupang ingin secepatnya makan agar penyamarannya tidak terbongkar. Untuk makan dengan cepat, Cupang harus menerombol N polisi di depannya. Polisi di PGBK tidak marah jika diterombol, tetapi dengan satu syarat. Polisi akan memberikan dua angka, A dan B, penerombol diminta untuk menjumlahkannya. Jika benar, maka Cupang boleh menerombol.
Karena memang Cupang tidak pandai dalam angka dan hitung menghitung, ia kesulitan dalam menjawab pertanyaan tiap polisi. Bantulan Cupang menghitung jawaban dari tiap pertanyaan polisi.

Input Format
Baris pertama berisi sebuah bilangan N, yang menyatakan banyaknya polisi yang harus diterombol.
N baris berikutnya, berisi Ai dan Bi, dua buah bilangan yang harus dijumlahkan.

Constraints
1=N=10^6
1=Ai=10^1000
1=Bi=10^1000

Output Format
Untuk setiap pertanyaan, outputkan hasil penjumlahan Ai dan Bi.
*/

    int N; // jumlah pertanyaan
    int i;
    // benar
    
    // mengambil data input N
    scanf("%llu", &N);
    
    // mendeklarasikan array
    int Ai[N];
    int Bi[N];
    int output[N];
    
    // array dalam array
    
    // menginput serta menjumlahkan Ai dan Bi sebanyak N kali
    for(i = 0; i < N; i++){
        scanf("%d\n", &Ai[i]);
        scanf("%d", &Bi[i]);
        
        output[i] = Ai[i] + Bi[i];
    }
    
    // menampilkan output hasil penjumlahan Ai dan Bi sebanyak N kali
    for(i = 0; i < N; i++){
        printf("%d\n", output[i]);
        
    }

    return 0;
}
