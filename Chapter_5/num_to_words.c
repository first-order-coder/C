#include <stdio.h>

int main(void)
{
    int digit, num, j;
    int arr[100];
    int i = 0;

    printf("Enter the digit\n");
    scanf("%i", &digit);

    while (digit != 0)
    {
        num = digit % 10;
        arr[i] = num;
        i++;
        digit = digit / 10;    
    }

    for (j = i - 1; j > -1; j--){
        if (arr[j] == 0)
            printf("zero ");
        else if (arr[j] == 1)
            printf("one ");
        else if (arr[j] == 2)
            printf("two ");
        else if (arr[j] == 3)
            printf("three ");
        else if (arr[j] == 4)
            printf("four ");
        else if (arr[j] == 5)
            printf("five ");
        else if (arr[j] == 6)
            printf("six ");
        else if (arr[j] == 7)
            printf("seven ");
        else if (arr[j] == 8)
            printf("eight ");
        else if (arr[j] == 9)
            printf("nine ");
        else
            printf("Invalid number\n"); 
    }
    printf("\n");
    return 0;
}