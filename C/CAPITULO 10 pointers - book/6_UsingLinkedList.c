#include <stdio.h>

int main(void)
{
  struct entry {
    int value;
    struct entry *next; //this attribute is a pointer to another struct
  };

  struct entry n1, n2, n3;
  int i; 

  n1.value = 100;
  n2.value = 200;
  n3.value = 300;

  n1.next = &n2;
  n2.next = &n3;
  i = n1.next->value;
  i = 4;
  printf("first: %i\n", i);

  /* 
    -- the expression . and -> has the same precedence, where both are evaluated from left to right, that is to say :    (n1.next)->value
    
    -- the difference between  . and -> is the next:
       ( . ) : to access to member of a structure
       ( -> ) : to access member of a structure through pointer 

   */
  printf("second: %i\n", n1.next->value);
  printf("thirth: %i\n", n1.next->next->value);
  printf("fourth: %i\n", n2.next->value);

  return 0;
}

