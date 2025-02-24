#include <iostream>
#include <cstdlib> // for aligned_alloc

int main() {
    void* ptr = std::aligned_alloc(16, 64); // Allocate 64 bytes aligned to 16
    if (ptr) {
        std::cout << "Memory allocated at: " << ptr << std::endl;
        free(ptr);
    }
    return 0;
}
//This ensures the memory is aligned to 16 bytes, useful for SIMD instructions.