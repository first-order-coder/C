//Function to sum the elements of an integer array

#include <stdio.h>

int arraySum(int array[], const int n)
{
    int sum = 0, *ptr;
    int * const arrayEnd = array + n; //points to one position past the last element.

    for(ptr = array; ptr < arrayEnd; ptr++) //ptr = array, means pointer is pointing to the address of the first element of the array and, until ptr < arrayEnd means arrayEnd is pointing to address of the end element and therefore ptr is counting addresses one by one incrementing, until ptr is pointing to the address last address
        sum += *ptr;
    
    return sum;
}

//ptr = where (points to the first element, contains the address of the first element)
//*ptr = what is there (value at that address)

int main(void)
{
    int arraySum(int array[], const int n);
    int value[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(value, 10));

    return 0;
}

