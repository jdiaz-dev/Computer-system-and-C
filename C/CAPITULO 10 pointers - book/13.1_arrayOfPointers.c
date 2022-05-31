/* 
  link: https://stackoverflow.com/questions/49263462/create-array-of-pointers-in-c
 */

#include <stdio.h>

int main(void)
{

  //“pointer to a string of characters”
              // The elements in the array will be of type char*
  const char* headers[]= {"apple", "pear","tree"};
            /* 
              headers[0] = 0x200h (Points to the beginning of the string "apple") 
              headers[1] = 0x200h (Points to the beginning of the string "pear") 
              headers[2] = 0x200h (Points to the beginning of the string "three") 
             */
  printf("header[0] %s \n", headers[0] );
  printf("header[1] %s \n", headers[1] );
  printf("header[2] %s \n", headers[2] );
  return 0;
}