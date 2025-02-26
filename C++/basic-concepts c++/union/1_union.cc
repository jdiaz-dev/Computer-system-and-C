#include <iostream>
#include <string>
#include <variant>

/* 
    A union inside a class in C++ is useful when you want to store one of multiple data types in a memory-efficient way. Since a union shares memory for all its members, only one value can be stored at a time.
 */
class DataContainer {
private:
    union Data {
        int intValue;
        double doubleValue;
        char charValue;

        // Constructor to avoid uninitialized memory issues
        Data() : intValue(0) {}  
        ~Data() {}  // Destructor (only needed if the union contains non-trivial types)
    } data;

    enum class Type { INT, DOUBLE, CHAR } type;

public:
    // Setters
    void set(int value) {
        data.intValue = value;
        type = Type::INT;
    }

    void set(double value) {
        data.doubleValue = value;
        type = Type::DOUBLE;
    }

    void set(char value) {
        data.charValue = value;
        type = Type::CHAR;
    }

    // Getter with type checking
    void print() const {
        switch (type) {
            case Type::INT:
                std::cout << "Stored int: " << data.intValue << std::endl;
                break;
            case Type::DOUBLE:
                std::cout << "Stored double: " << data.doubleValue << std::endl;
                break;
            case Type::CHAR:
                std::cout << "Stored char: " << data.charValue << std::endl;
                break;
        }
    }
};

int main() {
    DataContainer container;
    
    container.set(42);
    container.print();

    container.set(3.14);
    container.print();

    container.set('A');
    container.print();

    return 0;
}
