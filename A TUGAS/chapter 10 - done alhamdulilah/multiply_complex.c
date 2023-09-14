#include "lib_complex.h"

// fungsi add_complex, untuk mengalikan bilangan kompleks serta menampilkan output hasil perkalian (dengan memanggil fungsi print_complex)
void multiply_complex(struct bil_kompleks a, struct bil_kompleks b){

    struct bil_kompleks hasil; // variabel output - hasil perkalian
    
    hasil.r = (a.r * b.r) - (a.i * b.i);
    hasil.i = (a.r * b.i) + (a.i + b.r);

    printf("\nhasil perkalian = ");
    print_complex(hasil);
}

