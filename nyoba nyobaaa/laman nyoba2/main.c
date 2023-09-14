#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int jam1,menit1,detik1;
    int jam2,menit2,detik2;
    int jam,menit,detik;

scanf ("%d\n%d\n%d",&jam1,&menit1,&detik1);
scanf ("%d\n%d\n%d",&jam2,&menit2,&detik2);

int hasil1,hasil2,akhir;
hasil1=(jam1*3600)+(menit1*60)+detik1;
hasil2=(jam2*3600)+(menit2*60)+detik2;

if(hasil1>hasil2)
{
    akhir=hasil1-hasil2;
    jam=akhir/3600;
    menit=(akhir%3600)/60;
    detik=(akhir%3600)%60;
    printf ("Beda Waktunya : %d:%d:%d - %d:%d:%d = %d:%d:%d",hasil1/3600,(hasil1%3600)/60,(hasil1%3600)%60,hasil2/3600,(hasil2%3600)/60,(hasil2%3600)%60,jam,menit,detik);
}
else if(hasil2>=hasil1)
{
    akhir=hasil2-hasil1;
    jam=akhir/3600;
    menit=(akhir%3600)/60;
    detik=(akhir%3600)%60;
    printf ("Beda Waktunya : %d:%d:%d - %d:%d:%d = %d:%d:%d",hasil2/3600,(hasil2%3600)/60,(hasil2%3600)%60,hasil1/3600,(hasil1%3600)/60,(hasil1%3600)%60,jam,menit,detik);
}
return 0;
}
