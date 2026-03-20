#include <stdio.h>

int main(void)
{
    int value1, value2;
    float final;

    while (value1 != 0)
    {
        printf("Enter the two values:");
        scanf("%i %i", &value1, &value2);
        
        if (value2 == 0)
            printf("Cannot divide by zero\n");
        else if (final = (float) value1 / value2)
            printf("%.3f\n", final);
    }

    return 0;
}