#include <stdio.h>

struct dateTime 
{
    int day;
    int hour;
    int minutes;
};

struct dateTime timeUpdate(struct dateTime d)
{
    d.minutes++;

    if (d.minutes == 60){
        d.hour++;
        d.minutes = 0;

        if (d.hour == 24){
            d.day++;
            d.hour = 0;
        }
    }

    return d;
} 

int main(void)
{
    struct dateTime currentTime, updatedTime;
    printf("Enter the time you want and the date (hh:mm:dd): ");
    scanf("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.day);

    updatedTime = timeUpdate(currentTime);

    printf("Updated time is %.2i:%.2i:%.2i\n", updatedTime.hour, updatedTime.minutes, updatedTime.day);

    return 0;

}