#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
    struct entry *prev;
};

int main(void)
{
    struct entry n1, n2, n3, n4, n5;
    struct entry *lstPtr = &n1; //points to the first element of the list of nodes

    n1.value = 100;
    n1.next = &n2;
    n1.prev = NULL;

    n2.value = 200;
    n2.next = &n3;
    n2.prev = &n1;
    
    n3.value = 300;
    n3.next = &n4;
    n3.prev = &n2;
    
    n4.value = 400;
    n4.next = &n5;
    n4.prev = &n3;
    
    n5.value = 500;
    n5.next = (struct entry *) 0;
    n5.prev = &n4;

    while((lstPtr->next != (struct entry *) 0)){
        printf("value: %i\n", lstPtr->value);

        if(lstPtr->next != NULL)
            printf("next value is: %i", lstPtr->next->value);
        else
            printf("next value is:NULL");

        if(lstPtr->prev != NULL)
            printf(" previous value is: %i", lstPtr->prev->value);
        else
            printf(" previous value is:NULL");
        
        printf("\n");

        lstPtr = lstPtr->next; // we have already initialized lstPtr before and therefore we can assign the value lstPtr->next is which is a address.
    }

    return 0;
}