#include <iostream>

/* 
    * Heap Allocation vs. Stack Allocation in C++
        Memory in C++ is typically divided into different regions, with the two main ones being Stack and Heap

 */

/* 
    1. Stack Allocation (Automatic Memory)
    📌 Definition:
    The stack is a region of memory that stores local variables and function call information. Memory is allocated automatically when a function is called and deallocated when the function exits.

    🔹 Characteristics of Stack Allocation
    ✔ Fast: Memory allocation and deallocation are automatic and managed by the compiler.
    ✔ Scoped: Variables exist only within their function or block.
    ✔ Efficient: Uses LIFO (Last In, First Out) for memory management.
    ❌ Limited size: The stack is smaller than the heap and can overflow if too much memory is used

 */
void function() {
    int x = 10;  // Allocated on the stack
    std::cout << "x: " << x << std::endl;
}  // x is automatically deallocated when function() ends

/* 
    2. Heap Allocation (Dynamic Memory)
    📌 Definition:
    The heap is a region of memory that allows dynamic memory allocation at runtime. Objects created on the heap persist until they are manually deleted.

    🔹 Characteristics of Heap Allocation
    ✔ Flexible: Memory persists beyond function calls.
    ✔ Larger memory: The heap is much larger than the stack.
    ❌ Slower: Requires manual allocation (new) and deallocation (delete).
    ❌ Risk of memory leaks: If delete is not used properly, memory will remain allocated and cause a leak.

 */
void function() {
    int* x = new int(10);  // Allocated on the heap
    std::cout << "x: " << *x << std::endl;
    delete x;  // Must manually deallocate memory
}

int main() {
    function();  
    return 0;
}
