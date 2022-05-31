#include <stdio.h>

void incrementAndDecrementOperator(){
  char *text = "This is a text.";
  char character1 = *text++; //first assign 'T' to character1, after  increment in 1
  printf("character1 = %c\n", character1);

  char character2 = *++text; //first increment in 1 after assing 'i' to character2
  printf("character2 = %c\n\n", character2);


}
void copyString(char *to, char *from)
{

  //null character is equal to value 0
  while(*from){
    *to++ = *from++; // * and ++ has the same precedence from right to left
  }
    
  *to = '\0';
}

int main (void)
{
  void incrementAndDecrementOperator();
  void copyString (char *to, char *from);
  char string1[] = "A string to be copied.";
  char string2[50];

  incrementAndDecrementOperator();
  copyString (string2, string1);
  printf ("%s\n", string2);

  copyString (string2, "So is this.");
  printf ("%s\n", string2);

  return 0;
}


