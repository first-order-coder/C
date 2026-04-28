#include <stdio.h>

int arr[] = {5, 10, 3, 7, 2};

int array_sum(int *arr, int size) //instead of passing the whole array, we can pass a pointer to the first element of the array, since it will point to the first element of the array.

//when passing an array to a function, in C int array_sum(arr, size) is as same as the above line, by default it passes a pointer to the first element.
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int array_max(int *arr, int size)
{
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int array_min(int *arr, int size)
{
    int min = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

double array_average(int *arr, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    return (double) sum / size;
}

int main(void){

    int sum = array_sum(arr, 5);
    int max = array_max(arr, 5);
    int min = array_min(arr, 5);
    double average = array_average(arr, 5);

    printf("Sum: %i\n", sum);
    printf("Average: %.1f\n", average);
    printf("Max: %i\n", max);
    printf("Min: %i\n", min);

    return 0;
}