#include <stdio.h>

int int_size(void)
{
    unsigned int word = ~0u;
    int count = 0;

    while(word != 0){
        count++;
        word >>= 1;
    }

    return count;
}

int bit_test(unsigned int x, int n)
{
    int size = int_size();

    if(n < 0 || n >= size) //if user gives negative values or values larger then size then return 0
        return 0;
    
    return((x >> (size - n - 1)) & 1u);    
}

unsigned int bit_set(unsigned int x, int n)
{
    int size = int_size();

    if(n < 0 || n >= size) 
        return 0;
    
    return(x | (1u << (size - n - 1)));
}

int main(void)
{
    unsigned int word = 0x0;

    printf("int size = %d\n", int_size());

    printf("bit 0 = %d\n", bit_test(word, 0));
    word = bit_set(word, 0);
    printf("after setting bit 0: %u\n", word);
    printf("bit 0 = %d\n", bit_test(word, 0));

    return 0;
}


