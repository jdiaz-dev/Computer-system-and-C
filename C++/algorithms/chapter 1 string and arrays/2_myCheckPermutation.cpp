#include <iostream>
#include <string>
#include <bitset>

using namespace std;

bool myCheckPermutation(const string &str1, const string &str2){
  if(str1.size() != str2.size()) return false;

  bitset<256> bits(0);

  int asciiCode;
  for(int x = 0; x < str1.size(); x++){
    asciiCode = str1[x];
    bits.set(asciiCode);
  }

  for(int x = 0; x < str2.size(); x++){
    asciiCode = str2[x];
    
    if(!bits.test(asciiCode)){
      return false;
    }
  }
  return true;
}

int main(){
  const string word1 = "helro", word2 = "heolo";

  cout << "IsPermutation: " << myCheckPermutation(word1, word2) << endl; 
  return 0;
}

