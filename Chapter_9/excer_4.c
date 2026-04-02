#include <stdio.h>

void substring(char source[], int start, int count, char result[])
{
    int i;
    int j = 0;

    for (i = start; source[i] != '\0' && j < count; i++){
        result[j] = source[i];
        j++;
    }

    result[j] = '\0';
}

int main(void)
{
    char arr[10]; //only 0, 1, 2, ..., 9 are accesible here
    char result[21];
    // scanf("%s", arr); //the scanf stops reading when it sees \n but it only includes \0 at the end of the position of 4

    fgets(arr, sizeof(arr), stdin);

    substring(arr, 4, 20, result);

    printf("%s\n", result);
    
    return 0;
}