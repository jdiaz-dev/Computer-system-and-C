#include <iostream>


/* 
    * dynamic_cast Operator:
        - Safely casts a pointer/reference of a base class to a derived class.
        - Works only with polymorphic types (classes with at least one virtual function).
 */
class Base {
public:
    virtual ~Base() {} // Required for RTTI
};

class Derived : public Base {};

int main() {
    Base* b = new Derived();
    Derived* d = dynamic_cast<Derived*>(b);

    if (d) {
        std::cout << "Cast successful\n";
    } else {
        std::cout << "Cast failed\n";
    }

    delete b;
    return 0;
}
/* 
    When to Use RTTI?
        - When debugging or logging type information.
    When to Avoid RTTI?
        - RTTI can introduce performance overhead.
        - Often, virtual functions and design patterns (e.g., Visitor Pattern) can be used as alternatives.
        - Some embedded or high-performance applications disable RTTI to reduce binary size.

 */