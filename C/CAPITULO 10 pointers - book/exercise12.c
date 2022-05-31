#include <stdio.h>

int main(void)
{
  char *message = "Programming in C is fun\n";
  char message2[] = "You said it\n";
  char *format = "x = %i\n";
  int x = 100;

  /*** set 1 ***/
  printf ("Programming in C is fun\n");
  printf ("%s", "Programming in C is fun\n"); // 1
  printf ("%s", message); // 1
  printf (message); // 1

  /*** set 2 ***/
  printf ("\n\nYou said it\n");
  printf ("%s", message2); // 1
  printf (message2); // 1
  printf ("%s", &message2[0]); // 1

  /*** set 3 ***/
  printf ("\n\nsaid it\n");
  printf (message2 + 4); // 1
  printf ("%s", message2 + 4); // 1
  printf ("%s", &message2[4]); // 1

  /*** set 4 ***/
  printf ("\n\nx = %i\n", x); //100
  printf (format, x); //100

}