#include <stdio.h>

struct entry
{
  int value;
  struct entry *next;
};

struct entry *findEntry (struct entry *listPointer, int match) //return a pointer type entry
{
  int counter = 0;

  while(listPointer != (struct entry *) 0){
    if(listPointer->value == match){
      printf("The counter = %i\n", counter);
      return listPointer;
    }
    else{
      listPointer = listPointer->next;
    }
    counter++;
  }
    
  return (struct entry *) 0;
}

int main(void){
  struct entry *findEntry(struct entry *listPointer, int match);
  struct entry n1, n2, n3;
  struct entry *listPointer, *listStart = &n1;

  int search;

  n1.value = 100;
  n1.next = &n2;

  n2.value = 200;
  n2.next = &n3;

  n3.value = 300;
  n3.next = 0;

  printf("Enter the value to locate: ");
  scanf("%i", &search);

  listPointer = findEntry(listStart, search);
  
  if(listPointer != (struct entry *) 0)
    printf("Found %i", listPointer->value);
  else 
    printf("Not Found");

  return 0;
}
/* 
  --page 306
  --Pointers and Arrays
  --batery : 49 %
 */

