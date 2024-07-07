#include <iostream>

#define MY_MACRO(...) __VA_ARGS__

int main() {

    //I am seeing that is possible to return a variable from a macro
    int res = MY_MACRO(1) ;
    std::cout << "res = " << res << std::endl;
    return 0;
}
