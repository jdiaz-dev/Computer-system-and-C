/* 
 --double linked list
 */

#include <stdio.h>

struct Entry {
    int value;
    struct Entry *next;
    struct Entry *prev;
};
void insertEntry(struct Entry *prevNode, struct Entry *newNode)
{
    newNode->next = prevNode->next;
    prevNode->next = newNode;
    newNode->prev = prevNode;
    newNode->next->prev = newNode;
}
void removeEntry(struct Entry * node)
{ 
  node->prev->next = node->next;
  node->next->prev = node->prev;
}
void printLinkedList(struct Entry * linkedList){

  while(linkedList != NULL){
        printf("----pointer %p\n", linkedList);
        printf("----value %i\n", linkedList->value);
        printf("----next %p\n", linkedList->next);
        printf("----prev %p\n\n", linkedList->prev);
        linkedList = linkedList->next;
  }
}
void printLinkedListReverse(struct Entry * linkedList){

  while(linkedList != NULL){
        printf("----pointer %p\n", linkedList);
        printf("----value %i\n", linkedList->value);
        printf("----next %p\n", linkedList->next);
        printf("----prev %p\n\n", linkedList->prev);
        linkedList = linkedList->prev;
  }
}
int main(void)
{
    struct Entry n1, n2, n3, n4, n5, n6;
    struct Entry *startLinkedList = &n1;
    struct Entry *endLinkedList = &n5;

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
    n5.next = NULL;
    n5.prev = &n4;
    
    n6.value = 600;
    n6.next = NULL;
    n6.prev = NULL;

    /* ===================================================== insert */
    /* special structure to insert at the beginning */
    struct Entry n0 = {0, &n1, NULL};
    insertEntry(&n0, &n6);
    /* updating linkedList to point to the new first element */
    startLinkedList = n0.next;

    /* ===================================================== remove */
    removeEntry(&n2);
    printLinkedListReverse(endLinkedList);
}
/* exercise 5 finished */
