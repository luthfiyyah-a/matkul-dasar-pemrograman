#include <stdio.h>

/*
ditulis oleh :
    nama : luthfiyyah hanifah amari
    nrp : 5025201090
*/

/*
tanggal
    pembuatan : 25 oktober 2020
*/

/*
variabel-variabel yang digunakan :
    1. fun1
    2. fun2
    3. masukan
*/

/*
algoritma pemrograman :
    1. program dimulai
    2. menampilkan "Testing &&"
    3. menampilkan perintah kepada user untuk memasukkan T atau S
    4. Jika input pengguna adalah "T," maka fun1 mengembalikan 1
    5. jika tidak maka harus mengembalikan 0
    6. Fungsi fun2 menampilkan "fun2 excuted" dan kemudian mengembalikan 1.
    7. jika fungsi && memanggil fun1 dan fun2 benar, maka funsi main menampilkan "Test of && complete"
    8. menampilkan "Testing ||"
    9. jika fungsi || memanggil fun1 dan fun2 benar, maka fungsi main menampilkan "Test of && complete"

*/

int fun1()
{
    char masukan;

    printf("masukkan \"T\" untuk benar atau \"S\" untuk salah : ");
    scanf("%c", &masukan);

    if(masukan == 'T'){

        return 1;
    }else{
    return (0);
    }
}

int fun2()
{
    printf("\nfun2 executed");
    return (1);
}

int main()
{
    char masukan;

    printf("Testing &&\n");

    if(fun1() && fun2()){
    printf("\nTest of && complete");

    }

    printf("\nTesting ||");

    if(fun1() || fun2()){
    printf("\nTest of || complete");
    }

        return (0);
}


