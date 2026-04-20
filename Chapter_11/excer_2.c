//2. Write a program that determines whether your particular computer performs an arithmetic or a logical right shift.

//With logical right shift the left most bit is filled with 0, means: logical shift doesnt preserve the sign
//With arithmetic shift, the left most bit is filled with the old bit that was there before being shifted: arithemtic shift preserves the sign

#include <stdio.h>

int main(void)
{
    int x = -4;

    if((x >> 1) == -2)
        printf("Arithmetic right shift\n"); //Arithmetic right shift -> 11111100 >> 1 = 11111110 which -2
    else
        printf("Logical right shift\n");//Logical right shift -> 11111100 >> 1 = 01111110 which is 126
    
    return 0;
}