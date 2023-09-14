#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ubah_huruf();

int main(){

	int array[64][3];
	int n;
	int i, j;

	scanf("%d", &n);

	for(i=0; i<n; i++){

		for(j=0; j<3; j++){
			scanf("%c", &array[i][j]);
		}
	}

	for(i=0; i<n; i++){
	printf("#");
		for(j=0; j<n; j++){
			printf("%c ", ubah_huruf(array[i][j]));
		}
	printf("\n");
	}
	return 0;
}

int ubah_huruf(const int array){

	int huruf_depan; // mencari huruf pertama
	int huruf_belakang; // mencari huruf kedua

	huruf_depan = (array / 26) + 65;
	huruf_belakang = (array % 26) + 65;

	// note : ditambah 65 untuk mengubahnya menjadi huruf besar
}
