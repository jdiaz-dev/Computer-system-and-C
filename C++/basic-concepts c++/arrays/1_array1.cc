#include <iostream>

int main() {
    int size = 5;
    int* numbers = new int[size]; // Dynamic allocation

    // Assign values manually
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;

    // Print the array
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }

    // Free the allocated memory
    delete[] numbers;

    return 0;
}
