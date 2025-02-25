#include <iostream>
#include <vector>

/* 
    7_using_vector
        - Pros: Dynamic sizing, automatic memory management
        - Cons: Slight overhead compared to raw arrays
 */

class A {
public:
    A() { std::cout << "A constructed\n"; }
    ~A() { std::cout << "A destroyed\n"; }
};

int main() {
    std::vector<A> vec(3); // Creates 3 objects of A dynamically
    return 0; // Automatically destroyed
}
