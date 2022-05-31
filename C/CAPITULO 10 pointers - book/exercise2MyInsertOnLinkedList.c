#include <stdio.h>
#include <stdlib.h> //provide capability to use malloc

struct entry {
  int value;
  struct entry *next; 
};

void insertAfter(struct entry *prevNode, int newValue)
{
  // struct entry *newNode; // it will throw the next error : Segmentation fault (core dumped)
  struct entry *newNode = (struct entry*) malloc(sizeof(struct entry));
  newNode->value = newValue;
  newNode->next = prevNode->next;
  prevNode->next = newNode;

}
int main(void)
{
  struct entry n1, n2, n3, n4;
  struct entry *listPointer;

  n1.value = 1;
  n2.value = 2;
  n3.value = 3;
  n4.value = 4;
  n1.next = &n2;
  n2.next = &n3;
  n3.next = (struct entry *) 0;
  listPointer = &n1;

  while(listPointer != (struct entry *) 0){

    if(listPointer->value == 2){
      insertAfter(listPointer, 4);
    }

      printf("---Item = %i\n", listPointer->value);
      listPointer = listPointer->next;
    }


}
