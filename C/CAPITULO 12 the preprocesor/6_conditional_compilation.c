#include <stdio.h>
#include "6_conditional_compilation.h"

/* 
  to compile passing value to definition
        -D UNIX : passing value
    gcc -D UNIX 6_conditional_compilation.c -o 6_compilation_result 

      or

    gcc -D UNIX=compu 6_conditional_compilation.c -o 6_compilation_result
 */

int main (void)
{
  printf("------result %s\n", EXISTS);
  return 0;
}