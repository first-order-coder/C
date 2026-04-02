#include <stdio.h>

int strToInt(const char string[])
{
    int i, intValue, result = 0;

    for (i = 0; string[i] >= '0' && string[i] <= '9'; i++)
    {
        int value = string[i] - '0';
        result = result * 10 + value;
    }

    return result;
}

int main(void)
{
    int strToInt(const char string[]);

    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("100") + 25); // 100 will be converted first then 25 will be added to that result
    printf("%i\n", strToInt("13x5")); //stops at x because x is not a char we are handling
    
    return 0;
}