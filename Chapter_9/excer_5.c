#include <stdio.h>

int findString(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s1[i + j] == s2[j]; j++) //for example when i = 3 the j will go 0, 1, 2 until it hits the end of s2, after that loop will finish, but during the loop the condition is s1[3 + 0] = s2[0], s1[3 + 1] = s2[1], s1[3 + 2] = s2[2] will be checked. So kind of like holding the i at one value and iterate all the rest of values through it
            ;

        if (s2[j] == '\0')
            return i;   // found starting at index i
    }

    return -1;   // not found
}

int main(void)
{
    char s1[] = "address work";
    char s2[] = "dress";

    int pos = findString(s1, s2);

    printf("%d\n", pos);

    return 0;
}