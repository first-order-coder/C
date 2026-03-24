#include <stdio.h>

int main(void)
{
    long int x_to_the_n(int x, int n);

    int num1, num2;

    printf("Enter the value and the power: ");
    scanf("%i %i", &num1, &num2);

    long int result = x_to_the_n(num1, num2);

    printf("%lu\n", result);
    return 0;
}

long int x_to_the_n(int x, int n)
{   
    long int result = 1;

    for(int i = 0; i < n; i++){
        result *= x;
    }

    return result;
}