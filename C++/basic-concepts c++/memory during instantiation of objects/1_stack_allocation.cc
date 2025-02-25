#include <iostream>
/* 
    1. Stack Allocation (Automatic Storage)
        - Pros: Fast, no manual memory management
        - Cons: Limited lifetime (destroyed when function ends), cannot return from function
*/

class A {
public:
    A() { std::cout << "A constructed\n"; }
    ~A() { std::cout << "A destroyed\n"; }
};

struct MyStruct {
    MyStruct() { std::cout << "struct Constructor called\n"; }
    ~MyStruct() { std::cout << "struct Destructor called\n"; }
};

void instantiateStruct() {
    MyStruct s; // Allocated on the stack
} // Destructor called automatically when instantiateStruct() ends

int main() {
    instantiateStruct();
    A obj; // Allocated on the stack
    return 0; // Automatically destroyed when going out of scope
}