#include <stdio.h>

#define MY_STRING(x) #x //# operator gives you a means to create a character string out of a macro argument. 
#define PRINT_INT(var) printf (# var " = %i\n", var)

int main(void){
  printf("--------result 1 %s\n", MY_STRING(Programming in C is fun\n));
  printf("--------result 2 %s\n", MY_STRING("Programming in C is fun")); //in this case the double quotes are preserved

  int count = 20;
  PRINT_INT(20);
  printf ("count" " = %i\n", count); //string concatenation
  return 0;
}

