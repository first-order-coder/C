#include <stdio.h>

int main(void)
{
    char c = 'Q';
    char *char_pointer = &c;

    printf("%c %c\n", c, *char_pointer);

    c = '/'; //the original Q is changed and *char_pointer points to the value stored by c, therefore its also changed. 
    printf("%c %c\n", c, *char_pointer);

    *char_pointer = '('; //here is the same thing *char_pointer is derefencing the values stored by c and that value is changed from Q to this '('
    printf("%c %c\n", c, *char_pointer);

    return 0;
}