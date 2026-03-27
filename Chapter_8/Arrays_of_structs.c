#include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

int main(void)
{
    struct time timeUpdate (struct time now);
    struct time testTime[5] = {{11, 59, 58}, {12, 00, 00}, {01, 29, 59},
                                {23, 59, 59}, {19, 12, 17}};

    int i;

    for(i = 0; i < 5; i++) {
        printf("Time is %.2i:%.2i:%.2i", testTime[i].hour, testTime[i].minutes, testTime[i].seconds);

        testTime[i] = timeUpdate(testTime[i]);

        printf("...one second later it's %.2i:%.2i:%.2i\n", testTime[i].hour, testTime[i].minutes, testTime[i].seconds);
    }

    return 0;
}

struct time timeUpdate(struct time now)
{
    now.seconds++;

    if(now.seconds == 60) {
        now.seconds = 00;
        now.minutes++;

        if(now.minutes == 60){
            now.minutes = 00;
            now.hour++;

            if(now.hour == 24){
                now.hour == 00;
            }
        }
    }
    return now;
}