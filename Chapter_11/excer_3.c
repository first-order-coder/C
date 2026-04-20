#include <stdio.h>

int int_size(void)
{
    unsigned int x = ~0u; //all bits are 1, since my machine uses arithmetic right shift using just signed int x = ~0u wilsl never reach all 0 zeros, because it will always shift right by replacing with a 1. But by using unsigned int x this will bring result in logic right shift replacing with zeros.

    //because unsigned value cannot be negative and unsigned right shift behaves like a logical shift, so zeros come in from the left.
    int count = 0;

    while(x != 0) //until the value of x is zero, count increment by 1 and x which started with all 1s move 1 bit to right
    {
        count++;
        x >>= 1;
    }

    return count;
}

//%d and %i bring same results in printf function, but when using scanf function, value 012: with %i = 10 and with %d = 12
//%i auto detects the base, %d assumes base is 10
int main(void)
{
    printf("int size = %d bits\n", int_size());
    return 0;
}
