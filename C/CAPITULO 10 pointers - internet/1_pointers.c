/* 
  --the pointers : these are variables to point to memory direction
  --the pointer is a variable to store some address (initial address)
  --the pointer point to memory location where the first byte is stored

  --a variable has an especific value
  --a pointer has the direction of a value that has an specific value

 */

#include <stdio.h>
int main(){
  int a = 2;

  //in C language we can refer to a variable as an object (it does not refer to OOP)
  //example of a pointer

  //pointer pointing to a pointer
  int *apt=&a; //using asteriscs we telling to compiler that we pointer variable and reserv the memory the necessary data to housting an memory direction
          //&a : pointing to a variable (value of operator, operator/indirection, operator/dereference)
  printf("value %d\n", *apt); //go to the address of object and take the stored object

  printf("%i\n", *apt);
  printf("%i\n", &apt);

  printf("%p\n", apt); //getting memory direction in hexadecimal

  return 0;
}  

/* 
  * : it is used as pointer to a variable
  & : it is used to get address of the variable

 */