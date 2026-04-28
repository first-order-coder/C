#include <stdio.h>

// points t the first character of th string literal "apple"
int my_strlen(const char *s)
{
    int count = 0;
    while(*s != 0)
    {
        count++;
        s++; //increment the addresses 1 by 1 until null terminator is met 
    }

    return count;
}

void my_strcpy(char *dest, const char *src)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main(void)
{
    char arr[5];
    int length = my_strlen("apple");
    my_strcpy(arr,"apple");

    printf("%i\n", length);
    printf("%s\n", arr);

    return 0;
}