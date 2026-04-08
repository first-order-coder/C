#include <stdio.h>

void test(int *int_pointer) //int_pointer gets a opy of the address stored in p. Both p and int_pointer points to the same i
//the reason int_pointer which used as a argument parameter, is a pointer because the type of value (which is p) passed is a type (int *)
{
    *int_pointer = 100; //dereferencing, go to the address stored in int_pointer and change the integer there to 100
}

int main(void)
{
    void test(int *int_pointer);
    int i = 50, *p = &i;

    printf("Before the call to test i = %i\n", i);

    test(p); //copy of the value of p, which is an address but what test() receives is a copy of that address which is &i
    printf("After the call to test i = %i\n", i);

    return 0;
}