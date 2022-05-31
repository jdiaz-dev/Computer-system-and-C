#include <stdio.h>

/* BOOK -> Program 9.6 Reading Lines of Data */
int main (void)
{
  char line[81];
  void readLine (char buffer[]);

  readLine (line);
  printf ("%s\n\n", line);
  
  return 0;
}

void readLine (char buffer[])
{
  char character;
  int i = 0;
  do
  {
    character = getchar ();
    printf("- %c\n", character);
    *buffer = character;
    ++buffer;
  }
  while ( character != '\n' );
  *buffer = '\0';
}


