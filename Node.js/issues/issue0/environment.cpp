#include <iostream>

void help(int &value){
    std::cout << "value = " << value << std::endl;
}

int main(){
    int value = 101;
    help(value);
    return 0;
}