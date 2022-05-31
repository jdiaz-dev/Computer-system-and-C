#include <iostream>
#include <string>

using namespace std;

class Candidate {
  public:
    string fullName;
    int votes;

    Candidate(string fullName, int votes){
      this->fullName = fullName;
      this->votes = votes;
    }
};