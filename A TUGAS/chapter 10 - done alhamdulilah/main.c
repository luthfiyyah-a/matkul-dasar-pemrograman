#include "lib_complex.h"

int main()
{
    struct bil_kompleks pertama; // variabel input - bilangan kompleks pertama
    struct bil_kompleks kedua; // variabel input - bilangan kompleks kedua
	
	// menginput nilai 2 bilangan kompleks dari user
    printf("masukkan bilangan kompleks pertama, yang bilangan riil dan bilangan imaginernya dipisahkan oleh spasi : ");
    scan_complex(&pertama);
    printf("masukkan bilangan kompleks kedua, yang bilangan riil dan bilangan imaginernya dipisahkan oleh spasi : ");
    scan_complex(&kedua);

    // memanggil fungsi add_complex untuk menjumlahkan 2 bilangan kompleks sekaligus menampilkan hasilnya kepada user
    add_complex(pertama, kedua);

    // memanggil fungsi substract_complex untuk mengurangkan 2 bilangan kompleks sekaligus menampilkan hasilnya kepada user
    substract_complex(pertama, kedua);

    // memanggil fungsi multiply_complex untuk mengalikan 2 bilangan kompleks sekaligus menampilkan hasilnya kepada user
    multiply_complex(pertama, kedua);

    // memanggil fungsi divide_complex untuk membagi 2 bilangan kompleks sekaligus menampilkan hasilnya kepada user
    divide_complex(pertama, kedua);

    // memanggil fungsi abs_complex untuk menghitung nilai mutlak dari bilangan kompleks sekaligus menampilkan hasilnya kepada user
    abs_complex(pertama, 1);
    abs_complex(kedua, 2);


    return 0;
}
