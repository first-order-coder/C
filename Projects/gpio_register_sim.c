#include <stdio.h>

#define LED1 0
#define LED2 1
#define LED3 2

void gpio_set(unsigned int *reg, int pin)
{
    *reg |= (1u << pin);
}

void gpio_clear(unsigned int *reg, int pin)
{
    *reg &= ~(1u << pin);
}

void gpio_toggle(unsigned int *reg, int pin)
{
    *reg ^= (1u << pin);
}

void print_bits(unsigned int value)
{
    for (int i = 31; i >= 0; i--) {
        printf("%u", (value >> i) & 1);
    }

    printf("\n");
}

int main(void)
{
    unsigned int GPIO_ODR = 0;

    printf("Initial GPIO_ODR: ");
    print_bits(GPIO_ODR);

    gpio_set(&GPIO_ODR, LED1);
    printf("After setting LED1: ");
    print_bits(GPIO_ODR);

    gpio_set(&GPIO_ODR, LED2);
    printf("After setting LED2: ");
    print_bits(GPIO_ODR);

    gpio_toggle(&GPIO_ODR, LED2);
    printf("After toggling LED2: ");
    print_bits(GPIO_ODR);

    gpio_set(&GPIO_ODR, LED3);
    printf("After setting LED3: ");
    print_bits(GPIO_ODR);

    gpio_clear(&GPIO_ODR, LED1);
    printf("After clearing LED1: ");
    print_bits(GPIO_ODR);

    return 0;
}