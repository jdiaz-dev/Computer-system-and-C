/* 
    * Memory and Data Alignment in C++
    
    Memory alignment in C++ refers to how data is arranged in memory to optimize CPU performance. CPUs access memory in chunks (words), and improperly aligned data can lead to performance penalties due to additional memory accesses.
 */

/* 
    1. What is Memory Alignment?
        Memory alignment means placing data at memory addresses that match the CPU's architecture requirements for efficient access.

        For example:

        A 4-byte int should ideally be stored at a memory address that is divisible by 4.
        An 8-byte double should be stored at a memory address divisible by 8.
        If data is misaligned, the CPU may require extra memory fetches, leading to slower execution.
 */

/* 
    2. What is Data Padding?
        Padding is the extra memory automatically inserted by the compiler to maintain proper alignment.

        Example:
 */
#include <iostream>

struct A {
    char c;   // 1 byte
    int i;    // 4 bytes
};

int main() {
    std::cout << "Size of A: " << sizeof(A) << std::endl;
    return 0;
}
/* 
    Offset  | Data
    -----------------
    0       | char c   (1 byte)
    1-3     | padding  (3 bytes)  
    4-7     | int i    (4 bytes)
 */

// Expected size: 1 + 4 = 5 bytes
// Actual size: 8 bytes (due to 3 bytes of padding for int alignment)