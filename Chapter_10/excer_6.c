/*
 * 6. Develop insertEntry() and removeEntry() functions for a doubly linked
 * list that are similar in function to those developed in previous exercises
 * for a singly linked list. Why can your removeEntry() function now take as
 * its argument a direct pointer to the entry to be removed from the list?
 *
 * Answer:
 * In a doubly linked list, each node contains both a next pointer and a
 * previous pointer. Because of this, removeEntry() can take a direct pointer
 * to the node to be removed, since the function can access both neighboring
 * nodes directly and reconnect them without needing to search for the
 * previous node first.
 */

#include <stdio.h>

struct entryD {
    int value;
    struct entryD *previous;
    struct entryD *next;
};

struct entryD *insertEntry(struct entryD *element, struct entryD *pos);
struct entryD *removeEntry(struct entryD *element);
void print_dlist(struct entryD *p);

struct entryD *insertEntry(struct entryD *element, struct entryD *pos) //this function returns a pointer to the structure entryD
{
    element->next = pos->next;
    element->previous = pos;

    if (pos->next != NULL)
        pos->next->previous = element;

    pos->next = element;

    return element;
}

struct entryD *removeEntry(struct entryD *element)
{
    if (element->previous != NULL)
        element->previous->next = element->next;

    if (element->next != NULL)
        element->next->previous = element->previous;

    return element->next;
}

void print_dlist(struct entryD *p)
{
    while (p != NULL) {
        printf("%d\n", p->value);
        p = p->next;
    }
}

int main(void)
{
    struct entryD n1, n2, n3, n4, n5, n6;
    struct entryD *list_pointer = &n1;

    n1.value = 100;
    n1.previous = NULL;
    n1.next = &n2;

    n2.value = 200;
    n2.previous = &n1;
    n2.next = &n3;

    n3.value = 300;
    n3.previous = &n2;
    n3.next = &n4;

    n4.value = 400;
    n4.previous = &n3;
    n4.next = &n5;

    n5.value = 500;
    n5.previous = &n4;
    n5.next = NULL;

    n6.value = 600;
    n6.previous = NULL;
    n6.next = NULL;

    insertEntry(&n6, &n2);   /* insert n6 after n2 */
    /* removeEntry(&n3); */  /* example removal */

    print_dlist(list_pointer);

    return 0;
}