#include <iostream>

int globalVar = 100;  // External linkage (default for global variables)

void globalFunction() {  // External linkage (default for functions)
    std::cout << "Global function called!" << std::endl;
}
