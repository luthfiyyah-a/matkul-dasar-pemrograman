#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    struct menu{
        int meja;
        char A[20]; // makanan
        char B[20]; // minuman
        char C[20]; // snack
    };
    struct menu x[101];
    struct menu y[101]; // untuk opsi -
    char opsi;
    int nitipmeja;
    char nitip[20];
    int i=0, j, k=0; // variabel loop
    int output[101];
    int perulangan;
    
    while(i >= 0){
        scanf("%c ", &opsi);

        if(opsi == '+'){
            scanf("%d", &nitipmeja);
                for(j=0; j<i+1; j++){
                    output[i] = 0;
                    if(nitipmeja == x[j].meja){ // bila meja penuh
                        output[i] = 1;
                        break;
                    }
                }
            x[i].meja = nitipmeja;

            scanf(" %s", &nitip);
            strcpy(x[i].A, nitip);
            
            scanf(" %s", &nitip);
            strcpy(x[i].B, nitip);
            
            scanf(" %s", &nitip);
            strcpy(x[i].C, nitip);
        }
        if( opsi == '-'){
            scanf("%d", &nitipmeja);
            for(j=0; j<i; j++){
            if(nitipmeja == x[j].meja) {// meja telah terisi
                output[i] = 3;
                y[k].meja = x[j].meja; 
                strcpy(y[k].A, x[j].A);
                strcpy(y[k].B, x[j].B);
                strcpy(y[k].C, x[j].C);
                break;
            }
            if(j == (i-1) && j != nitipmeja){
                output[i] = 4;
                y[k].meja = nitipmeja;
            }
            k++; 
               }
         }
        if( opsi == 'Q') break; 
        
        i++;
    }
    
    perulangan = i;
    k=0;
    // tampilkan output
    for(i=0; i<perulangan; i++){
        
        if(output[i] == 0){ // output + jika meja tak penuh
            printf("Pesanan pelanggan meja %d sudah diterima\n", x[i].meja);
        }
        if(output[i] == 1){ // output + jika meja penuh
            printf("Meja %d masih penuh\n", x[i].meja);
        }
        if(output[i] == 3){ // output - jika meja telah terisi
            printf("Mengantarkan %s %s %s ke meja %d\n", y[k].A, y[k].B, y[k].C, y[k].meja);
            k++;
        }
        if(output[i] == 4){
            printf("Meja %d masih kosong\n", y[k].meja);
            k++;
        }
     }
        
      return 0;
}

