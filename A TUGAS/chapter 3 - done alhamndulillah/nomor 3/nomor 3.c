/*
compute the total surface area of a right circular cone
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
    double radius;// input - radius of the base of a cone
    double slant_height; // input - the slant height of the cone
    double surface_area; // output - the total surface area of a right circular cone

    // get the radius
    printf("enter the radius of the base of a cone :");
    scanf("%lf", &radius);
    // get the slant height
    printf("enter the slant height of a cone :");
    scanf("%lf", &slant_height);
    // calculate the total surface area of a right circular cone
    surface_area = ( PI * radius * slant_height ) + (PI * pow(radius,2));
    // display the result
    printf("the total surface area of a right circular cone = %lf", surface_area);
    return 0;
}

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
    1. radius
    2. slant_height
    3. surface_area
*/

/*
algoritma pemrograman :
    1. program dimulai
    2. menampilkan perintah kepada user untuk menginput nilai radius
    3. menginput nilai radius
    4. menampilkan perintah kepada user untuk menginput nilai slant_height
    5. menginput nilai slant_height
    6. menghitung nilai surface_area
    7. menampilkan hasil nilai surface_area kepada user
*/
