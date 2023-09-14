#include <stdio.h>

int main(){
	
	int a;
	int output;
	int output_belasan = 0;
	
	scanf("%d", &a);

	if(a < 1000 && a >= 2000){
		output = a / 1000;
		a = a % 1000;
		if( output == 2) printf("dua");
		if( output == 3) printf("tiga");
		if( output == 4) printf("empat");
		if( output == 5) printf("lima");
		if( output == 6) printf("enam");
		if( output == 7) printf("tujuh");
		if( output == 8) printf("delapan");
		if( output == 9) printf("sembilan");
		output = 0;
		printf(" ribu ");
	}
	
	if( a >= 1000 < 2000) {
		a = a % 1000;
		printf("seribu ");
	}

	if(a < 1000 && a >= 200){
		output = a / 100;
		a = a % 100;
		if( output == 2) printf("dua");
		if( output == 3) printf("tiga");
		if( output == 4) printf("empat");
		if( output == 5) printf("lima");
		if( output == 6) printf("enam");
		if( output == 7) printf("tujuh");
		if( output == 8) printf("delapan");
		if( output == 9) printf("sembilan");
		output = 0;
		printf(" ratus ");	
	}
	
	if( a >= 100 < 200) {
		a = a % 100;
		printf("seratus ");
	}
	
	if(a < 100 && a >= 20 ){
		output = a / 10;
		a = a % 10;
		if( output == 1) printf("satu");
		if( output == 2) printf("dua");
		if( output == 3) printf("tiga");
		if( output == 4) printf("empat");
		if( output == 5) printf("lima");
		if( output == 6) printf("enam");
		if( output == 7) printf("tujuh");
		if( output == 8) printf("delapan");
		if( output == 9) printf("sembilan");
		output = 0;
		printf(" puluh ");
	}

	if(a == 10) printf("sepuluh");
	
	if(a < 20 && a > 11){
		output = a % 10;
		output_belasan = 1;
	}
	

	if(a % 10 == 1) output = 1;
	if(a % 10 == 2) output = 2;
	if(a % 10 == 3) output = 3;
	if(a % 10 == 4) output = 4;
	if(a % 10 == 5) output = 5;
	if(a % 10 == 6) output = 6;
	if(a % 10 == 7) output = 7;
	if(a % 10 == 8) output = 8;
	if(a % 10 == 9) output = 9;
	
	if(a % 100 == 11) {
		output = 0;
		printf("sebelas");
	}
	
	if( output == 1) printf("satu");
	if( output == 2) printf("dua");
	if( output == 3) printf("tiga");
	if( output == 4) printf("empat");
	if( output == 5) printf("lima");
	if( output == 6) printf("enam");
	if( output == 7) printf("tujuh");
	if( output == 8) printf("delapan");
	if( output == 9) printf("sembilan");
	
	if(output_belasan == 1) printf(" belas");
	
	return 0;
}

