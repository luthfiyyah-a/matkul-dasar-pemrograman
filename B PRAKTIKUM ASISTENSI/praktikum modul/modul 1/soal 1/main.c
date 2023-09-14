#include <stdio.h>
#include <math.h>

int main()
{
    int bilangan;
    int pangkat;

    scanf("%d", &bilangan);

    if(bilangan < 10)
    {
        printf("merupakan bilangan amstrong");
    }
    else if(bilangan < 100)
    {
        printf("bukan bilangan amstrong");
    }
    else if(bilangan < 1000)
    {
        if(pow( bilangan / 100 , pangkat) + pow( bilangan / 10 % 10, pangkat) + pow( bilangan % 10, pangkat) == bilangan)
        {
            printf("merupakan bilangan amstrong");
        }
        else
        {
            printf("bukan bilangan amstrong");
        }
    }

    return 0;
}
