#include <stdio.h>

//solution without pointers
/* 
void copyString (char to[], char from[])//using array of strings as parameters
{
  int i;
  for ( i = 0; from[i] != '\0'; ++i )
  to[i] = from[i];
  to[i] = '\0';
}
 */
void copyString(char *to, char *from)//using formal parameters
{
       //*from != '\0' : checking if from is pointing to null 
  for( ; *from != '\0'; ++from, ++to) //it is not neccessary to create a variable to iterate an string
    *to = *from; //copying from one string to another

  *to = '\0'; //setting the null character at the end of string
}

int main()
{
  void copyString(char *to, char *from);
  char string1[] = "A string to be copied.";
  char string2[50];

  copyString(string2, string1);
  printf("%s\n", string2);

  copyString(string2, "So is thisss."); //passing constant character as param, it means that a pointer to a character is passed
  printf("%s\n", string2);


copyString(string2, "Copying one more time.");
  printf("%s\n", string2);
  return 0;
}




