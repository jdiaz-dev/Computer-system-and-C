/* 
    4. Packing and Aligning Data
        You can force the compiler to ignore padding using #pragma pack or alignas.

 */
#include <iostream>

// Using #pragma pack (GCC, MSVC)
#pragma pack(1)  // Force 1-byte alignment
struct C {
    char c;  // 1 byte
    int i;   // 4 bytes
};
#pragma pack()  // Reset packing
//This forces C to be 5 bytes instead of 8, but may cause performance issues on some architectures


struct D {
    char c;
    alignas(4) int i;  // Ensures `i` is aligned to 4 bytes
};
//This allows precise control over manual alignment.


int main() {
    std::cout << "Size of C: " << sizeof(C) << std::endl;
    std::cout << "Size of D: " << sizeof(D) << std::endl;
    return 0;
}

