/*
calculate the speed ratio
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double max_speed; // input - maximum speed
    double min_speed; // input - minimum speed
    double speed_ratio; // output - speed ratio

    // get the maximum speed
    printf("enter the maximum speed : ");
    scanf("%lf", &max_speed);
    // get the minimum speed
    printf("enter the minimum speed : ");
    scanf("%lf", &min_speed);
    // calculate speed ratio
    speed_ratio = pow(( max_speed / min_speed ), 0.2);
    // display th result
    printf("the speed ratio is %.4lf", speed_ratio);
    return 0;
}

// program berhenti

/*
ditulis oleh :
    nama : luthfiyyah hanifah amari
    nrp : 5025201090
*/

/*
tanggal
    pembuatan : 18 oktober 2020
*/

/*
variabel-variabel yang digunakan :
    1. max_speed
    2. min_speed
    3. speed_ratio
*/

/*
algoritma pemrograman :
    1. program dimulai
    2. menampilkan perintah kepada user untuk menginput nilai max_speed
    3. menginput nilai max_speed
    4. menampilkan perintah kepada user untuk menginput nilai min_speed
    5. menginput nilai min_speed
    6. menghitung nilai speed_ratio dengan formula yang diberikan
    7. menampilkan hasil nilai speed_ratio kepada user
*/

