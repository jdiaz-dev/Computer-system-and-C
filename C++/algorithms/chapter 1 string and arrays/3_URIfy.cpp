#include <iostream>
// #include <cstring> //This header file defines several functions to manipulate C strings and arrays.
#include <iterator>

          //managing strings equal to C programming language
void urlify(char *str, int len){

  int numSpaces = 0;
  int i, j;
  for(i = 0; i < len; i++){
    if(str[i] == ' ')
      numSpaces++;
  }

  int extendedLenght = len + 2 * numSpaces;  
  j = extendedLenght - 1;
  for(i = len - 1; i > 0 ; i--){
    if(str[i] != ' '){
      str[j--] = str[i];
    }else{
      str[j--] = '0';
      str[j--] = '2';
      str[j--] = '%';
      numSpaces -= 3;
    }
  }

}


int main(){
          //managing strings equal to C programming language
  char sentence[] = "Mr John Smith    ";

  std::cout << sentence << std::endl;  
  urlify(sentence, 13);
  std::cout << sentence << std::endl;  

  return 0;
}





