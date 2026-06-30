#include <stdio.h>

struct holdFractions {
    float a;
    float b;
    float sum;
    float difference;
    float product;
    float quotient;
};

void calculateFractions(struct holdFractions *fractions, float a, float b){
    if(fractions == NULL)
    {
        return;
    }

    fractions->a = a; //since fractions is recived as a pointer we can use the -> to access the values inside
    fractions->b = b;

    fractions->sum = a + b;
    fractions->difference = a - b;
    fractions->product = a * b;
    
    //to handle the division by zero error
    if (b != 0.0f)
    {
        fractions->quotient = a / b;
    }
    else{
        fractions->quotient = 0.0f;
        printf("Error: division by zero\n");
    }
}

void printFractions(const struct holdFractions *fractions)
{
    if(fractions == NULL)
    {
        return;
    }

    printf("a          = %.2f\n", fractions->a);
    printf("b          = %.2f\n", fractions->b);
    printf("Sum        = %.2f\n", fractions->sum);
    printf("Difference = %.2f\n", fractions->difference);
    printf("Product    = %.2f\n", fractions->product);
    printf("Quotient   = %.2f\n", fractions->quotient);
}

int main(void)
{
    struct holdFractions fractions = {0}; //this creates the actual structure 
    
    calculateFractions(&fractions, 0.5f, 0.5f); //the created structure is passed address to the functions passed in as pointers
    printFractions(&fractions);

    return 0;
}