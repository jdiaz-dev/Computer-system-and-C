#include <iostream>
#include <memory>


/* 
    4_Smart_Pointers
        - Pros: No manual delete, avoids memory leaks
        - Cons: Slight overhead compared to raw pointers
 */
class A {
public:
    A() { std::cout << "A constructed\n"; }
    ~A() { std::cout << "A destroyedd\n"; }
};

int main() {
    std::unique_ptr<A> obj = std::make_unique<A>(); // Smart pointer manages memory
    return 0; // Automatically destroyed
}
//q: why overhead