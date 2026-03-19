#include <stdio.h>

int numberofGrades, i, grade;
int gradeTotal = 0;
int faliureCount = 0;
float averageGrade;

int main(void){

    printf("How many grades are you going to enter?\n");
    scanf("%i", &numberofGrades);

    for (i = 1; i <= numberofGrades; i++){

        printf("Enter grade #%i:", i);
        scanf("%i", &grade);

        gradeTotal += grade;
        if (grade < 65) {
            faliureCount++;
        }
    }
    averageGrade = (float) gradeTotal / numberofGrades;

    printf("\nGrade average = %.2f\n", averageGrade);
    printf("Number of faliuress = %i\n", faliureCount);
}