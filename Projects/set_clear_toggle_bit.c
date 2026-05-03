#include <stdio.h>

unsigned int set_bit(unsigned int value, int bit)
{
    value |= (1u << bit);
    return value;
}

unsigned int clear_bit(unsigned int value, int bit)
{
    value &= ~(1u << bit);
    return value;
}

unsigned int toggle_bit(unsigned int value, int bit)
{
    value ^= (1u << bit);
    return value;
}

int check_bit(unsigned int value, int bit)
{
    return (value >> bit) & 1; //first shift the bit we want to check to the 
}

void print_bit(unsigned int value)
{
    for(int i = 31; i >= 0; i--){
        printf("%u", (value >> i) & 1);
    }

    printf("\n");
}

int main(void)
{
    unsigned int value, result_set, result_clear, result_toggle;
    int bit, result_check;

    printf("Enter Value and the Bit: ");
    scanf("%u %i", &value, &bit);

    result_set = set_bit(value, bit);
    result_clear = clear_bit(value, bit);
    result_toggle = toggle_bit(value, bit);
    result_check = check_bit(value, bit);

    printf("Set: ");
    print_bit(result_set);

    printf("Clear: ");
    print_bit(result_clear);

    printf("Toggle: ");
    print_bit(result_toggle);
    
    printf("Check Result: %d\n",result_check);

    return 0;
}