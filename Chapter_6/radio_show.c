#include <stdio.h>

int main(void)
{
    int ratingCounters[11], i, response;

    for (i=1; i<=10; i++)
        ratingCounters[i] = 0;

    printf("Enter your response\n");

    for (i = 1; i <= 20; i++)
    {
        scanf("%i", &response);

        if (response < 1 || response > 10)
            printf("Bad response");
        else
            ratingCounters[response]++;
    }
    printf("Recorded responses\n");
    printf("-------------------------\n");
    for (i = 1; i <= 10; ++i)
        printf("%4i%14i\n", i, ratingCounters[i]); //4 and 14 are character widths set to make the output look better

    return 0;
}