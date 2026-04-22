#include <stdio.h>

typedef int (*FunctionPtr)(void); //pointer to a function that takes no arguments and returns int
//this is a function pointer variable, a new type name called FunctionPtr is now created, the type is a pointer to a function returning int and taking no arguments.

int hello(void)
{
    return 42;
}

int main(void)
{
    FunctionPtr fp;
    fp = &hello;
    
    printf("%d\n", fp()); //calls hello through the function pointer

    return 0;
}