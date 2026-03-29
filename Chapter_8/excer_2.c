#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int function_date_year(struct date d){
    if (d.month <= 2)
        d.year = d.year - 1;
    else
        d.year = d.year;

    return d.year;
}

int g_month(struct date d){
    if (d.month <= 2)
        d.month = d.month + 13;
    else
        d.month = d.month + 1;

    return d.month;
}

int calcNValue(struct date d){ //every function must return something unless expilicitly mentioned void

    // int year = function_date_year(d);
    // int month = g_month(d);

    // printf("%i %i\n", year, month);
    
    int N = ((1461 * function_date_year(d)) / 4)  + ((153 * g_month(d)) / 5) + d.day;

    return N;
}

int main(void)
{
    struct date dateTime1, dateTime2;

    printf("Enter two dates mm/dd/yyyy:");
    scanf("%d%d%d %d%d%d", &dateTime1.month, &dateTime1.day, &dateTime1.year, &dateTime2.month, &dateTime2.day, &dateTime2.year);

    int N1 = calcNValue(dateTime1);
    printf("%i\n", N1);

    return 0;
}

