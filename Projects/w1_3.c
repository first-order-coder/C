#include <stdio.h>

void reverse_array(int *arr, int size)
{
    int *left = arr; //points to first element value[0] stored is 1
    int *right = arr + size - 1; //address of the first element + 4 positions(5 positions - 1 position), value[4] = 5

    while (left < right) { //until the left address, is less than right address
        int temp = *left; //temporary hold the value on stored in the *left pointer
        *left = *right; //change the value held at left address to the value held at right address
        *right = temp; //then change the value held at right address to the value held by temp which was the value held by left at the beginning.

        left++; //count up from first elements address
        right--; //count down from last elements address
    }
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main(void)
{
    int values[] = {1, 2, 3, 4, 5};

    reverse_array(values, 5);

    print_array(values, 5);

    return 0;
}