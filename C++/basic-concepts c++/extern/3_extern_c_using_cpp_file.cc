#include <iostream>

// Prevents name mangling
extern "C" void hello() {
    std::cout << "Hello from C-style function in a C++ file!" << std::endl;
}

int main() {
    hello();  // Works like a normal C function
    return 0;
}
