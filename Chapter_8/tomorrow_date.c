#include <stdio.h>
#include <stdbool.h>

struct date
{
    int month;
    int day;
    int year;
};

int main(void)
{
    struct date today, tomorrow;
    int numberofDays(struct date d);
    
    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);

    if(today.day != numberofDays(today)){
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if(today.month == 12) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year);

    return 0;
}

int numberofDays(struct date d)
{
    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(isLeapYear(d) == true && d.month == 2)
        days = 29;
    else
        days = daysPerMonth[d.month -1];
    
    return days;
}

bool isLeapYear(struct date d)
{
    bool LeapYearFlag;

    if((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
        LeapYearFlag = true;
    else
        LeapYearFlag = false;

    return LeapYearFlag;
}