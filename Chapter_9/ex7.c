#include <stdio.h>

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

int main(void){

    char text[25] = "the wrong son";

    insertString(text, "per", 10);

    printf("%s\n", text);

    return 0;
}