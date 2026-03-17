#include <stdio.h>

int main() {

    float f1 = 123.125, f2;
    int i1, i2 = -150;
    char c = 'a';

    i1 = f1;
    printf("%i\n",i1); // should be 123

    f1 = i2;
    printf("%f\n",f1); //should be -150.0000

    f1 = i2 / 100;
    printf("%f\n",f1); //first integer division then assigned to float f1, int(-150/100) = -1

    f2 = i2 / 100;
    printf("%f\n",f2); //-1.0000

    f2 = (float) i2 / 100; //type cast operator
    printf("%f\n",f2); // the i2 variable is converted to a float first but not permanently

    return 0;

}