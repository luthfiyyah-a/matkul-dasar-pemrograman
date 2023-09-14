#include <stdio.h>
#include <stdlib.h>

int main()
{
   int jumlah_galon; //digunakan untuk menginput jumlah galon
   float efesiensi;// digunakan untuk menginput efesiensi dalam persen
   double BTU;// output BTU yang dihasilkan

   printf("masukkan jumlah galon :");
   scanf("%d", &jumlah_galon);//input jumlah galon
   printf("masukkan efesiensi dalam persen :");
   scanf("%f", &efesiensi);// input efesiensi

   BTU = (5800000 * jumlah_galon * efesiensi) / ( 100 * 42 );
   /*
   rumus yang digunakan untuk menguhitung BTU yang dihasilkan
   */
   printf("jumlah BTU yang dihasilkan adalah %.2lf BTU", BTU);
   return 0;
}
