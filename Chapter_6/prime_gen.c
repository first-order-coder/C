#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int p, i, primes[50], primeIndex = 2; //primeIndexes 0 and 1 are already used.
    bool isPrime;

    // given the condition that we know the first two prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 50; p = p + 2){
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; i++) //we will skip 2 because there arent any even numbers in prime numbers except 2
            if (p % primes[i] == 0)
                isPrime = false; //this loop runs until isPrime is true; once its false it will exit
        if (isPrime == true) {
            primes[primeIndex] = p; //prime number is added to array only if isPrime == true
            primeIndex++;
        }
    }

    for (i = 0; i < primeIndex; i++) //last primeIndex is 499
        printf("%i ", primes[i]);
        printf("\n");
        printf("%i ", primeIndex);

    printf("\n");
    return 0;
}