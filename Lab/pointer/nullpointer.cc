#include <iostream>

//overloading functions 
void func(int x) { std::cout << "int version\n"; }
void func(char* x) { std::cout << "char* version\n"; }

int main() {
    func(4);  // ❌ Calls `func(int)` instead of `func(char*)`
    return 0;
}
