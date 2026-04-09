#include <stdio.h>

void copyString(char *to, char *from)
{
    while(*from)
        *to++ = *from++;

    *to = '\0'; // this add null terminator to the end of string2
}

int main(void)
{
    void copyString(char *to, char *from);
    char string1[] = "A string to be copied";
    char string2[50];

    copyString(string2, string1); //both strings are passed but they are taken as pointers.
    printf("%s\n", string2);

    copyString(string2, "So is this");
    printf("%s\n", string2);

    return 0;
}