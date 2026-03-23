#include <stdio.h>

int main(void)
{
    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    }; //these are characters not integers
    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;

    printf("Number to be converted?");
    scanf("%ld", &numberToConvert);
    printf("Base? ");
    scanf("%i", &base);

    do {
        convertedNumber[index] = numberToConvert % base;
        index++;
        numberToConvert = numberToConvert / base; //at the end of this loop the index is one ahead of the number of items in the array, why? index++ executes even after the final value was added to array: ex:- 4 stored as 001, and the index = 4;
    }
    while (numberToConvert != 0);

    printf("Converted number = ");

    for (index--; index >= 0; --index) { // so index-- means start from one less than where index was previously finished; 
        nextDigit = convertedNumber[index];
        printf("%c", baseDigits[nextDigit]);
    }

    printf("\n");
    return 0;
}