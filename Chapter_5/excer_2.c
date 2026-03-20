#include <stdio.h>

int main(void)
{
    float accunumber, number, final_val;
    char operator;

    printf("Begin Calculations\n");
    if (scanf("%f %c", &accunumber, &operator) != 2){
        printf("Invalid Input");
    };

    if (operator == 'S'){
        printf("The accumulator is set to: %.3f\n", accunumber);

        final_val = accunumber;
        while (operator != 'E') 
        {
            printf("Enter number and operation:");
            scanf("%f %c", &number, &operator);

            if (operator == 'E')
                break;
            if (operator == '+') {
                final_val += number;
                printf("The total is:%.3f\n", final_val);
            }
            else if (operator == '-') {
                final_val -= number;
                printf("The total is:%.3f\n", final_val);
            }
            else if (operator == '/') {
                final_val /= number;
                printf("The total is:%.3f\n", final_val);
            }
            else if (operator == '*'){
                final_val *= number;
                printf("The total is:%.3f\n", final_val);
            }
            else
                printf("Wrong operator\n");
        }
    }
    printf("The calculations are ended\n");
    return 0;
}