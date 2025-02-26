#include <iostream>

struct DataReader {
    union {
        const uint8_t* data8_;
        const uint16_t* data16_;
    };

    // Constructor to initialize the pointer
    DataReader(const void* data) {
        data8_ = static_cast<const uint8_t*>(data);
    }

    void printBytes() {
        std::cout << "First byte: " << static_cast<int>(data8_[0]) << "\n";
        std::cout << "Second byte: " << static_cast<int>(data8_[1]) << "\n";
    }

    void printWords() {
        std::cout << "First 16-bit word: " << data16_[0] << "\n";
    }
};

int main() 
{
    // uint8_t buffer[] = {18, 52, 86, 120};  // Decimal representation
    uint8_t buffer[] = {0x12, 0x34, 0x56, 0x78}; // Example binary data

    DataReader reader(buffer);

    reader.printBytes();  // Access as bytes
    reader.printWords();  // Access as 16-bit words

    return 0;
}
