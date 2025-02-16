#include <iostream>
#include <cstring>  // For memcpy
#include <string>

template<typename T>
class ExtraArrayElementInitialization {
public:
    T* buf_;      // Pointer to store the dynamically allocated array
    size_t length; // Length of the input string

    // Constructor accepting a std::string
    ExtraArrayElementInitialization(const std::string& str) {
        length = str.size(); 
        
        buf_ = new T[length + 1];  //creating array

        // Copy the string content into buf_, but it does NOT copy the null terminator from std::string
        std::memcpy(buf_, str.c_str(), length); 

        // Explicitly INITIALIZE THE EXTRA ELEMENT at buf_[length]
        // - If T = char, this sets buf_[length] = '\0' (null terminator)
        // - If T = int, it sets buf_[length] = 0
        // - If T = std::string, it sets buf_[length] = "" (empty string)
        buf_[length] = T(); // 

        // Print the stored content (relies on a properly null-terminated string when T = char)
        std::cout << "Stored: " << buf_ << std::endl;
    }

    // Destructor to free allocated memory
    ~ExtraArrayElementInitialization() {
        delete[] buf_;  // Prevents memory leaks
        std::cout << "Buffer deallocated.\n";
    }
};

int main() {
    ExtraArrayElementInitialization<char> h("Hello, World!");  // Creating an instance with a string

    return 0;
}
