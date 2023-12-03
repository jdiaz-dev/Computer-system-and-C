// inline_functions_inline.cpp
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
char toupper(char a)
{

 printf("variable = %c\n", a );
  // cout << "hellow " << endl;  
  return ((a >= 'a' && a <= 'z') ? a - ('a' - 'A') : a);
}

int main()
{
  toupper('x');
  printf("Enter a characterr: ");
  char ch = toupper(getc(stdin));
  printf("%c", ch);
}