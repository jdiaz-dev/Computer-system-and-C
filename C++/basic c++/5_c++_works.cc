//the processor statement gets evaluated before to compile
//it is named preprocessor because happends before the compilation 
//we include iostream due that we will use std::count function
#include <iostream>
/* 
   - each cpp file is compiled in our project, header files do not get compiled 
   - when we have got a lot cpp files, they get compiled individualy in an OBJECT FILE with .o .obj extension, but we need to join all these files in one .exe file

   - linkers join all .obj files together
   - .out file is the executable for g++

 */


/* 
  simple way to compile code
    g++ 5_c++_works.cc   , it will create .out file (this is the executable)

  to compile with .exe extension
    g++ -o 21_main.exe 21_main.cpp
    
  to compile c++ code
    g++ -o hi-world hi-world.cc

  to compile creating .obj files
    g++ 21_main.cpp -save-temps -o 21_main

  to compile linked multiple c++ files
    g++ 5_c++_works.cc 5_log.cc -o 5_c++_works
 */

/* 
  the compiler compiple different obj files for every c++ file

 */

//the declaration has not body
void Log(const char * message); //linking files (it resolve symbols)

//we don't need return any type of value, but it will asume that return 0
int main() {
            //<< : overloaded operator, we need to think in this operator as a function (operators are functions)
    std::cout << "Hello super Korah" << std::endl;
    std::cout << "Hello World korah!"; //we are pushing "Hello World!" into cout
    std::cin.get(); //our program execution will pause in this line until we press enter
    std::cout << "Hello World korah 2!\n"; 


    const char * myMessage = "My message";
    Log(myMessage);

    // return 0; //it is not necessary to return a value
}