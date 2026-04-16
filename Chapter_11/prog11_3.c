//Function to shfit an unsigned int left if the shift count is positive and right if the shift count is negative

#include <stdio.h>

unsigned int shift(unsigned int value, int n) 
{
    if(n > 0) //left shift
        value <<= n;
    else 
        value >>= -n; //right shift

    return value;
}

int main(void)
{
    unsigned int w1 = 017777u, w2 = 0444u, w3 = 3;
    unsigned int shift(unsigned int value, int n);

    printf("%o\t%o\n", shift(w1, 5), w1 << 5);
    printf("%o\t%o\n", shift(w1, -6), w1 >> 6);
    printf("%o\t%o\n", shift(w2, 5), w1 << 5);
    printf("%i\t%i\n", shift(w3, -1), w3 >> 1);

    return 0;
}