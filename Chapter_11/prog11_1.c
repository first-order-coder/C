#include <stdio.h>

int main(void)
{
    unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u; //0 at the beginning means octal, and the trailing u means unsigned

    printf("%o ", word1 & word2);//we get decimal 40 here in octal its 50
    printf("%o ", word1 & word1); // 77
    printf("%o ", word1 & word2 & word3); //10
    printf("%o ", word1 & 1); // 1 this is masking so only the LSB of word1 is left after the and operation
    //also this extract the right most bit of word1 and from that we can decide if an integer is even or odd because the rightmost bit of ay odd integer is 1 and any even integer is 0.

    int i1 = 0b01010;
    int i2 = 0b0100; //cannot write 0100 becuase this is a octal number , we can write 4 decimal or binary literals like this
     
    i1 ^= i2;
    i2 ^= i1;
    i1 ^= i2;
    printf("%i %i ", i1, i2);

    printf("\n");

    return 0;
}