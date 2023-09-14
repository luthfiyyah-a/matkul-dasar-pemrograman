#include <stdio.h>
#include <stdlib.h>

int main()
{
   int bilangan;
   int ulangi;

    do{

   scanf("%d", &bilangan);

   if(bilangan % 2 == 0){

        printf("genap");
   }else if(bilangan % 2 == 1){

        printf("ganjil");
   }

   printf("\n\njika ingin diulangi, tekan 1\njika tidak, tekan yang lain\n");
   scanf("%d", &ulangi);
   }while(ulangi != 1);

   printf("\nterima kasih telah menggunakan program ini");

    return 0;
}
