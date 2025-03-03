#include <iostream>
#include "my_c_code.h"  // Include the C header file

int main() {
    std::cout << "Calling C function from C++:\n";
    myFunction();  // Call the C function
    return 0;
}
/* 
    * steps for the compilation:
        gcc -c my_c_code.c -o my_c_code.o   # Compile C file
        g++ -c main.cpp -o main.o            # Compile C++ file
        g++ my_c_code.o main.o -o my_program  # Link both
        ./my_program  # Run the program


 */