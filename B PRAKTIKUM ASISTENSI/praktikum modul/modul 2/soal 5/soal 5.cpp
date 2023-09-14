#include <iostream>
#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	char string[101];
	int panjang_string; // variabel untuk menampung panjang string / jumlah karakter
	int count_a = 0; // sebagai penghitung jumlah huruf a / A
	int count_i = 0; // sebagai penghitung jumlah huruf i / I
	int count_u = 0; // sebagai penghitung jumlah huruf u / U
	int count_e = 0; // sebagai penghitung jumlah huruf e / E
	int count_o = 0; // sebagai penghitung jumlah huruf o / O
	int a, i, u, e, o;
	
	// mengambil data string yang dimasukkan
	gets(string);
	
	// mendapatkan panjang string
	panjang_string = strlen(string);
	
/* mencari huruf vokal dengan cara membandingkan setiap karakter dengan huruf vokal */
	
	// mencari huruf a
		// melakukan perbandingan karakter berulang kali
		for(a = 0; a < panjang_string; a++){
			//menggunakan if lalu dihitung
			if(string[a] == 'a' || string[a] == 'A'){
				count_a = count_a + 1;
			}
		}
	// mencari huruf i
		// melakukan perbandingan karakter berulang kali
		for(i = 0; i < panjang_string; i++){
			//menggunakan if lalu dihitung
			if(string[i] == 'i' || string[i] == 'I'){
				count_i = count_i + 1;
			}
		}
	// mencari huruf u
		// melakukan perbandingan karakter berulang kali
		for(u = 0; u < panjang_string; u++){
			//menggunakan if lalu dihitung
			if(string[u] == 'u' || string[u] == 'U'){
				count_u = count_u + 1;
			}
		}
	// mencari huruf e
		// melakukan perbandingan karakter berulang kali
		for(e = 0; e < panjang_string; e++){
			//menggunakan if lalu dihitung
			if(string[e] == 'e' || string[e] == 'E'){
				count_e = count_e + 1;
			}
		}
	// mencari huruf o
		// melakukan perbandingan karakter berulang kali
		for(o = 0; o < panjang_string; o++){
			//menggunakan if lalu dihitung
			if(string[o] == 'o' || string[o] == 'O'){
				count_o = count_o + 1;
			}
		}
		
	// mencetak output
	printf("A/a : %d\nI/i : %d\nU/u : %d\nE/e : %d\nO/o : %d", count_a, count_i, count_u, count_e, count_o);
	return 0;
}


