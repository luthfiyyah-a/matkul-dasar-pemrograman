#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	struct nilai{
		char nama[30];
		int matematika;
		int ipa;
		int indo;
		int inggris;
	};
	int n; // jumlah input data awal
	int i, j;
	struct nilai siswa[10];
	char nitipnama[30];
	int nitip;
	int carinama[10][30];
	int m; // jumlah nama yang dicari
	
	printf("masukkan berapa pengulangan input :");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		
		printf("masukkan nama : ");
		scanf("%s", &nitipnama);
		strcpy(siswa[i].nama, nitipnama);
		// tadi nyoba pake : siswa.nama = "ahmad" 
		// tapi gabisa :(
		
		scanf("%d", &nitip);
		siswa[i].matematika = nitip;
		//coba pake : scanf("%d", &siswa[i].matematika);
		// tapi gagal
		
		scanf("%d", &nitip);
		siswa[i].ipa = nitip;
		scanf("%d", &nitip);
		siswa[i].indo = nitip;
		scanf("%d", &nitip);
		siswa[i].inggris = nitip;
	}
	
	scanf("%d", &m); // jumlah nama yang dicari
	
	for(i=0; i<m; i++){
		scanf("%s", &carinama[i]);
	}


	for(j=0; j<m; j++){
		
		for(i=0; i<n; i++){
			if(strcmp(carinama[j], siswa[i].nama) == 0){
				printf("nilai %s\n", siswa[i].nama);
				printf("Matematika : %d\n", siswa[i].matematika);
				printf("IPA : %d\n", siswa[i].ipa);
				printf("Bahasa indonesia %d\n", siswa[i].indo);
				printf("Bahasa inggris %d\n", siswa[i].inggris);
				break;		
			}
			else if(i == (n-1)){
				printf("%s tidak ditemukan\n", carinama[j]);
			}
		}
		
	}
		
	
	return 0;
}
