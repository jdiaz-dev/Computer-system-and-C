#include "macro-and-class.h"
#include <iostream>

int main(){

    Brand brand;
    brand.year = 1996; 
    brand.amount = 30;

    std::cout << brand.year << " " << brand.amount << std::endl; 
    return 0;
}