#include <stdio.h>

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

int main(void)
{
    char text[] = "the wrong son";

    removeString(text, 4, 6);

    printf("%s\n", text);

    return 0;
}