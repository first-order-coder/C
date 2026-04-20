//3. Given that the expression ~0 produces an integer that contains all 1s, write a function called int_size() that returns the number of bits contained in an int on your particular machine.

#include <stdio.h>

int int_size(void);
unsigned int rotate(unsigned int value, int n);

int main(void)
{
    unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;

    printf("%x\n", rotate(w1, 8));
    printf("%x\n", rotate(w1, -16));
    printf("%x\n", rotate(w2, 4));
    printf("%x\n", rotate(w2, -2));
    printf("%x\n", rotate(w1, 0));
    printf("%x\n", rotate(w1, 44));

    printf("int size = %d bits\n", int_size());

    return 0;
}

int int_size(void)
{
    unsigned int x = ~0u;
    int count = 0;

    while (x != 0) {
        ++count;
        x >>= 1;
    }

    return count;
}

unsigned int rotate(unsigned int value, int n)
{
    unsigned int result, bits;
    int size = int_size();

    if (n > 0)
        n = n % size;
    else
        n = -(-n % size);

    if (n == 0)
        result = value;
    else if (n > 0) {   // left rotate
        bits = value >> (size - n);
        result = (value << n) | bits;
    } else {            // right rotate
        n = -n;
        bits = value << (size - n);
        result = (value >> n) | bits;
    }

    return result;
}