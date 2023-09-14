#include <stdio.h>
#include <string.h>

int main(){
    
    int N; // baris pertama
    int i; // variabel loop
    char KODESEPATU[301];
    int a = 0; // variabel pada loop array nomor sepatu
    char nomorsepatu_L[100][10];
    char nomorsepatu_R[100][10];
    char JENIS; // kanan atau kiri
    int m = 0; // variabel pada loop kodesepatu 
    int l = 0; // variabel pada loop nomorsepatu_L
    int r = 0; // variabel pada loop nomorsepatu_R
    int jumlah_r = 0; // menampung jumlah sepatu R
    int jumlah_l = 0; // menampung jumlah sepatu L
    int pasangan; // berapa jumlah pasangan sepatu yang sama ukurannya
    
    
    // input N
    scanf("%d", &N);
    
    // input baris selanjutnya
    for(i=0; i<N; i++){
        
        scanf("%s", KODESEPATU);
        scanf(" %c", &JENIS);
    
        if(JENIS == 'L'){
            // dapatkan nomor sepatu
            while (KODESEPATU[m] != '\0'){
                if(KODESEPATU[m] >= 48 && KODESEPATU[m] <= 57){
                    nomorsepatu_L[l][a] = KODESEPATU[m];
                    a++;
                    printf("nomor sepatu L = %s\n a = %d\n i = %d\n m = %d\n l = %d\n", nomorsepatu_L[i], a+1, i+1, m+1, l+1);
                }
                m++;
            }
            l++;
            jumlah_l = l; // berapa jumlah sepatu L
        }
        if(JENIS == 'R'){
            // dapatkan nomor sepatu
            while (KODESEPATU[m] != '\0'){
                if(KODESEPATU[m] >= 48 && KODESEPATU[m] <= 57){
                    nomorsepatu_R[r][a] = KODESEPATU[m];
//                    printf("\nnomor sepatu R = %s\n a = %d\n i = %d\n m = %d\n r = %d", nomorsepatu_R[i], a+1, i+1, m+1, r+1);
                    // ada masalah, kenapa isi string nomorsepatu kadang2 aneh ya? misalnya seperti '12z', harusnya tidak ada ,z'.
                    a++;
                }
                m++;
            }
            r++;
            jumlah_r = r; // berapa jumlah sepatu R
        }
    m = 0;    
    a = 0;    
    }    
    
//    printf("\n\n\n\nnomorsepatu_L[1] = %s\n" , nomorsepatu_L[0]);
//    printf("\nnomorsepatu_R[1] = %s\n", nomorsepatu_R[0]);
    // nyari pasangan
    
    int p, q;
    
    for(p=0; p<jumlah_l; p++){
        for(q=0; q<jumlah_r; q++){   
            if(strcmp(nomorsepatu_L[p], nomorsepatu_R[q]) == 0){
                pasangan = pasangan + 1;
            }
        }
    }
    
    if(pasangan == 0){
        printf("Ini, apa, itu, apa, gabisa jual");
    }
    else{
        printf("%d", pasangan);
    }
}
