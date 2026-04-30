#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

void print_student(struct Student *s) //if a struct is passed directly, C makes a copy of the whole struct, with a pointer it pnly passes the address of the struct, which is more efficient, especially if the struct is large.

// also if the struct is passed directly the C makes a copy of the struct, and when the struct is modified it only changes the copy, not the original
{
    printf("Id: %i\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}

void update_marks(struct Student *s, float new_marks)
{
    s->marks = new_marks;
}

int main(void)
{
    struct Student s1 = {14, "Mark", 55};
    update_marks(&s1, 95);
    print_student(&s1); //the function expects a pointer to an address, so an address must be passed.

    return 0;
}