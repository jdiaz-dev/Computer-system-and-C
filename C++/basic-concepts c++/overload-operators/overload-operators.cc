#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}

    // Overloading the dereference operator
    int operator*() const {
        return value;
    }
};

int main() {
    Number num(55);
    std::cout << "Dereferencing num: " << *num << std::endl;  // Calls `operator*()`
    return 0;
}
