/*Age Calculator (C program to calculate age).*/

#include <stdio.h>
#include <time.h>

/*check given year is leap year or not*/
int isLeapYear(int year, int mon)
{
    int flag = 0;
    if (year % 100 == 0)
    {
            if (year % 400 == 0)
            {
                    if (mon == 2)
                    {
                            flag = 1;
                    }
            }
    }
    else if (year % 4 == 0)
    {
            if (mon == 2)
            {
                    flag = 1;
            }
    }
    return (flag);
}


int main()
{

    int DaysInMon[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};
    int days, month, year;
    char dob[100];
    time_t ts;
    struct tm *ct;
    char hal[200];

    /* enter date of birth */
    printf("Enter your date of birth (DD/MM/YYYY): ");
    scanf("%d/%d/%d",&days,&month, &year);

    /*get current date.*/
    ts = time(NULL);
    ct = localtime(&ts);

    printf("Current Date: %d/%d/%d\n",
            ct->tm_mday, ct->tm_mon + 1, ct->tm_year + 1900);

    days = DaysInMon[month - 1] - days + 1;

    /* leap year checking*/
    if (isLeapYear(year, month))
    {
            days = days + 1;
    }

    /* calculating age in no of days, years and months */
    days = days + ct->tm_mday;
    month = (12 - month) + (ct->tm_mon);
    year = (ct->tm_year + 1900) - year - 1;

    /* checking for leap year feb - 29 days */
    if (isLeapYear((ct->tm_year + 1900), (ct->tm_mon + 1)))
    {
            if (days >= (DaysInMon[ct->tm_mon] + 1))
            {
                    days = days - (DaysInMon[ct->tm_mon] + 1);
                    month = month + 1;
            }
    }
    else if (days >= DaysInMon[ct->tm_mon])
    {
            days = days - (DaysInMon[ct->tm_mon]);
            month = month + 1;
    }

    if (month >= 12)
    {
            year = year + 1;
            month = month - 12;
    }

    /* print age */
    printf("\n## Hey you are  %d years %d months and %d days old. ##\n", year, month, days);


    if(year == 18 && month == 00 && days == 01){


        printf("\n\napa yang kamu impikaaaannn? ayo tuliiiss satu kataa:");
        scanf("%s", &hal);

        printf("selamat ulang tahun sapijiiiiik\n");
        printf("==================================\n");
        printf("barokallah fii umrik\n");
        printf("==================================\n");
        printf("semoga yang disemogakan tersemogakannnn\n");
        printf("===================================\n");
        printf("semogaa bisaa dapett %s aamiiinnnn", hal);

    }else{

        printf("terima kasih telah menggunakan program iniii");
    }

    return 0;
}
