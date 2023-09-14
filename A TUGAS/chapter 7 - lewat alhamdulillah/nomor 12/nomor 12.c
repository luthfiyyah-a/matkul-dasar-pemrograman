#include <stdio.h>

int binary_srch(const int array[], int panjang, int target){
	int bottom = 0; // variabel
	int top = panjang; // variabel
	int found = 0; // variabel - jika 0 artinya salah, jik 1 artinya benar
	int tengah; // variabel - pada index array di middle petama
	int i; // output - index keberadaan target
	int middle; // variabel
	
	if(panjang % 2 == 1){
		middle = panjang / 2 ;
	}else {
		middle = panjang / 2 - 1;
	}
	
	
	
	while(found == 0){
		// jika elemen pada middle adalah target
		if(array[middle] == target){
			found = 1;
			break;
		}
		// jika elemen pada middle lebih besar dari target
		else if(array[middle] > target){
			top = middle - 1;
		}
		// jika elemen pada middle lebih kacil dari target
		else{
			bottom = middle + 1	;
		}
		
		middle = (top - bottom) / 2;
	}	
	
	return middle;
}

int main(){
	
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d", binary_srch(array, 10, 8));
	
	return 0;
}
