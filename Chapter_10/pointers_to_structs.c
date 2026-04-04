#include <stdio.h>

int main(void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9; //this is as same as (*datePtr).month
    datePtr->day = 25;  //this is as same as (*datePtr).day
    datePtr->year = 2015; //this is as same as (*datePtr).year

    printf("Todays date is %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year);

    return 0;
}