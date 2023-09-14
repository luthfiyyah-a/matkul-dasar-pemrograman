#include "lib_complex.h"

// fungsi print_complex, untuk menampilkan output kapada pengguna
void print_complex(struct bil_kompleks a){

    if(a.r == 0) printf("%.2lfi", a.i);
    if(a.i == 0) printf("%.2lf", a.r);
    else{
        if(a.i < 0){
            printf("%.2lf - %.2lfi", a.r, -(a.i));
        }else
        printf("%.2lf + %.2lfi", a.r, a.i);
    }
}

