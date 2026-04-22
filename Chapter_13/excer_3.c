#include <stdio.h>

#define TYPEOF(x) _Generic((x), \
    int: "int", \
    float: "float", \
    double: "double", \
    long int: "long int", \
    default: "other")

int main(void)
{
    float       f = 1.00;
    short int   i = 100;
    long int    l = 500L;
    double      d = 15.00;


    printf("%f %s\n", f / 2,  TYPEOF(l + i));
    return 0;
}