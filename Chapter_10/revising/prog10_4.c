#include <stdio.h>

int main(void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today;
    struct date *datePtr = &today; //daetePtr points to a struct date, because &today has type struct date *
    // datePtr = &today;

    (*datePtr).day = 25; //or datePtr->day = 9
    datePtr->month = 9;
    datePtr->year = 2015;

    printf("Today's date is %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year % 100); //2025 % 100 = 25 reason

    return 0;

}