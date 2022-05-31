#include <stdio.h>

int main(void)
{
  struct entry {
    int value;
    struct entry *next; 
  };

  struct entry n1, n2, n3;
  struct entry *listPointer = &n1; //setting start of the linked list
  int i; 

  n1.value = 100;
  n2.value = 200;
  n3.value = 300;
  n1.next = &n2;
  n2.next = &n3;
  n3.next = (struct entry *) 0; // casting to a struct and marking end of linked list
  
  i = n1.next->value;
  i = 4;

  while(listPointer != (struct entry *) 0){
    printf("%i\n", listPointer->value);
    listPointer = listPointer->next;
  }

  return 0;
}

/* 
  --notice that in a linked list n2_3 does not have to physically occur after n1 and before of n3, it can be in whatever part of memory. it is different to an array that has the secuencially physical memory  

*/

/* 
  --page 297
*/
