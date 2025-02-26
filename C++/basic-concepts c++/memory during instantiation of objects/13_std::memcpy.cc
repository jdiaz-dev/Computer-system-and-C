#include <iostream>
#include <cstring>
/* 
    * std::memcpy
        For trivially copyable types, std::memcpy can be a valid way to initialize or copy objects, because it works at the byte level without invoking constructors. However, this should be used with caution and only when the object is trivially constructible (i.e., no virtual functions, no pointers requiring deep copies, etc.).
 */
struct POD {
    int x;
    double y;
};

class A {
public:
    int* ptr;
    A() { ptr = new int(42); }
    ~A() { delete ptr; }
};

int main() {
    POD a = {42, 3.14};
    POD b;

    std::memcpy(&b, &a, sizeof(POD)); // use std::memcpy is Safe for trivially copyable types
    std::cout << "b.x = " << b.x << ", b.y = " << b.y << std::endl;


    A obj1, obj2;
    std::memcpy(&obj2, &obj1, sizeof(A)); // 🚨 DANGEROUS!

    std::cout << *obj2.ptr << std::endl; // May work initially..
    delete obj2.ptr; // Double delete → Undefined behavior!
    return 0;
}
