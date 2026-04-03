#include <stdio.h>
#include <stdbool.h>

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') //if either one of the the conditions become false, then this loop stops
        i++;
    
    if(s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;
    else
        areEqual = false; 
    
    return areEqual;
}

int main(void)
{
    bool equalStrings(const char s1[], const char s2[]);
    const char stra[] = "string compare test";
    const char strb[] = "string";

    printf("%i\n\a", equalStrings(stra, strb));
    printf("%i\n\a", equalStrings(strb, strb));
    printf("%i\n\a", equalStrings(strb, "string"));

    return 0;
}