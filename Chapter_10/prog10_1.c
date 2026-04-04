#include <stdio.h>

int main(void)
{
    int count = 10, x;
    int *int_pointer;

    int_pointer = &count; //points to the address where the count variable is stored where count has stored value 10.
    x = *int_pointer; // this is dereferencing accessing the variables value thats held by int_pointer

    printf("count = %i, x = %i, count + x = %i\nThe address where count is stored is:%p\n", count, x, count + x, int_pointer);
    printf("The address where count is stored is:%p\n", &count);

    return 0;
}