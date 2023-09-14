#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int keranjang[2001];
    int *ptr = keranjang;
    double hasil = 0;
    int n; // berapa angka
    double ratarata;
    int i;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        
        scanf("%d", (ptr+i));
        
        hasil = hasil + *(ptr+i);
    }
    
    ratarata = hasil / n;
    
    printf("%.lf\n", hasil);
    printf("%.6lf\n", ratarata);
    
    return 0;
}
