#include <iostream>

/* 
    2. Heap Allocation (Dynamic Storage)
        - Pros: Persists beyond function scope
        - Cons: Requires explicit delete, risk of memory leaks
 */

class A {
public:
    A() { std::cout << "A constructed\n"; }
    ~A() { std::cout << "A destroyed\n"; }
};

int main() {
    A* obj = new A(); // Allocated on the heap
    delete obj; // Manually free memory
    return 0;
}
