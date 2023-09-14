#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double kali_r();
double kali_i();
double tambah();
double kurang();

int main() {
    
    double r1; // bilangan riil 1
    double i1; // bilangan imajiner 1
    double r2; // bilangan imajiner 2
    double i2; // bilangan imajiner 2
    int lanjut = 1; // variabel loop
    char simbol; // '+', '-', '*', 'p', atau 'q'
    double hasil_r; // hasil operasi aritmatika bagian yang riil
    double hasil_i; // hasil operasi aritmatika bagian yang imajiner
    double cadangan_hasil_r; // digunakan di operasi perkalian
    
    scanf("%lf %lf", &r1, &i1);
    hasil_r = r1; // nilai yang nanti dioperasikan dengan nilai selanjutnya
    hasil_i = i1; // nilai yang nanti dioperasikan dengan nilai selanjutnya
    do{
        scanf(" %c", &simbol);
        
        if(simbol == 'p'){
            
            if(hasil_i <= 0){
                printf("%.2lf %.2lfi\n", hasil_r, hasil_i);
            }
            else{
                printf("%.2lf +%.2lfi\n", hasil_r, hasil_i); //biar ada tanda '+' didepan angka
            }
            scanf(" %c", &simbol);
            // printf("hasil_r 2 = %lf\n", hasil_r);
        }
        
        if(simbol == 'q'){
            break;
        }
        
        if(simbol != 'p'){
			scanf("%lf %lf", &r2, &i2);
		}
        if(simbol == '+'){
            hasil_r = tambah(hasil_r, r2);
            hasil_i = tambah(hasil_i,i2);
        }
        if(simbol == '-'){
            hasil_r = kurang(hasil_r, r2);
            hasil_i = kurang(hasil_i, i2);
        }
        if(simbol == '*'){
            // printf("hasil_r = %lf\n", hasil_r);
            cadangan_hasil_r = hasil_r;// agar nilai yang dimasukkan utk mencari hasil_i tidak berubah
            hasil_r = kali_r(hasil_r, hasil_i, r2, i2);
            hasil_i = kali_i(cadangan_hasil_r, hasil_i, r2, i2);
        }
    }
    while(lanjut != 0);
    
    return 0;
}

double kali_r(double a, double b, double c, double d){
    double hasil = (a * c) - (b * d);
    return hasil;
}

double kali_i(double a, double b, double c, double d){
    // printf("hasil_r = %lf\nhasil_i = %lf\nr2 = %lf\ni2 = %lf\n", a, b, c, d);
    double hasil = (a * d) + (b * c);
    return hasil;
}

double tambah(double a, double b){
    double hasil = a + b;
    return hasil;
}
double kurang(double a, double b){
    double hasil;
    hasil = a - b;
    return hasil;
}
