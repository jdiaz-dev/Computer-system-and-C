#include <iostream>
#include <string>
#include <vector> //unlike to array, the vector can grow dinamically
#include <bitset> //library for dealing with data at the bit level

using namespace std;

bool isUniqueChars(const string &str){
  if(str.length() > 128){
    return false;
  }
  vector<bool> charsUsed(128); //creating a boolean vector with 128 spaces

  for(int i = 0; i < str.length(); i++){
    int val = str[i]; //a way to cast to integer
    if(charsUsed[val] == true){
      return false;
    }
    charsUsed[val] = true;
  }

  //printing values of the vector
  /* for(int x = 0; x < charsUsed.size(); x++){
    cout << charsUsed[x] << endl;
  } */

  return true;
}

bool isUniqueChars_bitVector(const string &str){

  //Reduce space usage by a factor of 8 using bitvector. 
	//Each boolean otherwise occupies a size of 8 bits.
  bitset<128> bits(0); //bitset initializing with 0
  for(int i = 0; i < str.size(); i++){
    int asciiCod = str[i];
    if(bits.test(asciiCod)){ //check 1 or 0
      return false;
    }
    bits.set(asciiCod); //setting 1 for this asciiCode in bitset
  }

  //bitset to string
  //cout << "bits : " << bits.to_string() << endl;

  return true;
}

bool isUniqueChars_noDS(const string &str) {
	for(int i = 0; i < str.length()-1; i++) {
		for(int j = i+1; j < str.length(); j++) {
			if(str[i] == str[j]) {
				return false;
			}
		}
	}
	return true;	
}

int main(){
  vector<string> words = {"abcde", "hello", "apple", "kite", "padle"};

  //auto : it is used to specify that the variable will be automatically deducted  
  for(auto word: words){
    cout << isUniqueChars(word) << endl;
  }

  for(auto word: words){
    cout << isUniqueChars_bitVector(word) << endl;
  }

  for(auto word: words){
    cout << isUniqueChars_noDS(word) << endl;
  }

  return 0;
}



