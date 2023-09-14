#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int input; // input - angka
	int angka;
	int i;
	int prima; // sebagai penanda apakah prima atau tidak
	
	// mendapatkan data angka
	scanf("%d", &input);
	
	for(int angka = 2; angka <= input; angka++){
		
		if(angka == 2){
			prima = 1;
		
		}else{
			for( int i = 2; i < angka; i++){
				
				if(angka %i == 0){ //jika angka habis dibagi suatu bilangan selain 1 dan angka itu sendiri
					prima = 0; // angka ini bukan bilangan prima
					break;
				}else{
					prima = 1; // angka ini merupakan bilangan prima
				}
			
			// mengeluarkan output
				}
			}
			
			// jika angka merupakan bilangan prima, maka akan berupa *
			if(prima == 1){
				printf("* ");
			}
			// jika angka bukan bilangan prima, maka akan berupa angka
			else{
				printf("%d ", angka);
			}	
			
		
	}
	

	return 0;
}
