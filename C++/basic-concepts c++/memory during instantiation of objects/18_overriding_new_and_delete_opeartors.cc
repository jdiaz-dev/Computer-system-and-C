#include <iostream>
#include <cstdlib> // For malloc and free

class CustomMemory {
public:
    // Overloading new operator
    void* operator new(size_t size) {
        std::cout << "Custom new operator: Allocating " << size << " bytes" << std::endl;
        void* ptr = std::malloc(size);
        if (!ptr) {
            throw std::bad_alloc(); // Handle allocation failure
        }
        return ptr;
    }

    // Overloading delete operator
    void operator delete(void* ptr) {
        std::cout << "Custom delete operator: Freeing memory" << std::endl;
        std::free(ptr);
    }

    // Overloading new[] (for array allocations)
    void* operator new[](size_t size) {
        std::cout << "Custom new[] operator: Allocating " << size << " bytes" << std::endl;
        void* ptr = std::malloc(size);
        if (!ptr) {
            throw std::bad_alloc();
        }
        return ptr;
    }

    // Overloading delete[] (for array deletions)
    void operator delete[](void* ptr) {
        std::cout << "Custom delete[] operator: Freeing array memory" << std::endl;
        std::free(ptr);
    }

    void show() {
        std::cout << "CustomMemory object created!" << std::endl;
    }
};

int main() {
    std::cout << "Creating single object:" << std::endl;
    CustomMemory* obj = new CustomMemory();
    obj->show();
    delete obj;

    std::cout << "\nCreating array of objects:" << std::endl;
    CustomMemory* arr = new CustomMemory[2];
    delete[] arr;

    return 0;
}
 