#include "lib_complex.h"

// fungsi scan_complex, untuk menginput bilangan kompleks dari pengguna
void scan_complex(struct bil_kompleks *a){
    scanf("%lf", &a->r);
    scanf("%lf", &a->i);
}
