#include <iostream>

// Define a macro that modifies a class definition
// __attribute__((visibility("default"))):  allow the class exported in shared libraries.
#define MY_CLASS_ATTRIBUTE __attribute__((visibility("default"))) // Simulating an attribute like V8_TRIVIAL_ABI

// Define a class using the macro
class MY_CLASS_ATTRIBUTE MyClass {
public:
    MyClass() { std::cout << "MyClass instance created!" << std::endl; }
    void greet() { std::cout << "Hello from MyClass!" << std::endl; }
};

// Instantiate the class using another macro
#define CREATE_INSTANCE(className) className obj;

int main() {
    CREATE_INSTANCE(MyClass) // Expands to: MyClass obj;
    obj.greet(); // Output: Hello from MyClass!
    return 0;
}
