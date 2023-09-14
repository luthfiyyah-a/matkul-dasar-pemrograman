#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int angka; // input
    int i; // variabel tambahan sebagai angka ke - ganjil
    
	
// mangambil data input angka
    scanf("%d", &angka);

//jika angka merupakan bilangan genap
	if(angka % 2 == 0) 
    {
	
	for(i = 1 ; i <= angka; i += 2){
    	printf("%d * ", i); // output terakhir berupa bintang

	}
	}
//jika angka merupakan bilangan ganjil
	else{ 
	for(i = 1 ; i < angka; i += 2){
    	printf("%d * ", i);	
		
	} printf("%d", angka); // output terakhir berupa angka itu sendiri
}


    return 0;
}

