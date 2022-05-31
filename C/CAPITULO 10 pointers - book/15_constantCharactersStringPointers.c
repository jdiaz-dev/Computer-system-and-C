#include <stdio.h>

int main(void)
{
  initializingAsCharacterArray(); 
  initializingAsCharacterPointer();
  arraysOfPointers();
}
initializingAsCharacterArray(){
  char string3[80] = "This is a string"; //it has not the effect of initializing a pointer to the character inside string3 

  // it is not allowed the initialization
  //string3 = "A string to be copied.";
}
initializingAsCharacterPointer(){
  char *string4 = "This is other string";  //if we initialize string4 if this way, a pointer will be created to the content of *string4 
}
arraysOfPointers(){

  //each entry has a pointer to a character string (page 316)
  char *days[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
}
/* 
  The Increment and Decrement Operators Revisited
  PAGE 316
 */