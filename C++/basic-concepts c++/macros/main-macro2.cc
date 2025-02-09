#include <iostream>

// Define a macro to declare a class with a name and a method
#define DEFINE_CLASS(className) \
    class className { \
    public: \
        void sayHello() { \
            std::cout << "Hello from " #className "!" << std::endl; \
        } \
    };

// Use the macro to create a class
DEFINE_CLASS(MyClassUgly)

int main() {
    MyClassUgly obj;
    obj.sayHello(); // Output: Hello from MyClass!
    return 0;
}
