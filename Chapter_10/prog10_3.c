#include <stdio.h>

int main(void)
{
    int i1 = 5, i2;
    int *p2;

    int *p1 = &i1;
    i2 = *p1 / 2 + 10;
    p2 = p1; // p2 = p1 means, address held by p1 is given to p2:t *p2 holds the same value that is held by *p1 pointer

    printf("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n", i1, i2, *p1, *p2);

    return 0;
}