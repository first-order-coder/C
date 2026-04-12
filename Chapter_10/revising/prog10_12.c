//Function to sum the elements of an integer array Ver.2
#include <stdio.h>

int arraySum(int *array, const int n)
{
    int sum = 0;
    int *const arrayEnd = array + n;

    for( ;array < arrayEnd; array++) //because array is already initialized no need to do that again.
        sum += *array;

    return sum;
}

int main(void)
{
    int arraySum(int *array, const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));

    return 0;
}