#include <stdio.h>

int main(void) {

    long long digits, right_digit; //when a number bigger than an int cant contain is given as input the code will crash. overflow breaks the code.

    printf("Enter the digits:\n");
    scanf("%lld", &digits); 
    
    while (digits != 0){
        right_digit = digits % 10;
        printf("%lld", right_digit); // each following digit is displayed in the same line as previous since no newline character
        digits = digits / 10;
    }
    
    printf("\n");

    return 0;
}