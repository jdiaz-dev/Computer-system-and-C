

// C++ program to illustrate
// concept of Virtual Functions
 
#include <iostream>
using namespace std;
 
class base {
public:

    //it is requiere to make a virtual method if we want to use the method of derived class
    // this method is virtual, therefore it will be bound (or linked) at runtime
    virtual void print() { cout << "print base class\n"; }
 
    // this method is not-virtual, therefore it will be bound (or linked) at compile time
    void show() { cout << "show base class\n"; }
};
 
class derived : public base {
public:
    void print() { cout << "print derived class\n"; }
 
    void show() { cout << "show derived class\n"; }
};
 
int main()
{
    base* bptr;
    derived d;
    bptr = &d;
 
    // Virtual function, binded at runtime
    bptr->print();
 
    // Non-virtual function, binded at compile time
    bptr->show();
 
    return 0;
}