#include <iostream>
#include <string>

//namespace create an block scope to indentifiers (types, functions, variables)
using namespace std; // std: standart block

bool isUnique(string &word){
  int charactersUsed[128];

  int x;
  for(x = 0; x < word.size() ; x++){
    charactersUsed[x] = 0;
  }

  int asciiCode;
  for(x = 0; x < word.size(); x++){
    asciiCode = int (word[x]);
    if(charactersUsed[asciiCode] == 1){
      return false;
    }else{
      charactersUsed[asciiCode] = 1;
    }
  }
  return true;
}

int main(){
  char num = 'z';
  int arr[3]; 
  arr[0] = 14;

  string word1 = "isUniqueTheWord";
  string word2 = "jonath";

  cout << isUnique(word1) <<endl;
  return 0;
}

