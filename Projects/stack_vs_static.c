#include <stdio.h>

void normal_counter(void)
{
    int count = 0;
    count++;
    printf("normal_counter: %d\n", count);
}

void static_counter(void)
{
    static int count = 0;
    count++;
    printf("static_counter: %d\n", count);
}

int main(void)
{
    printf("Calling normal_counter:\n");
    normal_counter();
    normal_counter();
    normal_counter();

    printf("\nCalling static_counter:\n");
    static_counter();
    static_counter();
    static_counter();

    return 0;
}