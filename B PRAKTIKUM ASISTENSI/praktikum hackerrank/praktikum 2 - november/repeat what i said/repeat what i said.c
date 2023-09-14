#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	

/*

# narasi soal :
	Elvega atau biasa dipanggil El adalah seseorang yang gabut.
Dia suka membuat tantangan untuk teman-temanya yang dianggap jago dan menjadikan mereka sebagai musuh untuk dirinya.
Minggu ini selain menantang Rani, El akan menantang seseorang lagi. 
Kali ini yang ditantang oleh El adalah Ydra seorang yang ahli dalam bidang pola dan bahasa. 
El akan membacakan sebuah paragraf puisi kepada Ydra.
El kemudian akan meminta Ydra untuk mengidentifikasi kalimat dan katanya.

Berdasarkan bahasa planet dimana El dan Ydra tinggal sebuah kata adalah sekumpulan huruf alphabet, 
sementara kalimat adalah kumpulan 1 atau lebih kata yang diakhiri dengan salah satu tanda baca{'.', '?', '!'},

Untuk membuktikan bahwa Ydra bisa menyelesaikan tantanganya El akan mengajukan t pertanyaan. 
Pertanyaan yang diajukan El ada 2 tipe sebagai berikut:

kata i
kalimat i

i adalah index dari kata yang harus dicari oleh Ydra. Karena El seseorang yang cinta budaya tanah airnya maka index nya akan dimulai dari 0. El juga sengaja menanyakan case dengan index yang ngawur untuk mengetes Ydra. Kalau index yang diberikan El ngawur maka Ydra harus menjawab dengan "Ehe te nandayo". Jangan berharap puisi El bagus ya :D
*/

/*
# Input Format
Baris pertama adalah puisi dari El yang terususun atas alphabet dan tanda baca.
Baris kedua adalah t jumlah kasus uji yang merepresentasikan jumlah pertanyaan EL.
t baris berikutnya berupa pertanyaan dari EL dan di ikuti bilangan bulat i yaitu index dari kata atau kalimat yang ditanyakan El.

# Constraints
jumlah huruf pada tiap kata <= 10
jumlah kata pada tiap kalimat <= 10
jumlah kalimat pada puisi <= 10
1 <= t <= 20

# Output Format
Untuk setiap kasus uji keluarkan kata atau kalimat yang ditanyakan El.
*/


/*
algoritma :
1. mengambil input puisi
2. mengambil input t jumlah kasus uji / jumlah pertanyaan
3. mengambil input pertanyaan secara berulang sesuai dengan t

4. jika inputnya kata, maka program menampilkan kata
5. mendeteksi suatu kalimat dengan cara mencari " " (spasi) sebagi acuan. " " (spasi) menjadi tanda bahwa kalimat setelahnya adalah kata
6. kata pertama (indeks 0) tidak menjadikan " " (spasi) sebagai acuan.
7. program akan mencari spasi terdekat setelahnya. jadi program akan mencari 2 spasi.
8. mendeteksi karakter antara 2 spasi tersebut, lalu mendapat sebuah kata yang dicari

9. jika inputnya kalimat, maka program menampilkan kalimat
10. mendeteksi suatu kalimat dengan cara mencari karakter '?', '.', dan '!'. karakter tersebut menjadi tanda bahwa setelahnya adalah kalimat
11. kalimat pertama (indeks 0), tidak menggunakan karakter '?', '.', dan '!' sebagai acuan pertama.
12. program akan mencari karakter '?', '.', '!' terdekat setelahnya. jadi, program akan mencari 2 karakter.
13. mendeteksi karakter antara 2 karekter tersebut, lalu mendapat sebuah kalimat yang dicari

14. dalam program ini, digunakan perulangan untuk mencari kata / kalimat secara berulang ulang.

15. menampilkan output sesuai dengan format

*/


int main(){
	
	char puisi[101];
	int t; // jumlah kasus uji / jumlah pertanyaan
	int i;
	char kata_kalimat[100];
	
	// mengambil input puisi
	printf("masukkan puisi : ");
	gets(puisi);
	
	// mengambil input t sebagai jumlah kasus uji / jumlah pertanyaan
	printf("masukkan t :");
	scanf("%d", &t);
		
	// mengambil input pertanyaan secara berulang sesuai dengan t
	for(i = 0; i <= t; i++){
		gets(kata_kalimat);
		puts(kata_kalimat);

/*		
4. jika inputnya kata, maka program menampilkan kata
5. mendeteksi suatu kalimat dengan cara mencari " " (spasi) sebagi acuan. " " (spasi) menjadi tanda bahwa kalimat setelahnya adalah kata
6. kata pertama (indeks 0) tidak menjadikan " " (spasi) sebagai acuan.
7. program akan mencari spasi terdekat setelahnya. jadi program akan mencari 2 spasi.
8. mendeteksi karakter antara 2 spasi tersebut, lalu mendapat sebuah kata yang dicari
*/
	}
	
	
	
	
	
    return 0;
}



