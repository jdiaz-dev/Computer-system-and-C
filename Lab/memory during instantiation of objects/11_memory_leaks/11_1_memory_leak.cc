#include <stdexcept>

// =================== Common Causes of Memory Leaks & Fixes
// 1. Forgetting to delete Dynamically Allocated Memory

void foo() {
    int* arr = new int[10];  // Memory allocated
    // Oops! No `delete[] arr;` -> Memory leak!
}

//Fixed Code
void foo2() {
    int* arr = new int[10];
    delete[] arr;  // ✅ Free dynamically allocated array
}

//2. Losing the Pointer Before Freeing
void bar() {
    int* ptr = new int(42);
    ptr = new int(99);  // 🚨 Memory leak! The first allocation is lost.
    delete ptr;  // Only the second allocation is freed!
}

//Fixed Code
void bar2() {
    int* ptr = new int(42);
    delete ptr;  // ✅ Free old memory before reassigning
    ptr = new int(99);
    delete ptr;
}

// 3. Exception Handling Issues
void baz() {
    int* ptr = new int(42);
    throw std::runtime_error("Error!");  // 🚨 Memory leak! `delete ptr;` is never reached!
    delete ptr;
}

//Fixed Code
void baz2() {
    int* ptr = new int(42);
    try {
        throw std::runtime_error("Error!");
    } catch (...) {
        delete ptr;  // ✅ Ensures memory is freed
        throw;  // Re-throw exception
    }
}

// 4. Memory Leaks in Loops
void loopExample() {
    for (int i = 0; i < 10; i++) {
        int* ptr = new int(i);
        // 🚨 Memory leak: `delete ptr;` missing!
    }
}

//Fixed Code
void loopExample() {
    for (int i = 0; i < 10; i++) {
        int* ptr = new int(i);
        delete ptr;  // ✅ Free memory inside loop
    }
}

int main() {
    // foo();
    // foo2();
    bar();
    // bar2();
    baz();
    return 0;
}