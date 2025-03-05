#include <iostream>

/* 
    * Pure Virtual Function
        - A pure virtual function is a virtual function that must be overridden by a derived class. It has no implementation in the base class and is declared with = 0.

 */
class Base {
public:
    virtual void show() = 0;  // Pure virtual function (no implementation), it becomes to one class abstract
};

class Derived : public Base {
public:
    void show() override {  // Must override in derived class
        std::cout << "Derived class show()" << std::endl;
    }
};

int main() {
    // Base b; //❌ ERROR: Cannot instantiate abstract class
    Base* ptr;
    Derived d;
    ptr = &d;

    ptr->show();  // Calls Derived class show()

    return 0;
}
