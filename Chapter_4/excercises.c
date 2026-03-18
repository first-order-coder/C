#include <stdio.h>

int main(void) {

    int n, i, sum;

    for (n = 1; n <= 5; n++){
        sum = 1;
        for (i = n; i >= 1; i--){
            sum = i * sum;
        }
        printf("%i\n", sum);
    }

}