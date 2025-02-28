#include <iostream>
#include <typeinfo>



/* 
    * typeid Operator:
        - Retrieves type information of an object or a type.
        - Returns a reference to std::type_info, which contains a name for the type.

 */
class Base {};
class Derived : public Base {};

int main() {
    Base* obj = new Derived();
    int num = 14;
    float num2 = 14.0;
    bool booleano = false;
    std::cout << "Type: " << typeid(*obj).name() << std::endl;
    std::cout << "Type: " << typeid(num).name() << std::endl;
    std::cout << "Type: " << typeid(num2).name() << std::endl;
    std::cout << "Type: " << typeid(booleano).name() << std::endl;
    
    delete obj;
    return 0;
}
