#include <iostream>
#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char string[100];
	int i; // digunakan pada looping pertama
	int j; // digunakan pada looping kedua
	int panjang_string;
	
	// mengambil input
	gets(string);
	
	// mendapatkan panjang string
	panjang_string = strlen(string);
	
	// mengubah setiap kareakter menjadi huruf kecil
	for(int i = 0; i < panjang_string; i++){
		
			// mengubah dari huruf kapital (bila ada) menjadi huruf kecil
			if(string[i] == 'A'){
				string[i] = 'a';
			}else if(string[i] == 'B'){
				string[i] = 'b';
			}else if(string[i] == 'C'){
				string[i] = 'c';
			}else if(string[i] == 'D'){
				string[i] = 'd';
			}else if(string[i] == 'E'){
				string[i] = 'e';
			}else if(string[i] == 'F'){
				string[i] = 'f';
			}else if(string[i] == 'G'){
				string[i] = 'g';
			}else if(string[i] == 'H'){
				string[i] = 'h';
			}else if(string[i] == 'I'){
				string[i] = 'i';
			}else if(string[i] == 'J'){
				string[i] = 'j';
			}else if(string[i] == 'K'){
				string[i] = 'k';
			}else if(string[i] == 'L'){
				string[i] = 'l';
			}else if(string[i] == 'M'){
				string[i] = 'm';
			}else if(string[i] == 'N'){
				string[i] = 'n';
			}else if(string[i] == 'O'){
				string[i] = 'o';
			}else if(string[i] == 'P'){
				string[i] = 'p';
			}else if(string[i] == 'Q'){
				string[i] = 'q';
			}else if(string[i] == 'R'){
				string[i] = 'r';
			}else if(string[i] == 'S'){
				string[i] = 's';
			}else if(string[i] == 'T'){
				string[i] = 't';
			}else if(string[i] == 'U'){
				string[i] = 'u';
			}else if(string[i] == 'V'){
				string[i] = 'v';
			}else if(string[i] == 'W'){
				string[i] = 'w';
			}else if(string[i] == 'X'){
				string[i] = 'x';
			}else if(string[i] == 'Y'){
				string[i] = 'y';
			}else if(string[i] == 'Z'){
				string[i] = 'z';
			}
		}
		
		// mengubah huruf kecil menjadi huruf kapital bila terletak setelah _
	for(int i = 0; i < panjang_string; i++){

		if(string[i] == '_'){
			if(string[i+1] == 'a'){
				string[i+1] = 'A';
			}else if(string[i+1] == 'b'){
				string[i+1] = 'B';
			}else if(string[i+1] == 'c'){
				string[i+1] = 'C';
			}else if(string[i+1] == 'd'){
				string[i+1] = 'D';
			}else if(string[i+1] == 'e'){
				string[i+1] = 'E';
			}else if(string[i+1] == 'f'){
				string[i+1] = 'F';
			}else if(string[i+1] == 'g'){
				string[i+1] = 'G';
			}else if(string[i+1] == 'h'){
				string[i+1] = 'H';
			}else if(string[i+1] == 'i'){
				string[i+1] = 'I';
			}else if(string[i+1] == 'j'){
				string[i+1] = 'J';
			}else if(string[i+1] == 'k'){
				string[i+1] = 'K';
			}else if(string[i+1] == 'l'){
				string[i+1] = 'L';
			}else if(string[i+1] == 'm'){
				string[i+1] = 'M';
			}else if(string[i+1] == 'n'){
				string[i+1] = 'N';
			}else if(string[i+1] == 'o'){
				string[i+1] = 'O';
			}else if(string[i+1] == 'p'){
				string[i+1] = 'P';
			}else if(string[i+1] == 'q'){
				string[i+1] = 'Q';
			}else if(string[i+1] == 'r'){
				string[i+1] = 'R';
			}else if(string[i+1] == 's'){
				string[i+1] = 'S';
			}else if(string[i+1] == 't'){
				string[i+1] = 'T';
			}else if(string[i+1] == 'u'){
				string[i+1] = 'U';
			}else if(string[i+1] == 'v'){
				string[i+1] = 'V';
			}else if(string[i+1] == 'w'){
				string[i+1] = 'W';
			}else if(string[i+1] == 'x'){
				string[i+1] = 'X';
			}else if(string[i+1] == 'y'){
				string[i+1] = 'Y';
			}else if(string[i+1] == 'z'){
				string[i+1] = 'Z';
			}
		
		}
	}
	printf("%s", string);
	return 0;
}
