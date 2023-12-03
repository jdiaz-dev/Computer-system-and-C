// inline_functions_macro.c
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;
#define toupper(a) ((a) >= 'a' && ((a) <= 'z') ? ((a)-('a'-'A')):(a))

void verifiyingToUpperMacro(){
   string vowel = "xyz";
   short res = ('a'-'A');

   printf("res = %i\n", res);
}

int main() {
   verifiyingToUpperMacro();
   char ch;
   printf("Enter a character: ");
   ch = toupper( getc(stdin) );//If it is in that range, getc is executed again to convert the character to uppercase. It means the program waits for two or three characters
   printf( "%c", ch );
}
//  Sample Input:  xyz
//  Sample Output:  Z