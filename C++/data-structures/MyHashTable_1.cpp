#include <iostream>
#include <list>
#include <string>
#include <cmath>
#include "MyHashTable_1.h"

using namespace std;

/* class Candidate {
  public:
    string fullName;
    int votes;

    Candidate(string fullName, int votes){
      this->fullName = fullName;
      this->votes = votes;
    }
};
 */
class HashTable {
  private:
    // list<Candidate> *arrayCandidates;
    // Candidate* : array with Canidate* pointers
    int size, limit;
    Candidate* tableCandidates[7];

    int hash(string fullName){
      int number = 0;

      for(int i = 0; i < fullName.size(); i++){
        number = this->size * number + (int) fullName[i];
      }
      return doubleHash(number % this->size);
    }
    int doubleHash(int stringHashed){
      int R = this->size - 2;
      return R - (stringHashed % R);
    }
  public:
    HashTable(int size){
      // tableCandidates = new list<Candidate>[size];
      this->size = size;
      this->limit = 0;
    }
    void add(string fullName, int votes){
      if(this->limit >= this->size) throw "The table is full";

      //import to assign more memory to store candidateHashed
      long candidateHashed = hash(fullName);
      int squareIndex = 1;

      while(tableCandidates[candidateHashed] != NULL){
        candidateHashed += pow(squareIndex, 2);

        if(candidateHashed % this->size == 0)
          //candidateHashed must be 9007201034375628 to be splited between this->size (7)
          cout << "candidateHashed: " << candidateHashed << endl;

        candidateHashed = candidateHashed % this->size;
        squareIndex++;
      }

      Candidate* candidate = new Candidate(fullName, votes);
      this->tableCandidates[candidateHashed] = candidate;

      this->limit++;
    }
    Candidate* get(string fullName){
      long long candidateHashed = hash(fullName);
      int squareIndex = 1, contador = 0;

      //for this case doesn't use contador < this->size due that for "Slark" candidateHashed need to arrive until 9007201034375628
      while( tableCandidates[candidateHashed]->fullName != fullName){
        candidateHashed += pow(squareIndex, 2);
        candidateHashed = candidateHashed % this->size;

        squareIndex++;
      }

      if( contador >= this->size )
        return NULL;

      return tableCandidates[candidateHashed];
    }

    void showElements(){
      for(int x = 0; x < this->size; x++){
        cout << "candidate dota: " << this->tableCandidates[x]->fullName << endl;
      }
    }
};

int main() {
  HashTable *hashTable = new HashTable(7);
  hashTable->add("Balanar", 6);
  hashTable->add("Yurnero", 11);
  hashTable->add("Slardar", 13);
  hashTable->add("Phanton", 14);
  hashTable->add("Monkey", 15);
  hashTable->add("Legión", 16);
  hashTable->add("Slark", 17);
  
  //exceptions
  try{
    hashTable->add("Lucifer", 18);
  }catch(const char * msg){
    cout << "\nError: " << msg << endl;
  }

  hashTable->showElements();

  cout << "\nSlark node: " << hashTable->get("Slark")->votes << endl;
}

/*
  check this keyword: https://www.geeksforgeeks.org/this-pointer-in-c/
  check pointers to arryay https://www.geeksforgeeks.org/pointer-array-array-pointer/

  search how to include a entire file between another c++ file 
  review extern function and extern class
 */