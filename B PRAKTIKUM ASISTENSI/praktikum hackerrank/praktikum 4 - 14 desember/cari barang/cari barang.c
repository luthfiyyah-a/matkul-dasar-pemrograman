#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t; // banyak test case
    int n; // banyak data barang
    int m; // banyak barang yang dicari
    int ada = 0;
    char data[101][101]; // string data barang
    char cari[101][101]; // string barang yang dicari
    int i, j, k, a = 0; //variabel loop

    // input banyak test case
    scanf("%d", &t);

    for(i=0; i<t; i++){

        //input banyak data barang
        scanf("%d", &n);

        for(j=0; j<n; j++){
            gets(data[j]);
            // scanf(" %s", data[j]);
            // data[j][a] = 'a';
            // getchar();
            // while(data[j][a] != '\0'){
            //     scanf("%c", &data[j][a]);
            //     a++;
            // }
        }

        //input banyak barang yang dicari
        scanf("%d", &m);

        for(j=0; j<m; j++){
            gets(cari[j]);
            // scanf(" %s", cari[j]);
            // cari[j][a] = 'a';
            // getchar();
            // while(cari[j][a] != '\0'){
                // scanf("%c", &cari[j][a]);
                // a++;
            // }
        }
    }

    for(i=0; i<t; i++){

        for(j=0; j<m; j++){
            for(k=0; k<n; k++){
                if(strcmp(cari[j], data[k]) == 0){
                    printf("Yay ada di laci ke-%d (/^^)/\n", k+1);
                    ada = 1; // menandakan barang ada
                }
            }
            if(ada != 1) printf("Ga ketemuu (--;)\n");
            ada = 0; //variabel kembali di inisialisasi 0 untuk uji berikutnya
        }

    }
    return 0;
}

