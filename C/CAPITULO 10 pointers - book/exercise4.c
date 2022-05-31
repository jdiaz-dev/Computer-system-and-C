/* 
 * 3. The function developed in exercise 2 only inserts an element after an
 * existing element in the list, thereby preventing you from inserting a new
 * entry at the front of the list. How can you use this same function and yet
 * overcome this problem? (Hint: Think about setting up a special structure to
 * point to the beginning of the list.)
 *
 * by Faisal Saadatamnd
 */

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
void removeEntry(struct Entry * element)
{ 
  if (!element->next) /* if NULL */
		element->next = NULL;
	else
		element->next = element->next->next;
}
void printLinkedList(struct Entry * linkedList){

  while(linkedList != NULL){
        printf("----pointer %p\n", linkedList);
        printf("----value %i\n", linkedList->value);
        printf("----next %p\n", linkedList->next);
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

    /* ===================================================== insert */
    /* special structure to insert at the beginning */
    struct Entry n0 = {0, &n1};
    insertEntry(&n0, &n6);
    /* updating linkedList to point to the new first element */
    linkedList = n0.next;

    /* ===================================================== remove */
    removeEntry(&n1);
    printLinkedList(linkedList);
}

