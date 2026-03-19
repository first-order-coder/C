#include <stdio.h>

int main(void)
{
    float value1, value2;
    char operator;

    printf("Enter the values to be used:");
    scanf("%f %c %f", &value1, &operator, &value2);

    if (operator == '+'){
        printf("%.2f\n", value1 + value2);
    }
    else if (operator == '-'){
        printf("%.2f\n", value1 - value2);
    }    
    else if (operator == '*'){
        printf("%.2f\n", value1 * value2);
    }
    else if (operator == '/'){
        if (value2 == 0){
            printf("Division by zero is not possible\n");
        }
        else {
            printf("%.2f\n", value1 / value2);
        }
    }
    else {
        printf("Invalid operator\n");
    }

    return 0;
}