#include <stdio.h>

int compareStrings (const char *s1, const char *s2)
{
  int i = 0, answer;
  while ( *s1 == *s2 && *s1++ != '\0'&& *s2++ != '\0'){
  
    if ( *s1 < *s2 ){
      answer = -1; /* s1 < s2 */
    }
    else if ( *s1 == *s2 ){
      answer = 0; /* s1 == s2 */
    }
    else{
      answer = 1; /* s1 > s2 */
    }
  }
  
  return answer;
  
}
int main(void)
{
  char string1[30] = "computer";
  char string2[30] = "computer";
  int result = 999; 
  result = compareStrings(string1, string2);

  printf("result = %i", result);

}



