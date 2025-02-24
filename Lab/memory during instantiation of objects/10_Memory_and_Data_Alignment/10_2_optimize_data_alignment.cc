/* 
    3. How to Optimize Data Alignment?
        To reduce memory usage, rearrange the structure members:
 */
#include <iostream>

struct B {
    int i;    // 4 bytes
    char c;   // 1 byte
};
int main() {
    std::cout << "Size of B: " << sizeof(B) << std::endl;
    return 0;
}
/* 
    Offset  | Data
    -----------------
    0-3     | int i  (4 bytes)
    4       | char c (1 byte)
    5-7     | padding (2 bytes) (to align struct to 4-byte boundary)
 */