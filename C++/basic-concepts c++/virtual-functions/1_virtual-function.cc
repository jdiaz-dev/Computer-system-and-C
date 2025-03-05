#include <iostream>
/* 
    *Virtual Function
        - A virtual function is a function in a base class that is declared with the virtual keyword and can be overridden in a derived class. 
 */
class Base {
public:
    virtual void show() {  // Virtual function with implementation
        std::cout << "Base class show()" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Overriding the base class function
        std::cout << "Derived class show()" << std::endl;
    }
};

int main() {
    Base* ptr;
    Derived d;
    ptr = &d;

    ptr->show();  // Calls Derived class show() due to dynamic binding

    return 0;
}
