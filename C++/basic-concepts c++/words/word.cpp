/* 
    * What is a "Word" in Computer Science (C++)?
        In computer science and programming, a word refers to the natural unit of data that a computer processor handles at a time. The size of a word depends on the system architecture.

    * 1. Word Size in Computer Architecture
        A word typically corresponds to the register size of a CPU. Common word sizes include:

        8-bit processors → 1 word = 8 bits (1 byte)
        16-bit processors → 1 word = 16 bits (2 bytes)
        32-bit processors → 1 word = 32 bits (4 bytes)
        64-bit processors → 1 word = 64 bits (8 bytes)

 */

/* 
    2. Word in C++
        In C++, a word isn't a specific data type, but you can represent it using fixed-width integer types like:

        uint16_t (for a 16-bit word)
        uint32_t (for a 32-bit word)
        uint64_t (for a 64-bit word)

 */

// For example, on a 32-bit system, you might define:
#include <cstdint>
#include <iostream>

int main() {
    uint32_t word = 0x12345678;  // 32-bit word
    std::cout << "Word: " << word << std::endl;

    return 0;
}
