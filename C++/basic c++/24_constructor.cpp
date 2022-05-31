/* 
  - in c++ we need initiliaze all variables, but we will have values with any value assigned in memory
 */
#include <iostream>

class Log {
  public:
    Log() = delete; //to delete default constructor (deleting constructor)
    static void Write(){
      std::cout << "I am writing the log" <<std::endl;  
    }
};

int main(){
  Log::Write(); //to call static methods
  //Log 1; //it should use default constructor

  return 0;
}

