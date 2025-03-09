#include <iostream>

// Declaration (not definition) of external symbols
extern int globalVar;
extern void globalFunction();

int main() {
    globalFunction();  // ✅ Access function from file1.cpp
    std::cout << "GlobalVar: " << globalVar << std::endl;  // ✅ Access variable from file1.cpp
    return 0;
}
//g++ file1.cc file2.cc -o a.out