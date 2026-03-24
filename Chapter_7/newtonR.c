#include <stdio.h>

float absoluteValue (float x)
{
    if (x < 0)
        x = -x;
    return (x);
}

float squareRoot (float x)
{
    const float epsilon = 0.0001;
    float       guess   = 1.0;

    while (absoluteValue (guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0; 
    
    return guess;
}

int main(void)
{
    printf("SqaureRoot (2.0) = %f\n", squareRoot (2.0));
    printf("SqaureRoot (17.50) = %f\n", squareRoot (17.50));
    printf("SqaureRoot (144.0) = %f\n", squareRoot (144.0));

    return 0;
}