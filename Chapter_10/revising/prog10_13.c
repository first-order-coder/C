//pointer version of copystring()
#include <stdio.h>

void copyString(char *to, char *from) //from and to is initialized at the start of this function therefore no need to do it again at the beginning of the for loop.
{
    for( ;*from != '\0'; ++from, ++to)
        *to = *from;
    
    *to = '\0';
}

int main(void)
{
    void copyString(char *to, char *from);
    char string1[] = "A string to be copied";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);

    copyString(string2, "So is this.");
    printf("%s\n", string2);

    return 0;
}