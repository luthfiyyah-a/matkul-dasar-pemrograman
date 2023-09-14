#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
Input Format
Untuk setiap satu set perintah:
1. Jika pilihan adalah 1, maka baris selanjutnya inputkan sebuah bilangan N yang menyatakan ukuran email
2. Jika pilihan adalah 2, maka baris selanjutnya inputkan sebuah bilangan I yang merepresentasikan nomor bulan.
	Baris setelahnya, inputkan sebuah bilangan J yang merepresentasikan posisi tanggal 1 di minggu pertama dalam kalender
3. Jika pilihan adalah 0, akhiri program.

Constraints
15 <= N <= 31
 1 <= I <= 12
 1 <= J <= 7

Output Format
Bentuk visual dari email dan kalender
*/

int main() {
	
	int O; // pilihan antara email atau kalender
	int N; // ukuran email yang harus dibuat
	int I; // nomor bulan
	int J;
		
		
	do{
	// mengabil input pertama
	scanf("%d", &O);

		// Jika pilihan adalah 1, maka baris selanjutnya inputkan sebuah bilangan N yang menyatakan ukuran email
		if(O = 1){
			scanf("%d", &N);
			printf("hello world");
			
			// membuat surat dengan menggunakan array
		}
		
		// Jika pilihan adalah 2, maka baris selanjutnya inputkan sebuah bilangan I yang merepresentasikan nomor bulan
		else if(O = 2){
			scanf("%d", &I);
			printf("hello world");
			
			// Baris setelahnya, inputkan sebuah bilangan J yang merepresentasikan posisi tanggal 1 di minggu pertama dalam kalender
			scanf("%d", &J);
		}	
		
		else if(O = 0){
			break;
		}
			
	}
	
	// jika diinput 0, maka program berhenti
	while(O != 0);
	
	return 0;
}


//		#  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #
//		#  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #
//		#     #  #  #  #  #  #  #  #  #  #  #  #     #
//		#     #  #  #  #  #  #  #  #  #  #  #  #     #
//		#           #  #  #  #  #  #  #  #           #
//		#           #  #  #  #  #  #  #  #           #
//		#                 #  #  #  #                 #
//		#                 #  #  #  #                 #
//		#                                            #
//		#                                            #
//		#                                            #
//		#                                            #
//		#                                            #
//		#                          FROM : 051194076  #
//		#                                            #
//		#  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #


//		# #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #
//		#  #  #  #  #  #  #  #  #  #  #  #  #  #  #  # #
//		#     #  #  #  #  #  #  #  #  #  #  #  #  #    #
//		#     #  #  #  #  #  #  #  #  #  #  #  #  #    #
//		#           #  #  #  #  #  #  #  #  #          #
//		#           #  #  #  #  #  #  #  #  #          #
//		#                 #  #  #  #  #                #
//		#                 #  #  #  #  #                #
//		#                       #                      #
//		#                                              #
//		#                                              #
//		#                                              #
//		#                                              #
//		#                            FROM : 051194076  #
//		#                                              #
//		#  #  #  #  #  #  #  #  #  # #  #  #  #  #  #  #
