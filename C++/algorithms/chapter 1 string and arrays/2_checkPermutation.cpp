#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool arePermutation(string &word1, string &word2){

  if(word1.length() != word2.length()) return false;

  sort(word1.begin(), word1.end());
  sort(word2.begin(), word2.end());

  cout << "word1: " << word1 <<endl; //word1 sorted
  cout << "word2: " << word2 <<endl; //word1 sorted

  for(int i = 0; i < word1.length(); i++){
    if(word1[i] != word2[i]) return false;
  }

  return true;
}

int main(){
  string word1 = "hello", word2 = "heoll";

  cout << "ArePermutation: \n" << arePermutation(word1, word2)<< endl;
  return 0;
}
