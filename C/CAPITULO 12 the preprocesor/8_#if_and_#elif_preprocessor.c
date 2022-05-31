#include <stdio.h>
#include "8_#if_and_#elif_preprocessor.h"

/* 
  to compile passing variable 
    gcc -D OS=3 8_#if_and_#elif_preprocessor.c -o 8_#if_and_#elif_preprocessor
 */

int main (void)
{
  printf("------NAME =  %s\n", NAME);
  return 0;
}

//page 370 : The #if and #elif Preprocessor Statements