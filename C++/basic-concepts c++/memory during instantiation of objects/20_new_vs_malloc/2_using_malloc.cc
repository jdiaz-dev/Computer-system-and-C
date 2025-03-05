#include <iostream>
#include <cstdlib> // Required for malloc() and free()

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
    // Using malloc to allocate memory
    Person* p = (Person*)malloc(sizeof(Person));

    // Constructor is NOT called, so we need to initialize manually
    p->age = 25;
    std::cout << "Person age: " << p->age << std::endl;

    // Deallocate memory
    free(p); // Destructor is NOT called

    return 0;
}
