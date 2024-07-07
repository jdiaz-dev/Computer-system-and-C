#include <iostream>

/* 
    - __VA_ARGS__ is a preprocessor macro used in variadic macros, which allow you to create macros that accept a variable number of arguments. This is useful for creating more flexible and reusable code.
 */
#define LOG(format, ...) printf(format, __VA_ARGS__)
#define LOG2(format, ...)  printf(format, __VA_ARGS__)

int main() {
    LOG("This is a number: %d\n", 10);
    LOG("Two numbers: %d, %d\n", 10, 20);
    LOG("Three numbers: %d, %d, %d\n", 10, 20, 30);

    int res1 = LOG2("This is a number: %d\n", 10);
    std::cout << "res1 = " << res1 << std::endl;

    int res2 = LOG2("%d, %d\n", 10, 20);
    std::cout << "res2 = " << res2 << std::endl;

    int res3 = LOG2("Three numbers: %d, %d, %d\n", 10, 20, 30);
    std::cout << "res3 = " << res3 << std::endl;

    return 0;
}
