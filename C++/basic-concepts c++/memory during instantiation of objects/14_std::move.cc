#include <iostream>
#include <vector>


/* 
    Use std::move when: 
        ✅ Moving large objects that own dynamic memory (e.g., std::string, std::vector).
        ✅ Returning large objects from functions to avoid unnecessary copies.
        ✅ Passing large temporary objects to a function to avoid deep copies.

 */

class A {
public:
    std::vector<int> data;
    A() { data.resize(1000); } // Simulate large resource allocation
    ~A() { std::cout << "Destructor called!\n"; }
    // Move constructor
    A(A&& other) noexcept {
        std::cout << "Move constructor called!\n";
        data = std::move(other.data); // Transfer ownership
    }
};

int main() {
    A obj1;
    A obj2 = std::move(obj1); // Move instead of copy
    return 0;
}
