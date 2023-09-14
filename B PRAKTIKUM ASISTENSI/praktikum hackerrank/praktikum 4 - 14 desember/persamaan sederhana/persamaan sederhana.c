#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct fungsi {
        double a; // koef x^3
        double b; // koef x^2
        double c; // koef x^1
        double d; // koef x^0 atau konstanta
        int x; // variabel fungsi
    };

int main() {

    struct fungsi kurva[21];
    double nitip; //variabel sementara
    double hasil[21]; // menampung hasil f(x)
    int i; // variabel loop
    int N; // ada berapa persamaan
    
    scanf("%d", &N);
    
    for(i=0; i<N; i++){
        scanf("%lf", &nitip);
        kurva[i].a = nitip;
        
        scanf("%lf", &nitip);
        kurva[i].b = nitip;
        
        scanf("%lf", &nitip);
        kurva[i].c = nitip;
        
        scanf("%lf", &nitip);
        kurva[i].d = nitip;
        
        scanf("%lf", &nitip);
        kurva[i].x = nitip;
        
        hasil[i] = (kurva[i].a * (pow(kurva[i].x, 3))) + (kurva[i].b * (pow(kurva[i].x, 2))) + (kurva[i].c * kurva[i].x) + kurva[i].d;
    }
    
    for(i=0; i<N; i++){
        printf("%.6lf", hasil[i]);        
    }
    
    return 0;
}

