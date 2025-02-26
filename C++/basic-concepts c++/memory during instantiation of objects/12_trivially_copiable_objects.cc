#include <iostream>
#include <type_traits>

struct Trivial {
    int x;
    double y;
};
// This struct is trivially copyable because it only contains built-in types (which are trivially copyable).

struct NonTrivial {
    int x;
    double y;
    NonTrivial() {}  // User-defined constructor
};
//This struct is not trivially copyable because it has a user-defined constructor.

int main() {
    std::cout << std::boolalpha << std::is_trivially_copyable<Trivial>::value << std::endl; // true
}
