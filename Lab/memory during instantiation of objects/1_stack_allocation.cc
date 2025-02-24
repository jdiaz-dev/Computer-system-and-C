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

int main() {
    A obj; // Allocated on the stack
    return 0; // Automatically destroyed when going out of scope
}