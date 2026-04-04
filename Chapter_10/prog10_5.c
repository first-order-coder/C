#include <stdio.h>

int main(void)
{
    struct intPtrs
    {
        int *p1;
        int *p2;
    };

    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2; //we set the pointer p2 to hold the address of the i2, after we use dereferncing of this p2 pointer to set the value of i2 to be -97.
    *pointers.p2 = -97; //pointer.p2 is a pointer itself so we can write *pointers.p2 that way.

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i1 = %i, *pointers.p2 = %i\n", i1, *pointers.p2);

    return 0;
    
}