#include <stdio.h>

int main(void)
{
    int digit, num;

    printf("Enter the digit\n");
    scanf("%i", &digit);

    while (digit != 0)
    {
        num = digit % 10;
        if (num == 0)
            printf("zero ");
        else if (num == 1)
            printf("one ");
        else if (num == 2)
            printf("two ");
        else if (num == 3)
            printf("three ");
        else if (num == 4)
            printf("four ");
        else if (num == 5)
            printf("five ");
        else if (num == 6)
            printf("six ");
        else if (num == 7)
            printf("seven ");
        else if (num == 8)
            printf("eight ");
        else if (num == 9)
            printf("nine ");
        else
            printf("Invalid number\n");  
        digit = digit / 10;    
    }
    printf("\n");
    return 0;
}