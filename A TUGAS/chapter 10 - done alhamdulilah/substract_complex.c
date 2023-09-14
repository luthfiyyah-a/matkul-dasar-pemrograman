#include "lib_complex.h"

// fungsi add_complex, untuk mengurangkan bilangan kompleks serta menampilkan output hasil pengurangan (dengan memanggil fungsi print_complex)
void substract_complex(struct bil_kompleks a, struct bil_kompleks b){

    struct bil_kompleks hasil; // variabel output - hasil pengurangan
    
	hasil.r = a.r - b.r;
    hasil.i = a.i - b.i;

    printf("\nhasil pengurangan = ");
    print_complex(hasil);
}
