#include <iostream>
#include <memory>

/* 
    5_Factory_Pattern
        - Pros: Centralized object creation logic
        - Cons: Adds complexity, may introduce performance overhead
 */
class A {
public:
    A() { std::cout << "A constructed\n"; }
    ~A() { std::cout << "A destroyed\n"; }

    static std::unique_ptr<A> create() {
        return std::make_unique<A>(); // Encapsulated allocation
    }
};

int main() {
    auto obj = A::create(); // Factory method
    return 0; // Automatically destroyed
}
//q: how Adds complexity, may introduce performance overhead?