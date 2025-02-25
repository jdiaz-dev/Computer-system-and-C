#include <iostream>
#include <new>

/* 
    3_Placement_New
        - Pros: Fine-grained control over memory
        - Cons: Must manually call destructor, requires proper memory alignment
 */
class A {
public:
    A() { std::cout << "A constructed\n"; }
    ~A() { std::cout << "A destroyed\n"; }
};

int main() {
    alignas(A) char buffer[sizeof(A)]; // Manually allocated buffer
    A* obj = new (buffer) A(); // Construct object in pre-allocated memory

    obj->~A(); // Manual destructor call
    return 0;
}
