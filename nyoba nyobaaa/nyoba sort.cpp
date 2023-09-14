#include <stdio.h>

struct karung{
    int W[1001]; //berat karung i
    int C[1001]; //harga karung i
    int harga[1001]; //haarga karung per kg
};

int main(){
	
	int N; //banyak jenis beras
    int X; //total massa
    struct karung beras;
    int i, j, temp;
	int harga_total;
	
	scanf("%d %d", &N, &X);
    
    //input baris ke-2 dan ke-3
    for(i=0; i<N; i++){
        scanf("%d", &beras.W[i]);
    }
    for(i=0; i<N; i++){
        scanf("%d", &beras.C[i]);
    }

	//mengurutkan array  beras.C menggunakan bubble sort
    for(i=0; i<N-1; i++){
        for(j=0; j<N-1-i; j++){
            
            if(beras.C[j] < beras.C[j+1]){
                temp = beras.C[j];
                beras.C[j] = beras.C[j+1];
                beras.C[j+1] = temp;

                temp = beras.W[j];
                beras.W[j] = beras.W[j+1];
                beras.W[j+1] = temp;
            }
        }
    }
	
	for(i=0; i<N; i++){
        printf("%d ", beras.W[i]);
    }
    printf("\n");
    for(i=0; i<N; i++){
        printf("%d ", beras.C[i]);
    }
	
	harga_total = 0;
    i = 0;
	
	while(1){
            printf("\ntes, i = %d", i);
        if(X >= beras.W[i]){
        	printf("\ntes if, i = %d", i);
            harga_total = harga_total + beras.C[i];
            printf("\nharga_total = %d", harga_total);
            X = X - beras.W[i];
            i++;
        }
        else{
        	printf("\ntes else, i = %d", i);
            harga_total = harga_total +((X/ beras.C[i]) * beras.C[i]);
            break;            
        }
    }
    
    printf("\n\n\nharga total = %d", harga_total);
	return 0;
}
