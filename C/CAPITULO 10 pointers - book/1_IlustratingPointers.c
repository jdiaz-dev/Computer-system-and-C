/* 
    
 */

#include <stdio.h>

int main(void)
{
  int count = 10, x, *int_pointer; // *int_pointer: type int pointer

  /* 
    * : indirection operator 
    //*int_pointer : indicating that it is type pointer
  
   */
  

  //int_pointer access indirectly to count variable
  int_pointer = &count;
  /* 
    & :  address operator, used to make a pointer to an object in C
    -- & assing to int_pointer a pointer (not a value) 
   */

  count = 20;
  /* indirector operator in action : used to reference contents of count variable */
  x = *int_pointer; //this have the effect to assign the value of count = 10 to  x variable

  printf ("checking 1: count = %i, x = %i\n", count, x);//20, x = 20

                            //Reference: it show address of memory
  printf ("checking 1: count = %i, x = %i\n", &count, &x);//-13420, x = -13424
  printf ("checking 2: int_pointer = %i\n", int_pointer); //-13420  as integer
  printf ("checking 2: int_pointer = %p\n", int_pointer); //0xffffcb94 as hexadecimal
                            //Dereference: it show value of the variable
  printf ("checking 2: int_pointer = %i\n", *int_pointer); //20
  return 0;

}


