#include <iostream>
#include <cstdlib>

#define ERROR_AND_ABORT(msg)                                   \
    do {                                                      \
        std::cerr << "Error: " << msg << std::endl;           \
        std::abort();                                         \
    } while (0)

#define ASSERT(condition, message)                            \
    do {                                                     \
        if (!(condition)) [[unlikely]] {                     \
            ERROR_AND_ABORT(message);                        \
        }                                                    \
    } while (0)

void divide(int a, int b) {
    ASSERT(b != 0, "Division by zero!"); // Unlikely to happen but fatal
    std::cout << "Result: " << (a / b) << std::endl;
}

int main() {
    divide(10, 2); // Normal case
    divide(5, 0);  // Triggers the ASSERT
    return 0;
}
