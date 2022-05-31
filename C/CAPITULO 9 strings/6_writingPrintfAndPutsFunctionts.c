#include <stdio.h>

void putsFunction(){
  char *s = "Feo";

  //puts function is declared in <stdio.h> library
  //puts writes a newline character after writing the string to the output screen
  puts(s);
  puts(s);
  puts(s);
  puts(s);

}

void printFunction(){
//we are not using an array of strings
  char *ptr = "Hello world"; 

  printf("%s\n", ptr);
  printf("%.7s\n", ptr); // .7 : to display only 7 characters
  printf("%20.7s", ptr); // 20 : it denotes the size of the field after the character from left to right side 
}

int main(){
  printFunction();
  putsFunction();  
  
  return 0;
}
//video 6 finished
