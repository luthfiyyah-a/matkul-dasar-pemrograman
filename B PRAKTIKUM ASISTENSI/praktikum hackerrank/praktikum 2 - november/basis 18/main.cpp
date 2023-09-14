#include <stdio.h>

/* Algoritma yang menjadi ide:

#contoh bilangan : 37

37 / 18 = 2 sisa 1  ---- 37 dibagi dengan 18 (bilangan basis)
 2 / 18 = 0 sisa 2	--- hasil bagi (2) diturunin ke bawah, lalu dibgai lagi.
 
----bilangan terus menerus dibagi dengan 18 (bilangan basis) sampai hasilnya 0.
	lalu, hasil konversinya diambil dari sisa berurut dari bawah.
hasi konversinya : 21

contoh bilangan :  87

87 / 18 = 4 sisa 15	 ---- 87 dibagi dengan 18 (bilangan basis)
 4 / 18 = 0 sisa 4	 ---- hasil bagi (4) diturunin ke bawah, lalu dibagi lagi
 
----bilangan terus menerus dibagi dengan 18 (bilangan basis) sampai hasilnya 0.
	lalu, hasil konversinya diambil dari sisa berurut dari bawah.
---- kalau sisa nya 10 - 18, maka bilangan diubah menjadi huruf.
	 A = 10, I = 18.

maka, 15 diubah menjadi 'F'.
hasil konversi : 4F

*/


int main(){
    
    int n;
    int hasil_bagi[100];
    int i = 1;
    int j;

    // mengambil input
    scanf("%d", &n);
        
    // mengubah desimal ke basis 18    
    
	if(n == 0){
		printf("0");
	}else{
		
	while(n > 0){     
    
        hasil_bagi[i] = n % 18; 
        n = n / 18; 
        
        // jika nilai n masih lebih besar dari 0, maka program kembali melakukan perulangan
		
		if(hasil_bagi[i] >= 10){
		hasil_bagi[i] = hasil_bagi[i] + 7;	
		}
		
		hasil_bagi[i] = hasil_bagi[i] + 48;
		 i = i + 1;
            
 	}
 	
	}
	
    for(j = i - 1; j > 0; j--){
        printf("%c", hasil_bagi[j]);
    }
    
    return 0;
}



