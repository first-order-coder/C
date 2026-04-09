//Function to sum the elements of an integer array

#include <stdio.h>

int arraySum(int array[], const int n)
{
    //using the pointers we are accessing each element of the array
    int sum = 0, *ptr;
    int *const arrayEnd = array + n; //constantly pointing to the end of the array, constant pointer

    for(ptr = array; ptr < arrayEnd; ptr++) //ptr = array means first item is set to arrays[0] address
        sum += *ptr; //dereferencing and taking the value at the address pointed by ptr

    return sum;
}

int main(void)
{
    int arraySum(int array[], const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));

    return 0;
}