#include <iostream>

class Person {
public:
    int age;
    
    Person(int a) : age(a) {
        std::cout << "Constructor called! Age: " << age << std::endl;
    }

    ~Person() {
        std::cout << "Destructor called!" << std::endl;
    }
};

int main() {
    // Using new to allocate an object
    Person* p = new Person(25);

    std::cout << "Person age: " << p->age << std::endl;

    // Deallocate memory
    delete p;

    return 0;
}
