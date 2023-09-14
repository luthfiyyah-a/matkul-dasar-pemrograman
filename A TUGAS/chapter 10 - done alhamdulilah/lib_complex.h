/*
	header file library
*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// inisialisasi struct bil_kompleks
struct bil_kompleks{
    double i;
    double r;
};

// prototype fungsi
void scan_complex(struct bil_kompleks *a);
void print_complex(struct bil_kompleks a);
void add_complex(struct bil_kompleks a, struct bil_kompleks b);
void substract_complex(struct bil_kompleks a, struct bil_kompleks b);
void multiply_complex(struct bil_kompleks a, struct bil_kompleks b);
void duvide_complex(struct bil_kompleks a, struct bil_kompleks b);
void abs_complex(struct bil_kompleks a, int x);
