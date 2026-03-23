#include <stdio.h>

int main(void)
{
    unsigned long long int prev1, prev2, curr3;
    int number;

    printf("Enter the amount of fibonacci you are looking for:");
    scanf("%i", &number);

    prev1 = 1;
    prev2 = 1;
    curr3 = prev1 + prev2;

    while(1){
        curr3 = prev1 + prev2;

        if (curr3 > number)
            break;
        printf("%llu ", curr3);

        prev2 = prev1;
        prev1 = curr3;
    }

    printf("\n");
    return 0;
}