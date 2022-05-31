#include <stdio.h>

int main(void)
{
  char c = 'X';
  char d = 'D';
  const char * const *charPointer3 = &c; //doesn't work, very strange
  // *charPointer3 = &d;
  c = 'r';
  printf("value %c", c);
  return 0;
}