#include <stdio.h>

#define NUMBER_OF_GRADES 5

struct Student
{
    char name[50];
    int idNumber;
    float grades[NUMBER_OF_GRADES];
};

int main(void)
{
    struct Student student1 = {
        .name = "John Smith",
        .idNumber = 1025,
        .grades = {85.5f, 90.0f, 78.5f, 88.0f, 92.5f} //array containing the student's grades
    };

    printf("Name: %s\n", student1.name);
    printf("ID number: %d\n", student1.idNumber);

    printf("Grades: ");

    for (int i = 0; i < NUMBER_OF_GRADES; i++){
        printf("%.1f\n", student1.grades[i]);
    }

    printf("\n");

    return 0;
}