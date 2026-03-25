#include <stdio.h>

int a, b, c;
float resultSquareRoot;

void userInputs(void){
    printf("Enter a, b and c of the quadratic: ");
    scanf("%i %i %i", &a, &b, &c);
}

float absoluteValue(float x){ //have to use absoluteValue 
    if(x < 0){
        x = -x;
    }
    return x;
}

float sqaureRoot(float x){
    const float epsilon = 0.0001;
    float guess = 1.0;

    while(absoluteValue(guess * guess - x) >= epsilon){
        guess = (guess + x / guess) / 2.0;
    }

    return guess;
}

void rootsReults(float vala, float valb, float valSquareRoot){
    float root_1 = (-valb + valSquareRoot) / (2 * vala);
    float root_2 = (-valb - valSquareRoot) / (2 * vala);

    printf("root 1 is:%.4f and root 2 is:%.4f\n", root_1, root_2);
}

int main(void)
{
    userInputs();

    float discriminant = (b * b) - (4 * a * c);

    if(discriminant < 0){
        printf("The roots are imaginary");
    }
    else{ 
        resultSquareRoot = sqaureRoot(discriminant);
        rootsReults(a, b, resultSquareRoot);
    }
        // printf("%.2f\n", resultSquareRoot);
    // printf("values %i %i %i\n",a, b, c);

    return 0;
}