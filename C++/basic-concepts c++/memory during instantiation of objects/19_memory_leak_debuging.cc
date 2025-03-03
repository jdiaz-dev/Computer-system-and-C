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
/* 
    command:
        - sudo apt update && sudo apt install valgrind
        - valgrind --leak-check=full --show-leak-kinds=all ./my_program


 */