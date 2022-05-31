#include <iostream>
#include <string>

#include <algorithm> 
#include <cctype>
// #include <locale>

using namespace std;

class WordTrim {
  private: 
    string sentence;

  public:
    WordTrim(string &sentence){
      this->sentence = sentence;
    }
    string wordTrimmed(){
      ltrim();
      rtrim();
      return sentence;
    }

  private: 
    void ltrim() {
      sentence.erase(sentence.begin(), std::find_if(sentence.begin(), sentence.end(), [](unsigned char ch) {
        return !std::isspace(ch);
      }));
    
    }
    void rtrim() {
      sentence.erase(std::find_if(sentence.rbegin(), sentence.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
      }).base(), sentence.end());
    }

};

class URIfy {
  private: 
    string sentence;
    WordTrim *wordTrim;

  public:
    URIfy(string &sentence){
      this->sentence = sentence;
      this->wordTrim = new WordTrim(sentence);
    }
    string stringURIfied(){
      int availableSpaces = countAvailableSpaces();
      int lengthOnlySentence = wordTrim->wordTrimmed().size();
      // cout << "lenghtSentence: " << lengthOnlySentence.size() << endl;

      int j = sentence.size() - 1;
          cout << "lengthOnlySentence: " << lengthOnlySentence  << endl;
      for(int i = lengthOnlySentence - 1; i > 0 && availableSpaces > 0; i--){
        if(sentence[i] != ' '){
          sentence[j] = sentence[i];
          j--;
        }else{
          sentence[j] = '0';
          sentence[--j] = '2';
          sentence[--j] = '%';
          availableSpaces -= 3;
          j--;
        }
      }
      cout << "sentence: " << sentence << endl;
      return "as";
    }

  private: 
    int countAvailableSpaces(){
      int counter = 0;
      for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' ') counter += 1;
      }
      return counter;
    }
};

int main(){
  string sentence = "Mr John Smith    ";
  URIfy *uriFy = new URIfy(sentence);
  uriFy->stringURIfied();
  return 0;
};



/* 
https://www.cplusplus.com/reference/algorithm/
to check the previous link fisrt understand it
  - iterators in c++
  - templates in c++
  - stl container in c++
 */