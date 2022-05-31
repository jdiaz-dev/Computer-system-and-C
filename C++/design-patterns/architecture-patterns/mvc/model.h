/* 
  ** H file
  - .h file is a header file referenced by a document written in C, C++, or Objective-C source code.  
  - it may contain variables, functions and constants to used by other files
 */

#pragma once //this preprocesor directive does a specialized job
            //the current source file only once in a single compilation

#include <string> //enalbe the type is string
using namespace std; //provides a scope to the identifiers, in this case using identifier std
int minutesPerHour = 60;  //this is an example of an identifier

#include "common.h"

class Model {
  private:
    string data = "";
    DataChangeHandler event = nullptr; //it designs null pointer

  public:
    Model() {} //default constructor
    Model(const string &data){ //using a reference
      this->SetData(data);
    }

    void SetData(const string &data){
      this->data = data;

      if(this->event != nullptr) {
        this->event(data); //executing callback 
      }

    }
    string Data(){
      return this->data;
    }

    //register an event when data changes
    void RegisterDataChangeHandler(DataChangeHandler handler){
      this->event = handler;
    }
    
};