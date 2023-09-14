#include <stdio.h>
#include <math.h>

int main(){

double a, b, c;
double akar1, akar2;

printf("masukkan nilai a : ");
scanf("%lf", &a);
printf("masukkan nilai b : ");
scanf("%lf", &b);
printf("masukkan nilai c : ");
scanf("%lf", &c);

akar1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * a);
akar2 = (-b - sqrt(pow(b,2) - 4 * a * c)) / (2 * a);

printf(" akar-akanya adalah %.2lf dan %.2lf", akar1, akar2);
return 0;
}
