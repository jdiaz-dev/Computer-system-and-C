#include <stdio.h>

struct Entry {
    int value;
    struct Entry *next;
};
void insertEntry(struct Entry *prevNode, struct Entry *newNode)
{
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}
void printLinkedList(struct Entry * linkedList){

    while(linkedList != NULL){
        printf("----pointer %p\n", linkedList); //printing pointer
        printf("----value %i\n", linkedList->value);
        printf("----next %p\n", linkedList->next); //printing pointer
        linkedList = linkedList->next;
    }
}
int main(void)
{
    struct Entry n1, n2, n3, n4, n5, n6;
    struct Entry *linkedList = &n1;

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
    
    n6.value = 600;
    n6.next = NULL;

    
    insertEntry(&n1, &n6);
    printLinkedList(linkedList);
}


