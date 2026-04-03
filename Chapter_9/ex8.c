#include <stdio.h>

int stringLength(char s1[])
{
    int i = 0;
    while (s1[i] != '\0'){
        i++;
    }
    return i;
}

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

void removeString(char source[], int start, int count)
{
    int i = 0, j = 0;

    while (source[i] != '\0') {
        if (i < start || i >= start + count) {
            source[j] = source[i];
            j++;
        }
        i++;
    }

    source[j] = '\0'; //have to include the null terminator at the end otherwise the loop wont know when to end
}

void insertString(char source[], char text[], int start){

    int i, j;
    int sourceLen = 0;
    int textLen = 0;

    while (source[sourceLen] != '\0')
        sourceLen++;
    
    while (text[textLen] != '\0')
        textLen++;

    for (i = sourceLen; i >= start; i--)
        source[i + textLen] = source[i];

    for (j = 0; text[j] != '\0'; j++)
        source[start + j] = text[j];
}

void replaceString(char source[], char s1[], char s2[])
{
    int startIndex = findString(source, s1);

    removeString(source, startIndex, stringLength(s1));
    insertString(source, s2, startIndex);
}

int main(void){

    char text[] = "Great things take time";
    char s1[] = "things";
    char s2[] = "works";

    replaceString(text, s1, s2);
    printf("%s\n", text);

    return 0;
}