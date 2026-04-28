#include <stdio.h>

void reverse_array(int *arr, int size)
{
    int *left = arr; //points to first element value[0] stored is 1
    int *right = arr + size - 1; //address of the first element + 4 positions(5 positions - 1 position), value[4] = 5

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
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