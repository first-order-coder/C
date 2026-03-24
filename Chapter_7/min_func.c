#include <stdio.h>

int minimum (int values[10])
{
    int i, minValue;
    minValue = values[0];

    for (i = 1; i < 10; i++){
        if (values[i] < minValue){
            minValue = values[i];
        }    
    }   

    return minValue;
}

int main(void) 
{
    int  i, minScore, scores[10] = {55, 65, 43, 44, 82, 83, 95, 45, 60, 48};

    printf("Enter the 10 scores\n");

    // for (i = 0; i < 10; i++)
    //     scanf("%i", &scores[i]);
    
    minScore = minimum (scores);
    printf("\nMinimum score is %i\n", minScore);

    return 0;
}