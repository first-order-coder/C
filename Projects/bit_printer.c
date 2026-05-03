#include <stdio.h>

void print_bits(unsigned int x)
{
    // C doesnt have a built in binary foromt to print the binary numbers. 
    // So we have to manually print the bits using a loop.
    for (int i = 31; i >= 0; i--) {
        printf("%u", (x >> i) & 1); // (x >> i) means bring the bit you want to check to the far right side. then & 1 means extract only that far-right bit.
    }

    printf("\n");
}

int main(void)
{
    unsigned int number;

    printf("Enter Number: ");
    scanf("%u", &number);

    print_bits(number);

    return 0;
}