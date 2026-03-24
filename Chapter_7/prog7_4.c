#include <stdio.h>

void calculateTriangularNumber (int n)
{
    int i, triangularNumber = 0;

    for (i = 1; i <= n; i++)
        triangularNumber += i;
    
    printf("Triangular number %i is %i\n", n, triangularNumber);
}

int main(void)
{
    int number;
    
    printf("Triangular number needed: ");
    scanf("%i", &number);

    calculateTriangularNumber(number);

    return 0;
}