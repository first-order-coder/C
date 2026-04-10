#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
};

void insertEntry(struct entry *insertPointer, struct entry *afterWhichNode, int value)
{
    insertPointer->value = value;
    insertPointer->next = afterWhichNode->next;
    afterWhichNode->next = insertPointer;
}

int main(void)
{
    struct entry head, n1, n2, n3, n5;
    struct entry *lst_pointer;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = 0;

    head.next = &n1;          // dummy head points to first real node

    insertEntry(&n5, &head, 500);   // insert at front

    lst_pointer = head.next;  // start from first real node

    while (lst_pointer != 0) {
        printf("%i\n", lst_pointer->value);
        lst_pointer = lst_pointer->next;
    }

    return 0;
}