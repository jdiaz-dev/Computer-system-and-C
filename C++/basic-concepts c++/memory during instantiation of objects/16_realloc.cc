#include <iostream>
#include <cstdlib> 

int main() {
    int* ptr = (int*) malloc(3 * sizeof(int)); // Allocating memory for 3 integers

    if (ptr == NULL) {
        std::cout << "Memory allocation failed\n";
        return 1;
    }

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;

    // Resize to hold 5 integers
    ptr = (int*) realloc(ptr, 5 * sizeof(int));

    if (ptr == NULL) {
        std::cout << "Memory reallocation failed\n";
        return 1;
    }

    ptr[3] = 4;
    ptr[4] = 5;

    for (int i = 0; i < 6; i++) {
        std::cout << ptr[i] << " ";
    }

    free(ptr);
    return 0;
}
