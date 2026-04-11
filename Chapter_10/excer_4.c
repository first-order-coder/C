#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
};

void removeEntry(struct entry *element);
void print_list(struct entry *p);

void removeEntry(struct entry *element)
{
    if(element  == NULL || element->next == NULL) //if there is no node after element or the element->next is NULL (next node)
        return;
    //if the element passed is n4, we want to remove the next element then n4->next->next becomes NULL (n4->next = n5 and n5->next = NULL), so n4.next = NULL.

    element->next = element->next->next; //if the element passed is &n2 then n2.next becomes n4, because n2.next = n3 and n3.next = n4, therefore end result of element->next is n4. And n3 is removed from the linked list.
}

void print_list(struct entry *p)
{
    int i;

    for(i = 1; p; i++){
        printf("n%i (%p)\n", i, (void *) p);
        printf("value: %i\n", p->value);
        printf("next: %p\n", i, (void *) p->next);
        p = p->next;
    }
}

int main(void)
{
    struct entry n1, n2, n3, n4, n5;
    struct entry *list_pointer = &n1;
    struct entry n0;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = &n4;

    n4.value = 400;
    n4.next = &n5;

    n5.value = 500;
    n5.next = NULL;

    removeEntry(&n4);

    struct entry n0 = {0, &n1}; //special trick for removing the first real node. n0 is a temporary node placed before the real list. n0->n1->n2->n3->n4.
    //why we need this, when we want to remove the first real node n1, we need some node before it.

    removeEntry(&n0);
    list_pointer = n0.next;

    print_list(list_pointer);

    return 0;
}