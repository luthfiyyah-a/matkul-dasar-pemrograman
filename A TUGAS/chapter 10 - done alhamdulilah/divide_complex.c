#include "lib_complex.h"

// fungsi add_complex, untuk membagi bilangan kompleks serta menampilkan output hasil pembagian (dengan memanggil fungsi print_complex)
void divide_complex(struct bil_kompleks a, struct bil_kompleks b){

    struct bil_kompleks hasil; // variabel output - hasil pembagian
    
    hasil.r = (a.r * b.r +a.i * b.i) / (pow(b.r, 2) + pow(b.i, 2));
    hasil.i = (a.i * b.r - a.r * b.i) / (pow(b.r, 2) + pow(b.i, 2));

    printf("\nhasil pembagian = ");
    print_complex(hasil);
}

