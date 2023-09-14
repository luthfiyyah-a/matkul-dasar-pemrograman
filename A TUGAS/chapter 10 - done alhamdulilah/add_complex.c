#include "lib_complex.h"

// fungsi add_complex, untuk menjumlahkan bilangan kompleks serta menampilkan output hasil penjumlahan (dengan memanggil fungsi print_complex)
void add_complex(struct bil_kompleks a, struct bil_kompleks b){
	
	struct bil_kompleks hasil; //variabel output - hasil penjumlahan 

    hasil.r = a.r + b.r;
    hasil.i = a.i + b.i;

    printf("\nhasil penjumlahan = ");
    print_complex(hasil);
}
    
