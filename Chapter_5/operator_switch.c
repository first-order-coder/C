#include <stdio.h>

int main(void)
{
    float value1, value2;
    char operator;

    printf("Type in your expression:");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch(operator)
    {
        case '+':
            printf("%.2f\n", value1 + value2);
            break;
        case '-':
            printf("%.2f\n", value1 - value2);
            break;
        case '*':
            printf("%.2f\n", value1 * value2);
            break;
        case '/':
            if (value2 == 0)
                printf("Division by zero is not possible check u r math, u might be special\n");
            else 
                printf("%.2f\n", value1 / value2);
            break;
        default:
            printf("Unknown opeartor");
            break;
    }

    return 0;
}