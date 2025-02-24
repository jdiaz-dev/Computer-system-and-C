#include <iostream>

/* 
    6_Aggregate_Initialization
        - Pros: Simple, no explicit constructor needed
        - Cons: Only works when there are no private members or user-defined constructors
 */
struct A {
    int x, y;
};

int main() {
    A obj = {1, 2}; // Aggregate initialization
    std::cout << "A: " << obj.x << ", " << obj.y << std::endl;
    return 0;
}
//q: what happens with memory, it must not be cleaned