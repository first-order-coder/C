#include <stdio.h>
#include <math.h>

int main() {

    float F, cel;
    scanf("%f",&F);
    
    cel = (F - 32) / 1.8f;

    printf("%f\n", cel);

    char c, d;

    c = 'd';
    d = c;

    printf ("d = %c\n", d);

    float poly_val,x;
    printf("enter the value for x:");
    scanf("%f", &x);

    poly_val = 3 * pow(x,3) - 5 * pow(x, 2) + 6;

    printf("%f\n", poly_val);

    return 0;
}