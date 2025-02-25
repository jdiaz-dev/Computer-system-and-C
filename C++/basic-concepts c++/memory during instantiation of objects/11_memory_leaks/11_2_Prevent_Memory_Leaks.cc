#include <memory>  // Required for smart pointers
#include <iostream>

// 1. Use Smart Pointers (std::unique_ptr, std::shared_ptr)

//Using std::unique_ptr
void example() {
    std::unique_ptr<int> ptr = std::make_unique<int>(42);
    std::cout << *ptr << std::endl;  // ✅ No need for delete, memory auto-freed!
}  // ptr goes out of scope, memory is released automatically


//Using std::shared_ptr (For Shared Ownership)
void example2() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(42);
    std::shared_ptr<int> ptr2 = ptr1;  // ✅ Memory is freed only when both `ptr1` and `ptr2` go out of scope
}


// 2. Avoid new When Possible
//use
void safeFunction() {
    int x = 42;  // ✅ Allocated on stack, auto-cleaned
}
//Instead of:
void unsafeFunction() {
    int* x = new int(42);
    delete x;  // ❌ Manual cleanup required
}


int main(void){
    example();
    example2();
    return 0;
}
