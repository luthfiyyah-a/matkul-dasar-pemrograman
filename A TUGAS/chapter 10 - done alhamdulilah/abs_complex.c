#include "lib_complex.h"

// fungsi add_complex, untuk menghitung nilai mutlak bilangan kompleks serta menampilkan output hasil nilai mutlak (dengan memanggil fungsi print_complex)
void abs_complex(struct bil_kompleks a, int x){

    struct bil_kompleks hasil; // variabel output - nilai mutlak
    
    hasil.r = sqrt(a.r * a.r + a.i * a.i);
    hasil.i = 0;
    printf("\nnilai mutlak bilangan kompleks ke-%d = ", x);
    print_complex(hasil);
}

