/* class Worker {
    public:
        Worker(int number1, int number2){
            this->number1 = number1;
            this->number2 = number2;
        };

        int number1;    
        int number2;
};

int main(){
    // Worker* worker; //it is not an instantiation it  is a pointer
    Worker worker(4,5);
    return 0;
} */

#include <iostream>
#include "json.hpp"

class Worker {
public:
    Worker(int number1, int number2) : number1(number1), number2(number2) {}

    int number1;
    int number2;

    // Define to_json method
    friend void to_json(nlohmann::json& j, const Worker& w) {
        j = nlohmann::json{{"number1", w.number1}, {"number2", w.number2}};
    }
};

int main() {
    Worker worker(4, 5);

    // Convert the worker object to JSON
    nlohmann::json j = worker;

    // Print the JSON representation
    std::cout << j.dump(4) << std::endl;

    return 0;
}
