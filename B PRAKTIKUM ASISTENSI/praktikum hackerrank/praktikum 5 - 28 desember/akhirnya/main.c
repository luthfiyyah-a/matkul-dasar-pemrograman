#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int apakah_prima(int a); //alhamdulillah
int prima_sebelum(int a, int* arr_prima);
int phi_prima(int p); //bismillah

int main() {
	
	int A, B, C, D;
	int a, b, c, d, e, hasil;
	int n, m, i;
	
	scanf("%d %d %d %d", &A, &B, &C, &D);

//scanf("%d", &D);

	a = phi(D);
// printf("nilai a = %d\n", a);
	
	b = phi(a);
	printf("b = %d\n", b);
	c = A % b;
	
	if(B == 0) m = 0;
	else m = pow(B, c);
	
//	printf("c = %d\n", c);
//	printf("B = %d\n", B);
//	printf("m = %d\n", m);
	d = m % a;
	
	if(A == 0) n =0;
	else n = pow(A, d);
	
	e = n % D;
	printf("n = %d\n", n);
	hasil = e + 1;
	
	printf("%d", hasil);
	
	return 0;
}

int phi(int x){ // x = suatu angka
	
	int nilai_phi;
	int i;
	int j; //banyaknya faktor prima dari x
	int arr_p[100000];
	
//	printf("tes fungsi phi\n");
		
	if( x == 1) nilai_phi == 1;
	//jika x adalah bilangan prima
	if(apakah_prima(x) == 1){
		
		nilai_phi = phi_prima(x);
	}
	
	else{
//		printf("tes fungsi phi else\n");	
		j = faktor_prima(x, arr_p);
		
		nilai_phi = x;
		
		for(i=1; i<=j; i++){
			nilai_phi = nilai_phi * (arr_p[i] - 1) / arr_p[i];
		}
	}
	
//	printf("fungsi phi, nilai phi = %d", nilai_phi);
	return nilai_phi;
}

int faktor_prima(int a, int *arr_p){ // a = suatu angka
	
	int n; //banyak angka prima sebelum setengah a
	int arr_prima[100000]; //bilangan-bilangan prima yang kurang dari setengah a
	int j = 0; //banyak faktor prima a
	int i = 0;
	
	n = prima_sebelum(a, arr_prima);

	while(a != 1){
		if(a % arr_prima[i] == 0){
			a = a / arr_prima[i];
			if(arr_prima[i] != arr_p[j]){
				arr_p[j+1] = arr_prima[i];
				j++;
			}
		}
		else i++;
	}
//	printf("\nj = %d\n", j);
	return j;
}

// fungsi mencari angka-angka prima yang kurang dari a
int prima_sebelum(int a, int *arr_prima){
	// a = suatu bilangan
	// arr_prima = array yang menampung bilangan prima < a
	
	int i;
	int j = 0; //banyaknya angka prima yang kurang dari setengah a
	
	//mencari angka prima yang dibawah a
	for(i=2; i<=a/2; i++){
		//jika i adalah prima
		if(apakah_prima(i) == 1){
			arr_prima[j] = i;
			j++;
		}
	}
	
	return j;
}

//nilai phi apabila bilangan prima
int phi_prima(int p){
	return p-1;
}

//// fungsi mengecek apakah suatu bilangan prima
int apakah_prima(int a){
	//jika prima, maka return 1
	//jika bukan prima, maka return 0
	
	int i;
	int jumlah_faktor = 1;
	for(i=1; i<=a/2; i++){
		if(a%i == 0) {
		jumlah_faktor++;
		}
	}
	
	if(jumlah_faktor == 2) return 1; // prima
	else return 0; //bukan prima
}
