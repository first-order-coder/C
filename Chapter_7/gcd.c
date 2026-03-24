#include <stdio.h>

int greatestCommonDivisor(int u, int v) //this has to change to int type, because this returns u an int
{
    int temp;

    printf("gcd of %i and %i is ", u, v);

    while(v != 0){
        temp = u % v;
        u = v;
        v = temp;
    }
    
    return u;
}

int main(void)
{
    int num1, num2, result;
    
    printf("Values are: ");
    scanf("%i %i", &num1, &num2);

    result = greatestCommonDivisor(num1, num2);

    printf("%i\n", result);

    return 0;
}