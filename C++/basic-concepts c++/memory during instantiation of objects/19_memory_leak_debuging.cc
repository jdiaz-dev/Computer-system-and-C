#include <iostream>

void memoryLeak() {
    short* ptr = new short(10);  // Allocating memory but never deleting it
    // delete ptr;
}

int main() {
    memoryLeak();
    std::cout << "Program finished!\n";
    return 0;
}
