#include <stdio.h>
#include <string.h> //to use strcmp() method
#include <stdlib.h>

int main()
{
  //-------------------USING TWO DIMENSIONAL ARRAY
  //it don't matter if we not specify number of rows, but we need specify number of columns
  char fruits[][12] = { "2 Oranges", "2 Apples", "3 Bananas", "1 Pinaple"};
  puts(fruits);  //if we store the characters in an array of characters, we will be wastring memory innecesarialy
  
  //-------------------USING ONE DIMENSIONAL ARRAY
  //to void add extra null characters at the end of strings we can use pointers instead of characters
  char *fruits2[] = {"2 Oranges", "2 Apples", "3 Bananas", "1 Pinaple"}; //array of pointers
                  //the pointer to the first character of every character is stored in every position, so we void wasting memory
  puts(*fruits2); 

  puts("----------------------------ASCII CODE-----------------");
  printf("%s 1. %d \n",fruits2[1], fruits2[1]);
  printf("%s 2. %d \n\n",fruits2[2], fruits2[2]);
               //  %d   : to check ASCII code
 
  // strcmp : to comparate strings in ASCII code  
  if(strcmp(fruits[1], fruits[2]) < 0){
    printf("%s are lesser than %s", fruits[1], fruits[2]);
  } else if(strcmp(fruits[1], fruits[2]) > 0) {
    printf("%s are greater than %s", fruits[1], fruits[2]);
  }

  return 0;
}