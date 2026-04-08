//returning a pointer from a function

struct entry
{
    int value;
    struct entry *next;
};

struct entry *findEntry(struct entry *listPtr, int match) //this function returns a pointer to a struct entry
{
    while(listPtr != (struct entry *) 0)
        if(listPtr->value == match)
            return (listPtr); //returns the address of the node that was found
        else
            listPtr = listPtr->next;
    
    return (struct entry *) 0;
}

//each entry in the linked list can only be accessed from the previous one
int main(void)
{
    struct entry *findEntry(struct entry *listPtr, int match);
    struct entry n1, n2, n3;
    struct entry *listPtr, *listStart = &n1;

    int search;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = 0;

    printf("Enter value to locate: ");
    scanf("%i", &search);

    listPtr = findEntry(listStart, search); //adderss of the node which the value was found a match

    if(listPtr != (struct entry *) 0)
        printf("Found %i.\n", listPtr->value);
    else
        printf("Not found.\n");

    return 0;
}