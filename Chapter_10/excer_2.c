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
    struct entry head, n1, n2, n3, n4, n5; //these are struct variables
    struct entry *lst_pointer = &n1;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0;

    head.next = &n1;

    // n4.value = 400; //adding n4 node between n1 and n2 
    // n4.next = n1.next; //first have to point n4s next pointer has to point to node 2 which can be taken with &n2, but using &n2 is only available if we know that the n1 is linked to n2 if we didint know what n1 was pointing next, or what comes after n1, then we have to use "n1.next", which is the safest way to do it. 
    // n1.next = &n4;

    insertEntry(&n5, &n2, 500); //have to pass pointers to struct entry, so need to pass thir addresses:                             struct entry *insertPointer = &n4; which looks like this

    while(lst_pointer != (struct entry *) 0){
        printf("%i\n", lst_pointer->value);
        lst_pointer = lst_pointer->next;
    }
    
    return 0;
}