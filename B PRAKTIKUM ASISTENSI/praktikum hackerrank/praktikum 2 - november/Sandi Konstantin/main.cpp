#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char string[200];
	int i;
	
	gets(string);
	// mengubah semua huruf menjadi huruf besar
	for(int i = 0; i < 200; i++){
			if(string[i] == 'a'){
				string[i] = 'A';
			}else if(string[i] == 'b'){
				string[i] = 'B';
			}else if(string[i] == 'c'){
				string[i] = 'C';
			}else if(string[i] == 'd'){
				string[i] = 'D';
			}else if(string[i] == 'e'){
				string[i] = 'E';
			}else if(string[i] == 'f'){
				string[i] = 'F';
			}else if(string[i] == 'g'){
				string[i] = 'G';
			}else if(string[i] == 'h'){
				string[i] = 'H';
			}else if(string[i] == 'i'){
				string[i] = 'I';
			}else if(string[i] == 'j'){
				string[i] = 'J';
			}else if(string[i] == 'k'){
				string[i] = 'K';
			}else if(string[i] == 'l'){
				string[i] = 'L';
			}else if(string[i] == 'm'){
				string[i] = 'M';
			}else if(string[i] == 'n'){
				string[i] = 'N';
			}else if(string[i] == 'o'){
				string[i] = 'O';
			}else if(string[i] == 'p'){
				string[i] = 'P';
			}else if(string[i] == 'q'){
				string[i] = 'Q';
			}else if(string[i] == 'r'){
				string[i] = 'R';
			}else if(string[i] == 's'){
				string[i] = 'S';
			}else if(string[i] == 't'){
				string[i] = 'T';
			}else if(string[i] == 'u'){
				string[i] = 'U';
			}else if(string[i] == 'v'){
				string[i] = 'V';
			}else if(string[i] == 'w'){
				string[i] = 'W';
			}else if(string[i] == 'x'){
				string[i] = 'X';
			}else if(string[i] == 'y'){
				string[i] = 'Y';
			}else if(string[i] == 'z'){
				string[i] = 'Z';
			}
		}
	
	// huruf yang letaknya ganjil dimundurkan 2 huruf ke belakang, dengan cara mengganti huruf tersebut
	for(i = 0; i < 200; i += 2){
			if(string[i] == 'A'){
				string[i] = 'Y';
			}else if(string[i] == 'B'){
				string[i] = 'Z';
			}else if(string[i] == 'C'){
				string[i] = 'A';
			}else if(string[i] == 'D'){
				string[i] = 'B';
			}else if(string[i] == 'E'){
				string[i] = 'C';
			}else if(string[i] == 'F'){
				string[i] = 'D';
			}else if(string[i] == 'G'){
				string[i] = 'E';
			}else if(string[i] == 'H'){
				string[i] = 'F';
			}else if(string[i] == 'I'){
				string[i] = 'G';
			}else if(string[i] == 'J'){
				string[i] = 'H';
			}else if(string[i] == 'K'){
				string[i] = 'I';
			}else if(string[i] == 'L'){
				string[i] = 'J';
			}else if(string[i] == 'M'){
				string[i] = 'K';
			}else if(string[i] == 'N'){
				string[i] = 'L';
			}else if(string[i] == 'O'){
				string[i] = 'M';
			}else if(string[i] == 'P'){
				string[i] = 'N';
			}else if(string[i] == 'Q'){
				string[i] = 'O';
			}else if(string[i] == 'R'){
				string[i] = 'P';
			}else if(string[i] == 'S'){
				string[i] = 'Q';
			}else if(string[i] == 'T'){
				string[i] = 'R';
			}else if(string[i] == 'U'){
				string[i] = 'S';
			}else if(string[i] == 'V'){
				string[i] = 'T';
			}else if(string[i] == 'W'){
				string[i] = 'U';
			}else if(string[i] == 'X'){
				string[i] = 'V';
			}else if(string[i] == 'Y'){
				string[i] = 'W';
			}else if(string[i] == 'Z'){
				string[i] = 'X';
			}
	}
	
	
	// huruf yang letaknya genap dimajukan 2 huruf ke depan, dengan cara mengganti huruf tersebut
	for(i = 1; i < 200; i += 2){
		if(string[i] == 'A'){
				string[i] = 'C';
			}else if(string[i] == 'B'){
				string[i] = 'D';
			}else if(string[i] == 'C'){
				string[i] = 'E';
			}else if(string[i] == 'D'){
				string[i] = 'F';
			}else if(string[i] == 'E'){
				string[i] = 'G';
			}else if(string[i] == 'F'){
				string[i] = 'H';
			}else if(string[i] == 'G'){
				string[i] = 'I';
			}else if(string[i] == 'H'){
				string[i] = 'J';
			}else if(string[i] == 'I'){
				string[i] = 'K';
			}else if(string[i] == 'J'){
				string[i] = 'L';
			}else if(string[i] == 'K'){
				string[i] = 'M';
			}else if(string[i] == 'L'){
				string[i] = 'N';
			}else if(string[i] == 'M'){
				string[i] = 'O';
			}else if(string[i] == 'N'){
				string[i] = 'P';
			}else if(string[i] == 'O'){
				string[i] = 'Q';
			}else if(string[i] == 'P'){
				string[i] = 'R';
			}else if(string[i] == 'Q'){
				string[i] = 'S';
			}else if(string[i] == 'R'){
				string[i] = 'T';
			}else if(string[i] == 'S'){
				string[i] = 'U';
			}else if(string[i] == 'T'){
				string[i] = 'V';
			}else if(string[i] == 'U'){
				string[i] = 'W';
			}else if(string[i] == 'V'){
				string[i] = 'X';
			}else if(string[i] == 'W'){
				string[i] = 'Y';
			}else if(string[i] == 'X'){
				string[i] = 'Z';
			}else if(string[i] == 'Y'){
				string[i] = 'A';
			}else if(string[i] == 'Z'){
				string[i] = 'B';
			}
	}
	
	// jika ada karakter selain huruf, maka karakter tersebut akan ditampilkan kembali dengan posisi yang tetap tanpa diubah nilainya
	
	// menampilkan output
	puts(string);
	
	return 0;
}
