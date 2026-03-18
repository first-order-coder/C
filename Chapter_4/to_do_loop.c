#include <stdio.h>

int main(void){

    long long number, right_digit;

    printf("Enter your number.\n");
    scanf("%lld", &number);

    do {
        right_digit = number % 10;
        printf("%lld", right_digit);
        number = number / 10;
    }
    while (number != 0);

    printf("\n");
}