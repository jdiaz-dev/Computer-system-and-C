/* 
  --A string variable is one dimensional array of characters that is capable of holding a string at a time
  --always make the array one character longer than the string, it for the NULL character
  --failing to add extra field for NULL character may cuase unpredictable results
 */
#include <stdio.h>

void imposibleToModifyStringLiteral(){
//we cannot modify a string literal
  char *ptr = "Hello";
  //*ptr = 'M'; //it will thrown error
  printf("%s \n", ptr);

  //but we can modify a char array
  char s[5] = "Hello";
  s[0] = 'Q';
  printf("%s \n\n", s);
}

void shortLengthInitializer(){
  char s[7] = "Bello"; //no problem to add extra spaces, the result will be  :  |H|e|l|l|o|\0\|0| 
  printf("%s \n\n", s);
}
void longthLengthInitializer(){
  //char s[4] = "Beeel"; //it will trown error
  //printf("%s \n\n", s);
}
void equalLengthInitializer(){
  char s[5] = "Hell4"; //it will trown error
  printf("%s \n\n", s);
}
void printCopiedString(){
  char s[7] = "cuello";
  char t[7];
  
  int x;
  for(x = 0; x < s[x] != '\0'; x++){
    t[x] = s[x];
  }
  t[x] = '\0'; //   \0   : adding end of array to void an undedefined behavior
  printf("%s \n\n", t);

}
void ommitingTheLength(){
  char s[] = "person"; //the compiler automatically will set 7 characters to "s[]", including null character

  printf("%s \n\n", s);
}

int main()
{
  char s[6] = "hello"; // it is not a string literal
        //when a string is assigned to a character array, then this character array is treated as other types of arrays. We can modify its characters
  printf("%s \n", s);

  char word[6] = {'h','e','l','l','o'}; //this characters it equal to previous characters  
  printf("%s \n\n", word);

  imposibleToModifyStringLiteral();
  shortLengthInitializer();
  longthLengthInitializer();
  equalLengthInitializer();
  printCopiedString();
  ommitingTheLength();
}

//min 6:30