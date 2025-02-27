#include <iostream>
#include <cstdlib>  // Required for malloc and free

int main() {
    int* ptr = (int*) malloc(3 * sizeof(int)); // Allocates memory for 5 integers

    if (ptr == NULL) {
        std::cout << "Memory allocation failed\n";
        return 1;
    }

    // Assigning values
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }

    // Printing values
    for (int i = 0; i < 5; i++) {
        std::cout << ptr[i] << " ";
    }

    free(ptr); // Always free allocated memory
    return 0;
}
/* 
    - if I assign 3 int , but use 5 memories, I may have Undefined behavior (UB) depending by:
        - OS
        - Compiler
        - Memory allocator implementation


    - Undefined behavior (UB) in C++:
        - UB means anything can happen, including:
        - The program running fine.
        - Crashing randomly.
        - Overwriting important memory.
        - Producing inconsistent results.

 */